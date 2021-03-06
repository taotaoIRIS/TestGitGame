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

namespace AutoGen
{

  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class CommandData : TBase
  {
    private CommandType _commandType;
    private short _dataLength;
    private byte[] _data;
    private CommandTargetType _target;

    /// <summary>
    /// 
    /// <seealso cref="CommandType"/>
    /// </summary>
    public CommandType CommandType
    {
      get
      {
        return _commandType;
      }
      set
      {
        __isset.commandType = true;
        this._commandType = value;
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

    /// <summary>
    /// 
    /// <seealso cref="CommandTargetType"/>
    /// </summary>
    public CommandTargetType Target
    {
      get
      {
        return _target;
      }
      set
      {
        __isset.target = true;
        this._target = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool commandType;
      public bool dataLength;
      public bool data;
      public bool target;
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
                CommandType = (CommandType)iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 20:
              if (field.Type == TType.I16) {
                DataLength = iprot.ReadI16();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 30:
              if (field.Type == TType.String) {
                Data = iprot.ReadBinary();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 40:
              if (field.Type == TType.I32) {
                Target = (CommandTargetType)iprot.ReadI32();
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
        if (__isset.commandType) {
          field.Name = "commandType";
          field.Type = TType.I32;
          field.ID = 10;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32((int)CommandType);
          oprot.WriteFieldEnd();
        }
        if (__isset.dataLength) {
          field.Name = "dataLength";
          field.Type = TType.I16;
          field.ID = 20;
          oprot.WriteFieldBegin(field);
          oprot.WriteI16(DataLength);
          oprot.WriteFieldEnd();
        }
        if (Data != null && __isset.data) {
          field.Name = "data";
          field.Type = TType.String;
          field.ID = 30;
          oprot.WriteFieldBegin(field);
          oprot.WriteBinary(Data);
          oprot.WriteFieldEnd();
        }
        if (__isset.target) {
          field.Name = "target";
          field.Type = TType.I32;
          field.ID = 40;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32((int)Target);
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
      if (__isset.commandType) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("CommandType: ");
        __sb.Append(CommandType);
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
      if (__isset.target) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Target: ");
        __sb.Append(Target);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }

}
