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

namespace Config
{

  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class SoundPathMap : TBase
  {
    private Dictionary<string, SoundPath> _soundPathMap;

    public Dictionary<string, SoundPath> SoundPathMap_
    {
      get
      {
        return _soundPathMap;
      }
      set
      {
        __isset.soundPathMap = true;
        this._soundPathMap = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool soundPathMap;
    }

    public SoundPathMap() {
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
              if (field.Type == TType.Map) {
                {
                  SoundPathMap_ = new Dictionary<string, SoundPath>();
                  TMap _map34 = iprot.ReadMapBegin();
                  for( int _i35 = 0; _i35 < _map34.Count; ++_i35)
                  {
                    string _key36;
                    SoundPath _val37;
                    _key36 = iprot.ReadString();
                    _val37 = new SoundPath();
                    _val37.Read(iprot);
                    SoundPathMap_[_key36] = _val37;
                  }
                  iprot.ReadMapEnd();
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
        TStruct struc = new TStruct("SoundPathMap");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (SoundPathMap_ != null && __isset.soundPathMap) {
          field.Name = "soundPathMap";
          field.Type = TType.Map;
          field.ID = 10;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteMapBegin(new TMap(TType.String, TType.Struct, SoundPathMap_.Count));
            foreach (string _iter38 in SoundPathMap_.Keys)
            {
              oprot.WriteString(_iter38);
              SoundPathMap_[_iter38].Write(oprot);
            }
            oprot.WriteMapEnd();
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
      StringBuilder __sb = new StringBuilder("SoundPathMap(");
      bool __first = true;
      if (SoundPathMap_ != null && __isset.soundPathMap) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("SoundPathMap_: ");
        __sb.Append(SoundPathMap_);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }

}