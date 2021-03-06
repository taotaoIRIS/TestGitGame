/**
 * Autogenerated by Thrift Compiler (@PACKAGE_VERSION@)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.IO;
using Thrift;
using Thrift.Collections;
using System.Runtime.Serialization;
using Thrift.Protocol;
using Thrift.Transport;

namespace Protol
{

  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class CommandData : TBase
  {
    private int _type;
    private int _localPlayerId;
    private short _dataLength;
    private byte[] _data;

    public int Type
    {
      get
      {
        return _type;
      }
      set
      {
        __isset.type = true;
        this._type = value;
      }
    }

    public int LocalPlayerId
    {
      get
      {
        return _localPlayerId;
      }
      set
      {
        __isset.localPlayerId = true;
        this._localPlayerId = value;
      }
    }

    public short DataLength
    {
      get
      {
        return _dataLength;
      }
      set
      {
        __isset.dataLength = true;
        this._dataLength = value;
      }
    }

    public byte[] Data
    {
      get
      {
        return _data;
      }
      set
      {
        __isset.data = true;
        this._data = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool type;
      public bool localPlayerId;
      public bool dataLength;
      public bool data;
    }

    public CommandData() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 10:
              if (field.Type == TType.I32) {
                Type = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 11:
              if (field.Type == TType.I32) {
                LocalPlayerId = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 12:
              if (field.Type == TType.I16) {
                DataLength = iprot.ReadI16();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 20:
              if (field.Type == TType.String) {
                Data = iprot.ReadBinary();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("CommandData");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.type) {
          field.Name = "type";
          field.Type = TType.I32;
          field.ID = 10;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(Type);
          oprot.WriteFieldEnd();
        }
        if (__isset.localPlayerId) {
          field.Name = "localPlayerId";
          field.Type = TType.I32;
          field.ID = 11;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(LocalPlayerId);
          oprot.WriteFieldEnd();
        }
        if (__isset.dataLength) {
          field.Name = "dataLength";
          field.Type = TType.I16;
          field.ID = 12;
          oprot.WriteFieldBegin(field);
          oprot.WriteI16(DataLength);
          oprot.WriteFieldEnd();
        }
        if (Data != null && __isset.data) {
          field.Name = "data";
          field.Type = TType.String;
          field.ID = 20;
          oprot.WriteFieldBegin(field);
          oprot.WriteBinary(Data);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("CommandData(");
      bool __first = true;
      if (__isset.type) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Type: ");
        __sb.Append(Type);
      }
      if (__isset.localPlayerId) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("LocalPlayerId: ");
        __sb.Append(LocalPlayerId);
      }
      if (__isset.dataLength) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("DataLength: ");
        __sb.Append(DataLength);
      }
      if (Data != null && __isset.data) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Data: ");
        __sb.Append(Data);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }

}
