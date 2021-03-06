import grpc
import http_pb2_grpc
import http_pb2

def run_right():
    option = [
        ("grpc.max_send_message_length",512*1024*1024),
        ("grpc.max_receive_message_length",512*1024*1024)
    ]
    with grpc.insecure_channel('127.0.0.1:8080',options=option) as channel:
        stub = http_pb2_grpc.HttpServiceStub(channel)
        response = stub.Echo(http_pb2.HttpRequest(size=4*1024*1024-10))
        print(response)

def run_wrong():
    option = [
        ("grpc.max_send_message_length",512*1024*1024),
        ("grpc.max_receive_message_length",512*1024*1024)
    ]
    with grpc.insecure_channel('127.0.0.1:8080',options=option) as channel:
        stub = http_pb2_grpc.HttpServiceStub(channel)
        response = stub.Echo(http_pb2.HttpRequest(size=4*1024*1024))
        print(response)

if __name__ == '__main__':
    run_right()
    run_wrong()