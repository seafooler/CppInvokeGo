package main

import (
	"com/seafooler/project"
	"fmt"
	"git.apache.org/thrift.git/lib/go/thrift"
	"os"
)

const (
	NetworkAddr = "127.0.0.1:9099"
)

/*
type MyClass struct {
	UserId int32 `thrift:"userId,1,required" json:"userId"`
        UserName *string `thrift:"userName,2" json:"userName,omitempty"`
}
*/

type dyninvThrift struct {
}

func (this *dyninvThrift) CallFunc(funcname string, id int32, paraList []string, paraSet map[string]bool, paraMap map[int32]string, mycla *project.MyClass) (err error) {
	fmt.Println("-->from client Call: funcname:", funcname)
	fmt.Println("-->from client Call: id:", id)
	for _, q := range paraList {
		fmt.Println("-->from client Call: paraList:", q)
	}
	for setstr := range paraSet {
		fmt.Println("-->from client Call: paraSet:", setstr)
	}
	for mapkey, mapvalue := range paraMap {
                fmt.Printf("-->from client Call: paraMap: key:%d\tvalue:%s\n", mapkey, mapvalue)
        }
	fmt.Println("-->from client Call: MyClass: UserId", mycla.UserId)
	fmt.Println("-->from client Call: MyClass: UserName", mycla.UserName)
	return
}

func main() {
	transportFactory := thrift.NewTBufferedTransportFactory(2048)
	protocolFactory := thrift.NewTBinaryProtocolFactoryDefault()

	serverTransport, err := thrift.NewTServerSocket(NetworkAddr)
    	if err != nil {
        	fmt.Println("Error!", err)
        	os.Exit(1)
    	}
	
	handler := &dyninvThrift{}
	processor := project.NewDyninvThriftProcessor(handler)

	server := thrift.NewTSimpleServer4(processor, serverTransport, transportFactory, protocolFactory)
    	fmt.Println("thrift server in", NetworkAddr)
    	server.Serve()
}
