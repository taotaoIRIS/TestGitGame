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
  public partial class SCRoomList : TBase
  {
    private int _result;
    private List<Protol.RoomData> _roomList;

    public int Result
    {
      get
      {
        return _result;
      }
      set
      {
        __isset.result = true;
        this._result = value;
      }
    }

    public List<Protol.RoomData> RoomList
    {
      get
      {
        return _roomList;
      }
      set
      {
        __isset.roomList = true;
        this._roomList = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool result;
      public bool roomList;
    }

    public SCRoomList() {
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
                Result = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 20:
              if (field.Type == TType.List) {
                {
                  RoomList = new List<Protol.RoomData>();
                  TList _list0 = iprot.ReadListBegin();
                  for( int _i1 = 0; _i1 < _list0.Count; ++_i1)
                  {
                    Protol.RoomData _elem2;
                    _elem2 = new Protol.RoomData();
                    _elem2.Read(iprot);
                    RoomList.Add(_elem2);
                  }
                  iprot.ReadListEnd();
                }
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
        TStruct struc = new TStruct("SCRoomList");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.result) {
          field.Name = "result";
          field.Type = TType.I32;
          field.ID = 10;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(Result);
          oprot.WriteFieldEnd();
        }
        if (RoomList != null && __isset.roomList) {
          field.Name = "roomList";
          field.Type = TType.List;
          field.ID = 20;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteListBegin(new TList(TType.Struct, RoomList.Count));
            foreach (Protol.RoomData _iter3 in RoomList)
            {
              _iter3.Write(oprot);
            }
            oprot.WriteListEnd();
          }
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
      StringBuilder __sb = new StringBuilder("SCRoomList(");
      bool __first = true;
      if (__isset.result) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Result: ");
        __sb.Append(Result);
      }
      if (RoomList != null && __isset.roomList) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("RoomList: ");
        __sb.Append(RoomList);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }

}
