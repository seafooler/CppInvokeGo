/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef dyninv_TYPES_H
#define dyninv_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace com { namespace seafooler { namespace project {

class MyClass;


class MyClass {
 public:

  MyClass(const MyClass&);
  MyClass& operator=(const MyClass&);
  MyClass() : userId(0), userName() {
  }

  virtual ~MyClass() throw();
  int32_t userId;
  std::string userName;

  void __set_userId(const int32_t val);

  void __set_userName(const std::string& val);

  bool operator == (const MyClass & rhs) const
  {
    if (!(userId == rhs.userId))
      return false;
    if (!(userName == rhs.userName))
      return false;
    return true;
  }
  bool operator != (const MyClass &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyClass & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MyClass &a, MyClass &b);

inline std::ostream& operator<<(std::ostream& out, const MyClass& obj)
{
  obj.printTo(out);
  return out;
}

}}} // namespace

#endif
