/**
 * Autogenerated by Thrift Compiler (@PACKAGE_VERSION@)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef profile_TYPES_H
#define profile_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace CytxGame {

struct UserLoginMode {
  enum type {
    EUnLogin = 0,
    EAccount = 1,
    ETourist = 2
  };
};

extern const std::map<int, const char*> _UserLoginMode_VALUES_TO_NAMES;

struct ClassType {
  enum type {
    None = 0,
    Warrior = 1,
    Wizzard = 2
  };
};

extern const std::map<int, const char*> _ClassType_VALUES_TO_NAMES;

struct GameState {
  enum type {
    Offline = 0,
    Waiting = 1,
    Playing = 2
  };
};

extern const std::map<int, const char*> _GameState_VALUES_TO_NAMES;

struct CommandType {
  enum type {
    Data = 0,
    Instantiate = 1
  };
};

extern const std::map<int, const char*> _CommandType_VALUES_TO_NAMES;

struct CommandTargetType {
  enum type {
    Server = 0,
    Others = 1,
    OthersBuffered = 2,
    All = 3,
    AllBuffered = 4
  };
};

extern const std::map<int, const char*> _CommandTargetType_VALUES_TO_NAMES;

struct FrameCmdType {
  enum type {
    Move = 0,
    Jump = 1
  };
};

extern const std::map<int, const char*> _FrameCmdType_VALUES_TO_NAMES;

struct CSLoginResult {
  enum type {
    ESuccess = 0,
    EAccountNotExist = 1,
    EAccountError = 2,
    EPasswordError = 3,
    EAccountAlreadyLogged = 4,
    ELandingAccount = 5
  };
};

extern const std::map<int, const char*> _CSLoginResult_VALUES_TO_NAMES;

struct CSRegisterResult {
  enum type {
    ESuccess = 0,
    EAccountError = 1,
    EPasswordError = 2,
    EAccountAlreadyExist = 3,
    ELandingAccount = 4
  };
};

extern const std::map<int, const char*> _CSRegisterResult_VALUES_TO_NAMES;

struct CSTouristResult {
  enum type {
    ESuccess = 0,
    EAccountAlreadyLogged = 1
  };
};

extern const std::map<int, const char*> _CSTouristResult_VALUES_TO_NAMES;

struct CSRandomNicknameResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _CSRandomNicknameResult_VALUES_TO_NAMES;

struct CSSetNicknameResult {
  enum type {
    ESuccess = 0,
    ENicknameLengthError = 1,
    ENicknameAlreadyExist = 2,
    EFaild = 3
  };
};

extern const std::map<int, const char*> _CSSetNicknameResult_VALUES_TO_NAMES;

struct CSSetClassTypeResult {
  enum type {
    ESuccess = 0,
    EAlreadySetClassType = 1
  };
};

extern const std::map<int, const char*> _CSSetClassTypeResult_VALUES_TO_NAMES;

struct CSRefreshFriendListResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _CSRefreshFriendListResult_VALUES_TO_NAMES;

struct CSInvitationResult {
  enum type {
    ESuccess = 0,
    ETargetNotOnline = 1,
    ETargetNotWaiting = 2,
    ETargetClassTypeWizzard = 3,
    ETargetAlreadyInvited = 4,
    EAlreadyInvitation = 5
  };
};

extern const std::map<int, const char*> _CSInvitationResult_VALUES_TO_NAMES;

struct CSConfirmInvitationResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _CSConfirmInvitationResult_VALUES_TO_NAMES;

struct CSCancelInvitationResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _CSCancelInvitationResult_VALUES_TO_NAMES;

struct CSExitInvitationResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _CSExitInvitationResult_VALUES_TO_NAMES;

struct CSChooseLevelResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _CSChooseLevelResult_VALUES_TO_NAMES;

struct CSFindUserResult {
  enum type {
    ESuccess = 0,
    ETargetClassTypeWizzard = 1
  };
};

extern const std::map<int, const char*> _CSFindUserResult_VALUES_TO_NAMES;

struct CreateInstanceResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _CreateInstanceResult_VALUES_TO_NAMES;

struct InstanceListResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _InstanceListResult_VALUES_TO_NAMES;

struct JoinInstanceResult {
  enum type {
    ESuccess = 0,
    ENotFindInstance = 1
  };
};

extern const std::map<int, const char*> _JoinInstanceResult_VALUES_TO_NAMES;

struct SaveDungeonProgressResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _SaveDungeonProgressResult_VALUES_TO_NAMES;

struct PauseResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _PauseResult_VALUES_TO_NAMES;

struct ContinueResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _ContinueResult_VALUES_TO_NAMES;

struct QuickMatchResult {
  enum type {
    ESuccess = 0,
    ETargetNotOnline = 1,
    ETargetNotWaiting = 2
  };
};

extern const std::map<int, const char*> _QuickMatchResult_VALUES_TO_NAMES;

struct StartGameResult {
  enum type {
    ESuccess = 0,
    ELastLevel = 1
  };
};

extern const std::map<int, const char*> _StartGameResult_VALUES_TO_NAMES;

struct StartGameConfirmResult {
  enum type {
    ESuccess = 0,
    EConfirmTimeout = 1
  };
};

extern const std::map<int, const char*> _StartGameConfirmResult_VALUES_TO_NAMES;

class Position;

class Rotation;

class PlayerData;

class ServerData;

class PetData;

class LevelData;

class RoleData;

class UserData;

class InstanceData;

class UnitSyncData;

class UnitSyncDataList;

class CommandData;

class FrameCommand;

class FrameData;

class ReplayData;

class AccountData;

typedef struct _Position__isset {
  _Position__isset() : x(false), y(false), z(false) {}
  bool x :1;
  bool y :1;
  bool z :1;
} _Position__isset;

class Position : public virtual ::apache::thrift::TBase {
 public:

  Position(const Position&);
  Position& operator=(const Position&);
  Position() : x(0), y(0), z(0) {
  }

  virtual ~Position() throw();
  double x;
  double y;
  double z;

  _Position__isset __isset;

  void __set_x(const double val);

  void __set_y(const double val);

  void __set_z(const double val);

  bool operator == (const Position & rhs) const
  {
    if (!(x == rhs.x))
      return false;
    if (!(y == rhs.y))
      return false;
    if (!(z == rhs.z))
      return false;
    return true;
  }
  bool operator != (const Position &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Position & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Position &a, Position &b);

inline std::ostream& operator<<(std::ostream& out, const Position& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Rotation__isset {
  _Rotation__isset() : x(false), y(false), z(false), w(false) {}
  bool x :1;
  bool y :1;
  bool z :1;
  bool w :1;
} _Rotation__isset;

class Rotation : public virtual ::apache::thrift::TBase {
 public:

  Rotation(const Rotation&);
  Rotation& operator=(const Rotation&);
  Rotation() : x(0), y(0), z(0), w(0) {
  }

  virtual ~Rotation() throw();
  double x;
  double y;
  double z;
  double w;

  _Rotation__isset __isset;

  void __set_x(const double val);

  void __set_y(const double val);

  void __set_z(const double val);

  void __set_w(const double val);

  bool operator == (const Rotation & rhs) const
  {
    if (!(x == rhs.x))
      return false;
    if (!(y == rhs.y))
      return false;
    if (!(z == rhs.z))
      return false;
    if (!(w == rhs.w))
      return false;
    return true;
  }
  bool operator != (const Rotation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Rotation & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Rotation &a, Rotation &b);

inline std::ostream& operator<<(std::ostream& out, const Rotation& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _PlayerData__isset {
  _PlayerData__isset() : userId(false), nickname(false), classType(false), gameState(false), levelDataBest(false) {}
  bool userId :1;
  bool nickname :1;
  bool classType :1;
  bool gameState :1;
  bool levelDataBest :1;
} _PlayerData__isset;

class PlayerData : public virtual ::apache::thrift::TBase {
 public:

  PlayerData(const PlayerData&);
  PlayerData& operator=(const PlayerData&);
  PlayerData() : userId(0), nickname(), classType((ClassType::type)0), gameState((GameState::type)0), levelDataBest(0) {
  }

  virtual ~PlayerData() throw();
  int32_t userId;
  std::string nickname;
  ClassType::type classType;
  GameState::type gameState;
  int32_t levelDataBest;

  _PlayerData__isset __isset;

  void __set_userId(const int32_t val);

  void __set_nickname(const std::string& val);

  void __set_classType(const ClassType::type val);

  void __set_gameState(const GameState::type val);

  void __set_levelDataBest(const int32_t val);

  bool operator == (const PlayerData & rhs) const
  {
    if (!(userId == rhs.userId))
      return false;
    if (!(nickname == rhs.nickname))
      return false;
    if (!(classType == rhs.classType))
      return false;
    if (!(gameState == rhs.gameState))
      return false;
    if (!(levelDataBest == rhs.levelDataBest))
      return false;
    return true;
  }
  bool operator != (const PlayerData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const PlayerData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(PlayerData &a, PlayerData &b);

inline std::ostream& operator<<(std::ostream& out, const PlayerData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ServerData__isset {
  _ServerData__isset() : connId(false) {}
  bool connId :1;
} _ServerData__isset;

class ServerData : public virtual ::apache::thrift::TBase {
 public:

  ServerData(const ServerData&);
  ServerData& operator=(const ServerData&);
  ServerData() : connId(0) {
  }

  virtual ~ServerData() throw();
  int32_t connId;

  _ServerData__isset __isset;

  void __set_connId(const int32_t val);

  bool operator == (const ServerData & rhs) const
  {
    if (!(connId == rhs.connId))
      return false;
    return true;
  }
  bool operator != (const ServerData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ServerData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ServerData &a, ServerData &b);

inline std::ostream& operator<<(std::ostream& out, const ServerData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _PetData__isset {
  _PetData__isset() : petId(false), health(false) {}
  bool petId :1;
  bool health :1;
} _PetData__isset;

class PetData : public virtual ::apache::thrift::TBase {
 public:

  PetData(const PetData&);
  PetData& operator=(const PetData&);
  PetData() : petId(0), health(0) {
  }

  virtual ~PetData() throw();
  int32_t petId;
  int32_t health;

  _PetData__isset __isset;

  void __set_petId(const int32_t val);

  void __set_health(const int32_t val);

  bool operator == (const PetData & rhs) const
  {
    if (!(petId == rhs.petId))
      return false;
    if (!(health == rhs.health))
      return false;
    return true;
  }
  bool operator != (const PetData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const PetData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(PetData &a, PetData &b);

inline std::ostream& operator<<(std::ostream& out, const PetData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _LevelData__isset {
  _LevelData__isset() : levelProgress(false), petDataList(false), restMana(false) {}
  bool levelProgress :1;
  bool petDataList :1;
  bool restMana :1;
} _LevelData__isset;

class LevelData : public virtual ::apache::thrift::TBase {
 public:

  LevelData(const LevelData&);
  LevelData& operator=(const LevelData&);
  LevelData() : levelProgress(0), restMana(0) {
  }

  virtual ~LevelData() throw();
  int32_t levelProgress;
  std::vector<PetData>  petDataList;
  int32_t restMana;

  _LevelData__isset __isset;

  void __set_levelProgress(const int32_t val);

  void __set_petDataList(const std::vector<PetData> & val);

  void __set_restMana(const int32_t val);

  bool operator == (const LevelData & rhs) const
  {
    if (!(levelProgress == rhs.levelProgress))
      return false;
    if (!(petDataList == rhs.petDataList))
      return false;
    if (!(restMana == rhs.restMana))
      return false;
    return true;
  }
  bool operator != (const LevelData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const LevelData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(LevelData &a, LevelData &b);

inline std::ostream& operator<<(std::ostream& out, const LevelData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _RoleData__isset {
  _RoleData__isset() : nickname(false), classType(false), gameState(false), levelDataBest(false), levelDataMap(false), playerMap(false) {}
  bool nickname :1;
  bool classType :1;
  bool gameState :1;
  bool levelDataBest :1;
  bool levelDataMap :1;
  bool playerMap :1;
} _RoleData__isset;

class RoleData : public virtual ::apache::thrift::TBase {
 public:

  RoleData(const RoleData&);
  RoleData& operator=(const RoleData&);
  RoleData() : nickname(), classType((ClassType::type)0), gameState((GameState::type)0), levelDataBest(0) {
  }

  virtual ~RoleData() throw();
  std::string nickname;
  ClassType::type classType;
  GameState::type gameState;
  int32_t levelDataBest;
  std::map<int32_t, LevelData>  levelDataMap;
  std::map<int32_t, PlayerData>  playerMap;

  _RoleData__isset __isset;

  void __set_nickname(const std::string& val);

  void __set_classType(const ClassType::type val);

  void __set_gameState(const GameState::type val);

  void __set_levelDataBest(const int32_t val);

  void __set_levelDataMap(const std::map<int32_t, LevelData> & val);

  void __set_playerMap(const std::map<int32_t, PlayerData> & val);

  bool operator == (const RoleData & rhs) const
  {
    if (!(nickname == rhs.nickname))
      return false;
    if (!(classType == rhs.classType))
      return false;
    if (!(gameState == rhs.gameState))
      return false;
    if (!(levelDataBest == rhs.levelDataBest))
      return false;
    if (!(levelDataMap == rhs.levelDataMap))
      return false;
    if (!(playerMap == rhs.playerMap))
      return false;
    return true;
  }
  bool operator != (const RoleData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RoleData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(RoleData &a, RoleData &b);

inline std::ostream& operator<<(std::ostream& out, const RoleData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _UserData__isset {
  _UserData__isset() : userId(false), userAccount(false), userPassword(false), userLoginMode(false), alreadyRegist(false), roleData(false), serverData(false) {}
  bool userId :1;
  bool userAccount :1;
  bool userPassword :1;
  bool userLoginMode :1;
  bool alreadyRegist :1;
  bool roleData :1;
  bool serverData :1;
} _UserData__isset;

class UserData : public virtual ::apache::thrift::TBase {
 public:

  UserData(const UserData&);
  UserData& operator=(const UserData&);
  UserData() : userId(0), userAccount(), userPassword(), userLoginMode(0), alreadyRegist(0) {
  }

  virtual ~UserData() throw();
  int32_t userId;
  std::string userAccount;
  std::string userPassword;
  int32_t userLoginMode;
  bool alreadyRegist;
  RoleData roleData;
  ServerData serverData;

  _UserData__isset __isset;

  void __set_userId(const int32_t val);

  void __set_userAccount(const std::string& val);

  void __set_userPassword(const std::string& val);

  void __set_userLoginMode(const int32_t val);

  void __set_alreadyRegist(const bool val);

  void __set_roleData(const RoleData& val);

  void __set_serverData(const ServerData& val);

  bool operator == (const UserData & rhs) const
  {
    if (!(userId == rhs.userId))
      return false;
    if (!(userAccount == rhs.userAccount))
      return false;
    if (!(userPassword == rhs.userPassword))
      return false;
    if (!(userLoginMode == rhs.userLoginMode))
      return false;
    if (!(alreadyRegist == rhs.alreadyRegist))
      return false;
    if (!(roleData == rhs.roleData))
      return false;
    if (!(serverData == rhs.serverData))
      return false;
    return true;
  }
  bool operator != (const UserData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(UserData &a, UserData &b);

inline std::ostream& operator<<(std::ostream& out, const UserData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _InstanceData__isset {
  _InstanceData__isset() : instanceId(false), masterUserId(false), instanceName(false), playerMap(false), levelId(false), levelData(false) {}
  bool instanceId :1;
  bool masterUserId :1;
  bool instanceName :1;
  bool playerMap :1;
  bool levelId :1;
  bool levelData :1;
} _InstanceData__isset;

class InstanceData : public virtual ::apache::thrift::TBase {
 public:

  InstanceData(const InstanceData&);
  InstanceData& operator=(const InstanceData&);
  InstanceData() : instanceId(0), masterUserId(0), instanceName(), levelId(0) {
  }

  virtual ~InstanceData() throw();
  int32_t instanceId;
  int32_t masterUserId;
  std::string instanceName;
  std::map<int32_t, PlayerData>  playerMap;
  int32_t levelId;
  LevelData levelData;

  _InstanceData__isset __isset;

  void __set_instanceId(const int32_t val);

  void __set_masterUserId(const int32_t val);

  void __set_instanceName(const std::string& val);

  void __set_playerMap(const std::map<int32_t, PlayerData> & val);

  void __set_levelId(const int32_t val);

  void __set_levelData(const LevelData& val);

  bool operator == (const InstanceData & rhs) const
  {
    if (!(instanceId == rhs.instanceId))
      return false;
    if (!(masterUserId == rhs.masterUserId))
      return false;
    if (!(instanceName == rhs.instanceName))
      return false;
    if (!(playerMap == rhs.playerMap))
      return false;
    if (!(levelId == rhs.levelId))
      return false;
    if (!(levelData == rhs.levelData))
      return false;
    return true;
  }
  bool operator != (const InstanceData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InstanceData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(InstanceData &a, InstanceData &b);

inline std::ostream& operator<<(std::ostream& out, const InstanceData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _UnitSyncData__isset {
  _UnitSyncData__isset() : uid(false), pos(false), rot(false), dir(false) {}
  bool uid :1;
  bool pos :1;
  bool rot :1;
  bool dir :1;
} _UnitSyncData__isset;

class UnitSyncData : public virtual ::apache::thrift::TBase {
 public:

  UnitSyncData(const UnitSyncData&);
  UnitSyncData& operator=(const UnitSyncData&);
  UnitSyncData() : uid(0) {
  }

  virtual ~UnitSyncData() throw();
  int32_t uid;
  Position pos;
  Rotation rot;
  Position dir;

  _UnitSyncData__isset __isset;

  void __set_uid(const int32_t val);

  void __set_pos(const Position& val);

  void __set_rot(const Rotation& val);

  void __set_dir(const Position& val);

  bool operator == (const UnitSyncData & rhs) const
  {
    if (!(uid == rhs.uid))
      return false;
    if (!(pos == rhs.pos))
      return false;
    if (!(rot == rhs.rot))
      return false;
    if (!(dir == rhs.dir))
      return false;
    return true;
  }
  bool operator != (const UnitSyncData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UnitSyncData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(UnitSyncData &a, UnitSyncData &b);

inline std::ostream& operator<<(std::ostream& out, const UnitSyncData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _UnitSyncDataList__isset {
  _UnitSyncDataList__isset() : dataList(false) {}
  bool dataList :1;
} _UnitSyncDataList__isset;

class UnitSyncDataList : public virtual ::apache::thrift::TBase {
 public:

  UnitSyncDataList(const UnitSyncDataList&);
  UnitSyncDataList& operator=(const UnitSyncDataList&);
  UnitSyncDataList() {
  }

  virtual ~UnitSyncDataList() throw();
  std::vector<UnitSyncData>  dataList;

  _UnitSyncDataList__isset __isset;

  void __set_dataList(const std::vector<UnitSyncData> & val);

  bool operator == (const UnitSyncDataList & rhs) const
  {
    if (!(dataList == rhs.dataList))
      return false;
    return true;
  }
  bool operator != (const UnitSyncDataList &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UnitSyncDataList & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(UnitSyncDataList &a, UnitSyncDataList &b);

inline std::ostream& operator<<(std::ostream& out, const UnitSyncDataList& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _CommandData__isset {
  _CommandData__isset() : commandType(false), dataLength(false), data(false), target(false) {}
  bool commandType :1;
  bool dataLength :1;
  bool data :1;
  bool target :1;
} _CommandData__isset;

class CommandData : public virtual ::apache::thrift::TBase {
 public:

  CommandData(const CommandData&);
  CommandData& operator=(const CommandData&);
  CommandData() : commandType((CommandType::type)0), dataLength(0), data(), target((CommandTargetType::type)0) {
  }

  virtual ~CommandData() throw();
  CommandType::type commandType;
  int16_t dataLength;
  std::string data;
  CommandTargetType::type target;

  _CommandData__isset __isset;

  void __set_commandType(const CommandType::type val);

  void __set_dataLength(const int16_t val);

  void __set_data(const std::string& val);

  void __set_target(const CommandTargetType::type val);

  bool operator == (const CommandData & rhs) const
  {
    if (!(commandType == rhs.commandType))
      return false;
    if (!(dataLength == rhs.dataLength))
      return false;
    if (!(data == rhs.data))
      return false;
    if (!(target == rhs.target))
      return false;
    return true;
  }
  bool operator != (const CommandData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CommandData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(CommandData &a, CommandData &b);

inline std::ostream& operator<<(std::ostream& out, const CommandData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _FrameCommand__isset {
  _FrameCommand__isset() : frameCmdType(false), playerId(false), dataLength(false), data(false) {}
  bool frameCmdType :1;
  bool playerId :1;
  bool dataLength :1;
  bool data :1;
} _FrameCommand__isset;

class FrameCommand : public virtual ::apache::thrift::TBase {
 public:

  FrameCommand(const FrameCommand&);
  FrameCommand& operator=(const FrameCommand&);
  FrameCommand() : frameCmdType((FrameCmdType::type)0), playerId(0), dataLength(0), data() {
  }

  virtual ~FrameCommand() throw();
  FrameCmdType::type frameCmdType;
  int32_t playerId;
  int16_t dataLength;
  std::string data;

  _FrameCommand__isset __isset;

  void __set_frameCmdType(const FrameCmdType::type val);

  void __set_playerId(const int32_t val);

  void __set_dataLength(const int16_t val);

  void __set_data(const std::string& val);

  bool operator == (const FrameCommand & rhs) const
  {
    if (!(frameCmdType == rhs.frameCmdType))
      return false;
    if (!(playerId == rhs.playerId))
      return false;
    if (!(dataLength == rhs.dataLength))
      return false;
    if (!(data == rhs.data))
      return false;
    return true;
  }
  bool operator != (const FrameCommand &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FrameCommand & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(FrameCommand &a, FrameCommand &b);

inline std::ostream& operator<<(std::ostream& out, const FrameCommand& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _FrameData__isset {
  _FrameData__isset() : frameIndex(false), commandList(false) {}
  bool frameIndex :1;
  bool commandList :1;
} _FrameData__isset;

class FrameData : public virtual ::apache::thrift::TBase {
 public:

  FrameData(const FrameData&);
  FrameData& operator=(const FrameData&);
  FrameData() : frameIndex(0) {
  }

  virtual ~FrameData() throw();
  int32_t frameIndex;
  std::vector<FrameCommand>  commandList;

  _FrameData__isset __isset;

  void __set_frameIndex(const int32_t val);

  void __set_commandList(const std::vector<FrameCommand> & val);

  bool operator == (const FrameData & rhs) const
  {
    if (!(frameIndex == rhs.frameIndex))
      return false;
    if (!(commandList == rhs.commandList))
      return false;
    return true;
  }
  bool operator != (const FrameData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FrameData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(FrameData &a, FrameData &b);

inline std::ostream& operator<<(std::ostream& out, const FrameData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ReplayData__isset {
  _ReplayData__isset() : timeData(false), classType(false), levelId(false), levelProgress(false) {}
  bool timeData :1;
  bool classType :1;
  bool levelId :1;
  bool levelProgress :1;
} _ReplayData__isset;

class ReplayData : public virtual ::apache::thrift::TBase {
 public:

  ReplayData(const ReplayData&);
  ReplayData& operator=(const ReplayData&);
  ReplayData() : timeData(0), classType((ClassType::type)0), levelId(0), levelProgress(0) {
  }

  virtual ~ReplayData() throw();
  int64_t timeData;
  ClassType::type classType;
  int32_t levelId;
  int32_t levelProgress;

  _ReplayData__isset __isset;

  void __set_timeData(const int64_t val);

  void __set_classType(const ClassType::type val);

  void __set_levelId(const int32_t val);

  void __set_levelProgress(const int32_t val);

  bool operator == (const ReplayData & rhs) const
  {
    if (!(timeData == rhs.timeData))
      return false;
    if (!(classType == rhs.classType))
      return false;
    if (!(levelId == rhs.levelId))
      return false;
    if (!(levelProgress == rhs.levelProgress))
      return false;
    return true;
  }
  bool operator != (const ReplayData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ReplayData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ReplayData &a, ReplayData &b);

inline std::ostream& operator<<(std::ostream& out, const ReplayData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _AccountData__isset {
  _AccountData__isset() : id(false), sessionKey(false), channel(false), openId(false), lastLoginTime(false) {}
  bool id :1;
  bool sessionKey :1;
  bool channel :1;
  bool openId :1;
  bool lastLoginTime :1;
} _AccountData__isset;

class AccountData : public virtual ::apache::thrift::TBase {
 public:

  AccountData(const AccountData&);
  AccountData& operator=(const AccountData&);
  AccountData() : id(0), sessionKey(), channel(), openId(), lastLoginTime(0) {
  }

  virtual ~AccountData() throw();
  int32_t id;
  std::string sessionKey;
  std::string channel;
  std::string openId;
  int64_t lastLoginTime;

  _AccountData__isset __isset;

  void __set_id(const int32_t val);

  void __set_sessionKey(const std::string& val);

  void __set_channel(const std::string& val);

  void __set_openId(const std::string& val);

  void __set_lastLoginTime(const int64_t val);

  bool operator == (const AccountData & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(sessionKey == rhs.sessionKey))
      return false;
    if (!(channel == rhs.channel))
      return false;
    if (!(openId == rhs.openId))
      return false;
    if (!(lastLoginTime == rhs.lastLoginTime))
      return false;
    return true;
  }
  bool operator != (const AccountData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AccountData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(AccountData &a, AccountData &b);

inline std::ostream& operator<<(std::ostream& out, const AccountData& obj)
{
  obj.printTo(out);
  return out;
}

} // namespace

#endif
