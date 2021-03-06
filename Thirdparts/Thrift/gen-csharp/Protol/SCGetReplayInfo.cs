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
  public partial class SCGetReplayInfo : TBase
  {
    private int _lastFrameIndex;
    private int _influenceFrameCount;
    private List<Protol.PlayerData> _playerList;
    private List<int> _playerExitFrameList;

    public int LastFrameIndex
    {
      get
      {
        return _lastFrameIndex;
      }
      set
      {
        __isset.lastFrameIndex = true;
        this._lastFrameIndex = value;
      }
    }

    public int InfluenceFrameCount
    {
      get
      {
        return _influenceFrameCount;
      }
      set
      {
        __isset.influenceFrameCount = true;
        this._influenceFrameCount = value;
      }
    }

    public List<Protol.PlayerData> PlayerList
    {
      get
      {
        return _playerList;
      }
      set
      {
        __isset.playerList = true;
        this._playerList = value;
      }
    }

    public List<int> PlayerExitFrameList
    {
      get
      {
        return _playerExitFrameList;
      }
      set
      {
        __isset.playerExitFrameList = true;
        this._playerExitFrameList = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool lastFrameIndex;
      public bool influenceFrameCount;
      public bool playerList;
      public bool playerExitFrameList;
    }

    public SCGetReplayInfo() {
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
                LastFrameIndex = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 20:
              if (field.Type == TType.I32) {
                InfluenceFrameCount = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 30:
              if (field.Type == TType.List) {
                {
                  PlayerList = new List<Protol.PlayerData>();
                  TList _list20 = iprot.ReadListBegin();
                  for( int _i21 = 0; _i21 < _list20.Count; ++_i21)
                  {
                    Protol.PlayerData _elem22;
                    _elem22 = new Protol.PlayerData();
                    _elem22.Read(iprot);
                    PlayerList.Add(_elem22);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 40:
              if (field.Type == TType.List) {
                {
                  PlayerExitFrameList = new List<int>();
                  TList _list23 = iprot.ReadListBegin();
                  for( int _i24 = 0; _i24 < _list23.Count; ++_i24)
                  {
                    int _elem25;
                    _elem25 = iprot.ReadI32();
                    PlayerExitFrameList.Add(_elem25);
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
        TStruct struc = new TStruct("SCGetReplayInfo");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.lastFrameIndex) {
          field.Name = "lastFrameIndex";
          field.Type = TType.I32;
          field.ID = 10;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(LastFrameIndex);
          oprot.WriteFieldEnd();
        }
        if (__isset.influenceFrameCount) {
          field.Name = "influenceFrameCount";
          field.Type = TType.I32;
          field.ID = 20;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(InfluenceFrameCount);
          oprot.WriteFieldEnd();
        }
        if (PlayerList != null && __isset.playerList) {
          field.Name = "playerList";
          field.Type = TType.List;
          field.ID = 30;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteListBegin(new TList(TType.Struct, PlayerList.Count));
            foreach (Protol.PlayerData _iter26 in PlayerList)
            {
              _iter26.Write(oprot);
            }
            oprot.WriteListEnd();
          }
          oprot.WriteFieldEnd();
        }
        if (PlayerExitFrameList != null && __isset.playerExitFrameList) {
          field.Name = "playerExitFrameList";
          field.Type = TType.List;
          field.ID = 40;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteListBegin(new TList(TType.I32, PlayerExitFrameList.Count));
            foreach (int _iter27 in PlayerExitFrameList)
            {
              oprot.WriteI32(_iter27);
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
      StringBuilder __sb = new StringBuilder("SCGetReplayInfo(");
      bool __first = true;
      if (__isset.lastFrameIndex) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("LastFrameIndex: ");
        __sb.Append(LastFrameIndex);
      }
      if (__isset.influenceFrameCount) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("InfluenceFrameCount: ");
        __sb.Append(InfluenceFrameCount);
      }
      if (PlayerList != null && __isset.playerList) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("PlayerList: ");
        __sb.Append(PlayerList);
      }
      if (PlayerExitFrameList != null && __isset.playerExitFrameList) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("PlayerExitFrameList: ");
        __sb.Append(PlayerExitFrameList);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }

}
