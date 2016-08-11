// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "dyninvThrift.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::com::seafooler::project;

class dyninvThriftHandler : virtual public dyninvThriftIf {
 public:
  dyninvThriftHandler() {
    // Your initialization goes here
  }

  void CallFunc(const std::string& funcname, const int32_t id, const std::vector<std::string> & paraList, const std::set<std::string> & paraSet, const std::map<int32_t, std::string> & paraMap, const MyClass& mycla) {
    // Your implementation goes here
    printf("CallFunc\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<dyninvThriftHandler> handler(new dyninvThriftHandler());
  shared_ptr<TProcessor> processor(new dyninvThriftProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}
