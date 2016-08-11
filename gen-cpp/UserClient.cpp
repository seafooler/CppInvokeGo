#include "dyninvThrift.h"  
#include <transport/TSocket.h>  
#include <transport/TBufferTransports.h>  
#include <protocol/TBinaryProtocol.h>  
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <unistd.h>

using namespace apache::thrift;  
using namespace apache::thrift::protocol;  
using namespace apache::thrift::transport;  
  
using boost::shared_ptr;  
  
int main(int argc, char **argv) {  
        boost::shared_ptr<TSocket> socket(new TSocket("localhost", 9099));  
        boost::shared_ptr<TTransport> transport(new TBufferedTransport(socket));  
        boost::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));  
  
        transport->open();  
	
	std::cout << "after transport->open()" << std::endl;
	com::seafooler::project::dyninvThriftClient client(protocol);
	
	std::cout << "after client" << std::endl;
	
	/*
	void CallFunc(const std::string& funcname, const int32_t id, const std::vector<std::string> & paraList, const std::set<std::string> & paraSet, const std::map<int32_t, std::string> & paraMap, const MyClass& mycla)
	*/
	std::string funcname="Seafooler";	//funcname
	int32_t id = 25;		//id
	//paraList
	std::vector<std::string> paraList;
	paraList.push_back("hello everyone");
	paraList.push_back("hello world");
	paraList.push_back("hello daixiaohai");
	paraList.push_back("hello haorui");
	
	//paraSet
	std::set<std::string> paraSet;
	paraSet.insert("zuige");
	paraSet.insert("zengdiao");
	paraSet.insert("hangzai");
	
	//paraMap
	std::map<std::int32_t, std::string> paraMap;
        paraMap.insert(std::map<std::int32_t, std::string>::value_type(1,"miaomiao"));
	paraMap.insert(std::map<std::int32_t, std::string>::value_type(2,"wawa"));
	paraMap.insert(std::map<std::int32_t, std::string>::value_type(4,"mianyang"));

	//mycla
	com::seafooler::project::MyClass mycla;
	mycla.userId = 100;
//	mycla.__set_userId(20);
	mycla.userName = "wocaocaocao";
//	mycla.__set_userName("w");

	client.CallFunc(funcname, id, paraList, paraSet, paraMap, mycla);
        
	sleep(5);
	std::cout << "before transport->close()" << std::endl;
	
	transport->close();  
	return 0;
}  
