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
  public partial class SCGetReplay : TBase
  {
    private List<Protol.FrameData> _frameList;

    public List<Protol.FrameData> FrameList
    {
      get
      {
        return _frameList;
      }
      set
      {
        __isset.frameList = true;
        this._frameList = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool frameList;
    }

    public SCGetReplay() {
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
              if (field.Type == TType.List) {
                {
                  FrameList = new List<Protol.FrameData>();
                  TList _list28 = iprot.ReadListBegin();
                  for( int _i29 = 0; _i29 < _list28.Count; ++_i29)
                  {
                    Protol.FrameData _elem30;
                    _elem30 = new Protol.FrameData();
                    _elem30.Read(iprot);
                    FrameList.Add(_elem30);
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
        TStruct struc = new TStruct("SCGetReplay");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (FrameList != null && __isset.frameList) {
          field.Name = "frameList";
          field.Type = TType.List;
          field.ID = 10;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteListBegin(new TList(TType.Struct, FrameList.Count));
            foreach (Protol.FrameData _iter31 in FrameList)
            {
              _iter31.Write(oprot);
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
      StringBuilder __sb = new StringBuilder("SCGetReplay(");
      bool __first = true;
      if (FrameList != null && __isset.frameList) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("FrameList: ");
        __sb.Append(FrameList);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }

}
