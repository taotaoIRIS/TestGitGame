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
  public partial class SCExitRoom : TBase
  {
    private int _result;
    private List<Protol.PlayerData> _playerList;
    private Protol.PlayerData _exitPlayer;

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

    public Protol.PlayerData ExitPlayer
    {
      get
      {
        return _exitPlayer;
      }
      set
      {
        __isset.exitPlayer = true;
        this._exitPlayer = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool result;
      public bool playerList;
      public bool exitPlayer;
    }

    public SCExitRoom() {
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
                  PlayerList = new List<Protol.PlayerData>();
                  TList _list8 = iprot.ReadListBegin();
                  for( int _i9 = 0; _i9 < _list8.Count; ++_i9)
                  {
                    Protol.PlayerData _elem10;
                    _elem10 = new Protol.PlayerData();
                    _elem10.Read(iprot);
                    PlayerList.Add(_elem10);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 30:
              if (field.Type == TType.Struct) {
                ExitPlayer = new Protol.PlayerData();
                ExitPlayer.Read(iprot);
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
        TStruct struc = new TStruct("SCExitRoom");
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
        if (PlayerList != null && __isset.playerList) {
          field.Name = "playerList";
          field.Type = TType.List;
          field.ID = 20;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteListBegin(new TList(TType.Struct, PlayerList.Count));
            foreach (Protol.PlayerData _iter11 in PlayerList)
            {
              _iter11.Write(oprot);
            }
            oprot.WriteListEnd();
          }
          oprot.WriteFieldEnd();
        }
        if (ExitPlayer != null && __isset.exitPlayer) {
          field.Name = "exitPlayer";
          field.Type = TType.Struct;
          field.ID = 30;
          oprot.WriteFieldBegin(field);
          ExitPlayer.Write(oprot);
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
      StringBuilder __sb = new StringBuilder("SCExitRoom(");
      bool __first = true;
      if (__isset.result) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Result: ");
        __sb.Append(Result);
      }
      if (PlayerList != null && __isset.playerList) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("PlayerList: ");
        __sb.Append(PlayerList);
      }
      if (ExitPlayer != null && __isset.exitPlayer) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ExitPlayer: ");
        __sb.Append(ExitPlayer== null ? "<null>" : ExitPlayer.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }

}