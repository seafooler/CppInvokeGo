/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "dyninvThrift.h"

namespace com { namespace seafooler { namespace project {


dyninvThrift_CallFunc_args::~dyninvThrift_CallFunc_args() throw() {
}


uint32_t dyninvThrift_CallFunc_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->funcname);
          this->__isset.funcname = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->paraList.clear();
            uint32_t _size2;
            ::apache::thrift::protocol::TType _etype5;
            xfer += iprot->readListBegin(_etype5, _size2);
            this->paraList.resize(_size2);
            uint32_t _i6;
            for (_i6 = 0; _i6 < _size2; ++_i6)
            {
              xfer += iprot->readString(this->paraList[_i6]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.paraList = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_SET) {
          {
            this->paraSet.clear();
            uint32_t _size7;
            ::apache::thrift::protocol::TType _etype10;
            xfer += iprot->readSetBegin(_etype10, _size7);
            uint32_t _i11;
            for (_i11 = 0; _i11 < _size7; ++_i11)
            {
              std::string _elem12;
              xfer += iprot->readString(_elem12);
              this->paraSet.insert(_elem12);
            }
            xfer += iprot->readSetEnd();
          }
          this->__isset.paraSet = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->paraMap.clear();
            uint32_t _size13;
            ::apache::thrift::protocol::TType _ktype14;
            ::apache::thrift::protocol::TType _vtype15;
            xfer += iprot->readMapBegin(_ktype14, _vtype15, _size13);
            uint32_t _i17;
            for (_i17 = 0; _i17 < _size13; ++_i17)
            {
              int32_t _key18;
              xfer += iprot->readI32(_key18);
              std::string& _val19 = this->paraMap[_key18];
              xfer += iprot->readString(_val19);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.paraMap = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->mycla.read(iprot);
          this->__isset.mycla = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t dyninvThrift_CallFunc_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("dyninvThrift_CallFunc_args");

  xfer += oprot->writeFieldBegin("funcname", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->funcname);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("paraList", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->paraList.size()));
    std::vector<std::string> ::const_iterator _iter20;
    for (_iter20 = this->paraList.begin(); _iter20 != this->paraList.end(); ++_iter20)
    {
      xfer += oprot->writeString((*_iter20));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("paraSet", ::apache::thrift::protocol::T_SET, 4);
  {
    xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->paraSet.size()));
    std::set<std::string> ::const_iterator _iter21;
    for (_iter21 = this->paraSet.begin(); _iter21 != this->paraSet.end(); ++_iter21)
    {
      xfer += oprot->writeString((*_iter21));
    }
    xfer += oprot->writeSetEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("paraMap", ::apache::thrift::protocol::T_MAP, 5);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_I32, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->paraMap.size()));
    std::map<int32_t, std::string> ::const_iterator _iter22;
    for (_iter22 = this->paraMap.begin(); _iter22 != this->paraMap.end(); ++_iter22)
    {
      xfer += oprot->writeI32(_iter22->first);
      xfer += oprot->writeString(_iter22->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("mycla", ::apache::thrift::protocol::T_STRUCT, 6);
  xfer += this->mycla.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


dyninvThrift_CallFunc_pargs::~dyninvThrift_CallFunc_pargs() throw() {
}


uint32_t dyninvThrift_CallFunc_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("dyninvThrift_CallFunc_pargs");

  xfer += oprot->writeFieldBegin("funcname", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString((*(this->funcname)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32((*(this->id)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("paraList", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>((*(this->paraList)).size()));
    std::vector<std::string> ::const_iterator _iter23;
    for (_iter23 = (*(this->paraList)).begin(); _iter23 != (*(this->paraList)).end(); ++_iter23)
    {
      xfer += oprot->writeString((*_iter23));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("paraSet", ::apache::thrift::protocol::T_SET, 4);
  {
    xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>((*(this->paraSet)).size()));
    std::set<std::string> ::const_iterator _iter24;
    for (_iter24 = (*(this->paraSet)).begin(); _iter24 != (*(this->paraSet)).end(); ++_iter24)
    {
      xfer += oprot->writeString((*_iter24));
    }
    xfer += oprot->writeSetEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("paraMap", ::apache::thrift::protocol::T_MAP, 5);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_I32, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>((*(this->paraMap)).size()));
    std::map<int32_t, std::string> ::const_iterator _iter25;
    for (_iter25 = (*(this->paraMap)).begin(); _iter25 != (*(this->paraMap)).end(); ++_iter25)
    {
      xfer += oprot->writeI32(_iter25->first);
      xfer += oprot->writeString(_iter25->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("mycla", ::apache::thrift::protocol::T_STRUCT, 6);
  xfer += (*(this->mycla)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


dyninvThrift_CallFunc_result::~dyninvThrift_CallFunc_result() throw() {
}


uint32_t dyninvThrift_CallFunc_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    xfer += iprot->skip(ftype);
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t dyninvThrift_CallFunc_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("dyninvThrift_CallFunc_result");

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


dyninvThrift_CallFunc_presult::~dyninvThrift_CallFunc_presult() throw() {
}


uint32_t dyninvThrift_CallFunc_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    xfer += iprot->skip(ftype);
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void dyninvThriftClient::CallFunc(const std::string& funcname, const int32_t id, const std::vector<std::string> & paraList, const std::set<std::string> & paraSet, const std::map<int32_t, std::string> & paraMap, const MyClass& mycla)
{
  send_CallFunc(funcname, id, paraList, paraSet, paraMap, mycla);
  recv_CallFunc();
}

void dyninvThriftClient::send_CallFunc(const std::string& funcname, const int32_t id, const std::vector<std::string> & paraList, const std::set<std::string> & paraSet, const std::map<int32_t, std::string> & paraMap, const MyClass& mycla)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("CallFunc", ::apache::thrift::protocol::T_CALL, cseqid);

  dyninvThrift_CallFunc_pargs args;
  args.funcname = &funcname;
  args.id = &id;
  args.paraList = &paraList;
  args.paraSet = &paraSet;
  args.paraMap = &paraMap;
  args.mycla = &mycla;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void dyninvThriftClient::recv_CallFunc()
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("CallFunc") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  dyninvThrift_CallFunc_presult result;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  return;
}

bool dyninvThriftProcessor::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return true;
  }
  (this->*(pfn->second))(seqid, iprot, oprot, callContext);
  return true;
}

void dyninvThriftProcessor::process_CallFunc(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("dyninvThrift.CallFunc", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "dyninvThrift.CallFunc");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "dyninvThrift.CallFunc");
  }

  dyninvThrift_CallFunc_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "dyninvThrift.CallFunc", bytes);
  }

  dyninvThrift_CallFunc_result result;
  try {
    iface_->CallFunc(args.funcname, args.id, args.paraList, args.paraSet, args.paraMap, args.mycla);
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "dyninvThrift.CallFunc");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("CallFunc", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "dyninvThrift.CallFunc");
  }

  oprot->writeMessageBegin("CallFunc", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "dyninvThrift.CallFunc", bytes);
  }
}

::boost::shared_ptr< ::apache::thrift::TProcessor > dyninvThriftProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< dyninvThriftIfFactory > cleanup(handlerFactory_);
  ::boost::shared_ptr< dyninvThriftIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::boost::shared_ptr< ::apache::thrift::TProcessor > processor(new dyninvThriftProcessor(handler));
  return processor;
}

void dyninvThriftConcurrentClient::CallFunc(const std::string& funcname, const int32_t id, const std::vector<std::string> & paraList, const std::set<std::string> & paraSet, const std::map<int32_t, std::string> & paraMap, const MyClass& mycla)
{
  int32_t seqid = send_CallFunc(funcname, id, paraList, paraSet, paraMap, mycla);
  recv_CallFunc(seqid);
}

int32_t dyninvThriftConcurrentClient::send_CallFunc(const std::string& funcname, const int32_t id, const std::vector<std::string> & paraList, const std::set<std::string> & paraSet, const std::map<int32_t, std::string> & paraMap, const MyClass& mycla)
{
  int32_t cseqid = this->sync_.generateSeqId();
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  oprot_->writeMessageBegin("CallFunc", ::apache::thrift::protocol::T_CALL, cseqid);

  dyninvThrift_CallFunc_pargs args;
  args.funcname = &funcname;
  args.id = &id;
  args.paraList = &paraList;
  args.paraSet = &paraSet;
  args.paraMap = &paraMap;
  args.mycla = &mycla;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
  return cseqid;
}

void dyninvThriftConcurrentClient::recv_CallFunc(const int32_t seqid)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  // the read mutex gets dropped and reacquired as part of waitForWork()
  // The destructor of this sentry wakes up other clients
  ::apache::thrift::async::TConcurrentRecvSentry sentry(&this->sync_, seqid);

  while(true) {
    if(!this->sync_.getPending(fname, mtype, rseqid)) {
      iprot_->readMessageBegin(fname, mtype, rseqid);
    }
    if(seqid == rseqid) {
      if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
        ::apache::thrift::TApplicationException x;
        x.read(iprot_);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
        sentry.commit();
        throw x;
      }
      if (mtype != ::apache::thrift::protocol::T_REPLY) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
      }
      if (fname.compare("CallFunc") != 0) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();

        // in a bad state, don't commit
        using ::apache::thrift::protocol::TProtocolException;
        throw TProtocolException(TProtocolException::INVALID_DATA);
      }
      dyninvThrift_CallFunc_presult result;
      result.read(iprot_);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();

      sentry.commit();
      return;
    }
    // seqid != rseqid
    this->sync_.updatePending(fname, mtype, rseqid);

    // this will temporarily unlock the readMutex, and let other clients get work done
    this->sync_.waitForWork(seqid);
  } // end while(true)
}

}}} // namespace

