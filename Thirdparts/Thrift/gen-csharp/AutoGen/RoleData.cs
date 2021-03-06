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
  public partial class RoleData : TBase
  {
    private string _nickname;
    private ClassType _classType;
    private GameState _gameState;
    private int _levelDataBest;
    private Dictionary<int, LevelData> _levelDataMap;
    private Dictionary<int, PlayerData> _playerMap;

    public string Nickname
    {
      get
      {
        return _nickname;
      }
      set
      {
        __isset.nickname = true;
        this._nickname = value;
      }
    }

    /// <summary>
    /// 
    /// <seealso cref="ClassType"/>
    /// </summary>
    public ClassType ClassType
    {
      get
      {
        return _classType;
      }
      set
      {
        __isset.classType = true;
        this._classType = value;
      }
    }

    /// <summary>
    /// 
    /// <seealso cref="GameState"/>
    /// </summary>
    public GameState GameState
    {
      get
      {
        return _gameState;
      }
      set
      {
        __isset.gameState = true;
        this._gameState = value;
      }
    }

    public int LevelDataBest
    {
      get
      {
        return _levelDataBest;
      }
      set
      {
        __isset.levelDataBest = true;
        this._levelDataBest = value;
      }
    }

    public Dictionary<int, LevelData> LevelDataMap
    {
      get
      {
        return _levelDataMap;
      }
      set
      {
        __isset.levelDataMap = true;
        this._levelDataMap = value;
      }
    }

    public Dictionary<int, PlayerData> PlayerMap
    {
      get
      {
        return _playerMap;
      }
      set
      {
        __isset.playerMap = true;
        this._playerMap = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool nickname;
      public bool classType;
      public bool gameState;
      public bool levelDataBest;
      public bool levelDataMap;
      public bool playerMap;
    }

    public RoleData() {
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
              if (field.Type == TType.String) {
                Nickname = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 20:
              if (field.Type == TType.I32) {
                ClassType = (ClassType)iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 110:
              if (field.Type == TType.I32) {
                GameState = (GameState)iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 120:
              if (field.Type == TType.I32) {
                LevelDataBest = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 130:
              if (field.Type == TType.Map) {
                {
                  LevelDataMap = new Dictionary<int, LevelData>();
                  TMap _map4 = iprot.ReadMapBegin();
                  for( int _i5 = 0; _i5 < _map4.Count; ++_i5)
                  {
                    int _key6;
                    LevelData _val7;
                    _key6 = iprot.ReadI32();
                    _val7 = new LevelData();
                    _val7.Read(iprot);
                    LevelDataMap[_key6] = _val7;
                  }
                  iprot.ReadMapEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 210:
              if (field.Type == TType.Map) {
                {
                  PlayerMap = new Dictionary<int, PlayerData>();
                  TMap _map8 = iprot.ReadMapBegin();
                  for( int _i9 = 0; _i9 < _map8.Count; ++_i9)
                  {
                    int _key10;
                    PlayerData _val11;
                    _key10 = iprot.ReadI32();
                    _val11 = new PlayerData();
                    _val11.Read(iprot);
                    PlayerMap[_key10] = _val11;
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
        TStruct struc = new TStruct("RoleData");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (Nickname != null && __isset.nickname) {
          field.Name = "nickname";
          field.Type = TType.String;
          field.ID = 10;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(Nickname);
          oprot.WriteFieldEnd();
        }
        if (__isset.classType) {
          field.Name = "classType";
          field.Type = TType.I32;
          field.ID = 20;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32((int)ClassType);
          oprot.WriteFieldEnd();
        }
        if (__isset.gameState) {
          field.Name = "gameState";
          field.Type = TType.I32;
          field.ID = 110;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32((int)GameState);
          oprot.WriteFieldEnd();
        }
        if (__isset.levelDataBest) {
          field.Name = "levelDataBest";
          field.Type = TType.I32;
          field.ID = 120;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(LevelDataBest);
          oprot.WriteFieldEnd();
        }
        if (LevelDataMap != null && __isset.levelDataMap) {
          field.Name = "levelDataMap";
          field.Type = TType.Map;
          field.ID = 130;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteMapBegin(new TMap(TType.I32, TType.Struct, LevelDataMap.Count));
            foreach (int _iter12 in LevelDataMap.Keys)
            {
              oprot.WriteI32(_iter12);
              LevelDataMap[_iter12].Write(oprot);
            }
            oprot.WriteMapEnd();
          }
          oprot.WriteFieldEnd();
        }
        if (PlayerMap != null && __isset.playerMap) {
          field.Name = "playerMap";
          field.Type = TType.Map;
          field.ID = 210;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteMapBegin(new TMap(TType.I32, TType.Struct, PlayerMap.Count));
            foreach (int _iter13 in PlayerMap.Keys)
            {
              oprot.WriteI32(_iter13);
              PlayerMap[_iter13].Write(oprot);
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
      StringBuilder __sb = new StringBuilder("RoleData(");
      bool __first = true;
      if (Nickname != null && __isset.nickname) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Nickname: ");
        __sb.Append(Nickname);
      }
      if (__isset.classType) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ClassType: ");
        __sb.Append(ClassType);
      }
      if (__isset.gameState) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("GameState: ");
        __sb.Append(GameState);
      }
      if (__isset.levelDataBest) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("LevelDataBest: ");
        __sb.Append(LevelDataBest);
      }
      if (LevelDataMap != null && __isset.levelDataMap) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("LevelDataMap: ");
        __sb.Append(LevelDataMap);
      }
      if (PlayerMap != null && __isset.playerMap) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("PlayerMap: ");
        __sb.Append(PlayerMap);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }

}
