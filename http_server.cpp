// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

// A server to receive HttpRequest and send back HttpResponse.

#include <butil/logging.h>
#include <brpc/server.h>
#include <brpc/restful.h>
#include <string>
#include <iostream>
#include "http.pb.h"


// Service with static path.
class HttpServiceImpl : public HttpService {
public:
    HttpServiceImpl() {};
    virtual ~HttpServiceImpl() {};
    void Echo(google::protobuf::RpcController* cntl_base,
              const HttpRequest* input,
              HttpResponse* result,
              google::protobuf::Closure* done) {
        auto size = input->size();
        // This object helps you to call done->Run() in RAII style. If you need
        // to process the request asynchronously, pass done_guard.release().
        brpc::ClosureGuard done_guard(done);

        std::string re;
        std::cout<<"size:"<<size<<std::endl;
        for(int i=0;i<size;i++)
            re+="A";
        result->set_result(re);
        return;
        
    }
};



int main(int argc, char* argv[]) {
    // Parse gflags. We recommend you to use gflags as well.

    // Generally you only need one Server.
    brpc::Server server;

    HttpServiceImpl http_svc;
    
    // Add services into server. Notice the second parameter, because the
    // service is put on stack, we don't want server to delete it, otherwise
    // use brpc::SERVER_OWNS_SERVICE.
    if (server.AddService(&http_svc,
                          brpc::SERVER_DOESNT_OWN_SERVICE) != 0) {
        LOG(ERROR) << "Fail to add http_svc";
        return -1;
    }
   

    // Start the server.
    brpc::ServerOptions options;
    if (server.Start(8080, &options) != 0) {
        LOG(ERROR) << "Fail to start HttpServer";
        return -1;
    }

    // Wait until Ctrl-C is pressed, then Stop() and Join() the server.
    server.RunUntilAskedToQuit();
    return 0;
}
