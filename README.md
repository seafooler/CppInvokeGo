# CppInvokeGo
Cpp invokes Go via thrift
#Environment
OS:		Macbook OSX
Thrift: 0.9.3


# server
The server is written in Go.

Step1:
Input the command below, and you'll get the folder gen-go
```
thrift --gen go dyninv.thrift
```

Step2:


# client
The client is written in C++.

The compilation command is as follows:
```
g++ dyninvThrift.cpp dyninv_constants.cpp dyninv_types.cpp UserClient.cpp -o UserClient -L/usr/local/lib -I/usr/local/include/thrift/ -std=c++11 -lthrift
```
