/**
 * Autogenerated by Thrift Compiler (@PACKAGE_VERSION@)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "command_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace CytxGame {


CmdInstantiate::~CmdInstantiate() throw() {
}


void CmdInstantiate::__set_uid(const int32_t val) {
  this->uid = val;
}

void CmdInstantiate::__set_owner(const int32_t val) {
  this->owner = val;
}

void CmdInstantiate::__set_resource(const std::string& val) {
  this->resource = val;
}

void CmdInstantiate::__set_pos(const  ::CytxGame::Position& val) {
  this->pos = val;
}

void CmdInstantiate::__set_rot(const  ::CytxGame::Rotation& val) {
  this->rot = val;
}

uint32_t CmdInstantiate::read(::apache::thrift::protocol::TProtocol* iprot) {

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
      case 10:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->uid);
          this->__isset.uid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 20:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->owner);
          this->__isset.owner = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 30:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->resource);
          this->__isset.resource = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 40:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->pos.read(iprot);
          this->__isset.pos = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 50:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->rot.read(iprot);
          this->__isset.rot = true;
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

uint32_t CmdInstantiate::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CmdInstantiate");

  xfer += oprot->writeFieldBegin("uid", ::apache::thrift::protocol::T_I32, 10);
  xfer += oprot->writeI32(this->uid);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("owner", ::apache::thrift::protocol::T_I32, 20);
  xfer += oprot->writeI32(this->owner);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("resource", ::apache::thrift::protocol::T_STRING, 30);
  xfer += oprot->writeString(this->resource);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("pos", ::apache::thrift::protocol::T_STRUCT, 40);
  xfer += this->pos.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("rot", ::apache::thrift::protocol::T_STRUCT, 50);
  xfer += this->rot.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(CmdInstantiate &a, CmdInstantiate &b) {
  using ::std::swap;
  swap(a.uid, b.uid);
  swap(a.owner, b.owner);
  swap(a.resource, b.resource);
  swap(a.pos, b.pos);
  swap(a.rot, b.rot);
  swap(a.__isset, b.__isset);
}

CmdInstantiate::CmdInstantiate(const CmdInstantiate& other0) {
  uid = other0.uid;
  owner = other0.owner;
  resource = other0.resource;
  pos = other0.pos;
  rot = other0.rot;
  __isset = other0.__isset;
}
CmdInstantiate& CmdInstantiate::operator=(const CmdInstantiate& other1) {
  uid = other1.uid;
  owner = other1.owner;
  resource = other1.resource;
  pos = other1.pos;
  rot = other1.rot;
  __isset = other1.__isset;
  return *this;
}
void CmdInstantiate::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "CmdInstantiate(";
  out << "uid=" << to_string(uid);
  out << ", " << "owner=" << to_string(owner);
  out << ", " << "resource=" << to_string(resource);
  out << ", " << "pos=" << to_string(pos);
  out << ", " << "rot=" << to_string(rot);
  out << ")";
}


CmdTakeDamage::~CmdTakeDamage() throw() {
}


void CmdTakeDamage::__set_amount(const int32_t val) {
  this->amount = val;
}

void CmdTakeDamage::__set_causer(const int32_t val) {
  this->causer = val;
}

uint32_t CmdTakeDamage::read(::apache::thrift::protocol::TProtocol* iprot) {

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
      case 10:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->amount);
          this->__isset.amount = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 20:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->causer);
          this->__isset.causer = true;
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

uint32_t CmdTakeDamage::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CmdTakeDamage");

  xfer += oprot->writeFieldBegin("amount", ::apache::thrift::protocol::T_I32, 10);
  xfer += oprot->writeI32(this->amount);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("causer", ::apache::thrift::protocol::T_I32, 20);
  xfer += oprot->writeI32(this->causer);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(CmdTakeDamage &a, CmdTakeDamage &b) {
  using ::std::swap;
  swap(a.amount, b.amount);
  swap(a.causer, b.causer);
  swap(a.__isset, b.__isset);
}

CmdTakeDamage::CmdTakeDamage(const CmdTakeDamage& other2) {
  amount = other2.amount;
  causer = other2.causer;
  __isset = other2.__isset;
}
CmdTakeDamage& CmdTakeDamage::operator=(const CmdTakeDamage& other3) {
  amount = other3.amount;
  causer = other3.causer;
  __isset = other3.__isset;
  return *this;
}
void CmdTakeDamage::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "CmdTakeDamage(";
  out << "amount=" << to_string(amount);
  out << ", " << "causer=" << to_string(causer);
  out << ")";
}


CmdStruct::~CmdStruct() throw() {
}


void CmdStruct::__set_type(const int32_t val) {
  this->type = val;
}

void CmdStruct::__set_argv1(const int32_t val) {
  this->argv1 = val;
}

void CmdStruct::__set_argv2(const int32_t val) {
  this->argv2 = val;
}

uint32_t CmdStruct::read(::apache::thrift::protocol::TProtocol* iprot) {

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
      case 10:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->type);
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 20:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->argv1);
          this->__isset.argv1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 30:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->argv2);
          this->__isset.argv2 = true;
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

uint32_t CmdStruct::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CmdStruct");

  xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_I32, 10);
  xfer += oprot->writeI32(this->type);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("argv1", ::apache::thrift::protocol::T_I32, 20);
  xfer += oprot->writeI32(this->argv1);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("argv2", ::apache::thrift::protocol::T_I32, 30);
  xfer += oprot->writeI32(this->argv2);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(CmdStruct &a, CmdStruct &b) {
  using ::std::swap;
  swap(a.type, b.type);
  swap(a.argv1, b.argv1);
  swap(a.argv2, b.argv2);
  swap(a.__isset, b.__isset);
}

CmdStruct::CmdStruct(const CmdStruct& other4) {
  type = other4.type;
  argv1 = other4.argv1;
  argv2 = other4.argv2;
  __isset = other4.__isset;
}
CmdStruct& CmdStruct::operator=(const CmdStruct& other5) {
  type = other5.type;
  argv1 = other5.argv1;
  argv2 = other5.argv2;
  __isset = other5.__isset;
  return *this;
}
void CmdStruct::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "CmdStruct(";
  out << "type=" << to_string(type);
  out << ", " << "argv1=" << to_string(argv1);
  out << ", " << "argv2=" << to_string(argv2);
  out << ")";
}

} // namespace
