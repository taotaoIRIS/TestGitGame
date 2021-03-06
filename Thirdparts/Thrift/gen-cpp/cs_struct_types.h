/**
 * Autogenerated by Thrift Compiler (@PACKAGE_VERSION@)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef cs_struct_TYPES_H
#define cs_struct_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




struct StartGameResult {
  enum type {
    ESuccess = 0,
    ERoomGameIsRunning = 1
  };
};

extern const std::map<int, const char*> _StartGameResult_VALUES_TO_NAMES;

struct CreateRoomResult {
  enum type {
    ESuccess = 0,
    ECreateRoomFail = 1,
    ECreateRoomNotOkStatus = 2
  };
};

extern const std::map<int, const char*> _CreateRoomResult_VALUES_TO_NAMES;

struct JoinRoomResult {
  enum type {
    ESuccess = 0,
    EJoinRoomFail = 1,
    EAlreadyInRoom = 2,
    ENotInRoom = 3
  };
};

extern const std::map<int, const char*> _JoinRoomResult_VALUES_TO_NAMES;

struct ExitRoomResult {
  enum type {
    ESuccess = 0,
    EExitRoomFail = 1
  };
};

extern const std::map<int, const char*> _ExitRoomResult_VALUES_TO_NAMES;

struct AddFriendResult {
  enum type {
    ESuccess = 0,
    EAddFriendFail = 1,
    EDoNotAddSelf = 2,
    EAddFriendRepeat = 3
  };
};

extern const std::map<int, const char*> _AddFriendResult_VALUES_TO_NAMES;

struct DelFriendResult {
  enum type {
    ESuccess = 0,
    EDelFriendFail = 1,
    EDoNotDelSelf = 2,
    EDelFriendNotExist = 3
  };
};

extern const std::map<int, const char*> _DelFriendResult_VALUES_TO_NAMES;

struct ReqDlVoiceResResult {
  enum type {
    ESuccess = 0,
    EReqDlVoiceResFail = 1,
    EUpdateVoiceResFail = 2
  };
};

extern const std::map<int, const char*> _ReqDlVoiceResResult_VALUES_TO_NAMES;

struct SetNicknameResult {
  enum type {
    ESuccess = 0,
    ESetNicknameFail = 1,
    ENicknameIsEmpty = 2,
    EIconIdUndefined = 3,
    ENicknameOverLength = 4
  };
};

extern const std::map<int, const char*> _SetNicknameResult_VALUES_TO_NAMES;

struct CSLoginResult {
  enum type {
    ESuccess = 0,
    EAccountNotExist = 1,
    EAccountError = 2,
    EPasswordError = 3,
    EAccountAlreadyLogged = 4
  };
};

extern const std::map<int, const char*> _CSLoginResult_VALUES_TO_NAMES;

struct CSRegisterResult {
  enum type {
    ESuccess = 0,
    EAccountError = 1,
    EPasswordError = 2,
    EAccountAlreadyExist = 3
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

struct CSDisconnectResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _CSDisconnectResult_VALUES_TO_NAMES;

struct LDLoginResult {
  enum type {
    ESuccess = 0,
    EAccountNotExist = 1,
    EPasswordError = 2
  };
};

extern const std::map<int, const char*> _LDLoginResult_VALUES_TO_NAMES;

struct LDRegisterResult {
  enum type {
    ESuccess = 0,
    EAccountAlreadyExist = 1
  };
};

extern const std::map<int, const char*> _LDRegisterResult_VALUES_TO_NAMES;

struct LDTouristResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _LDTouristResult_VALUES_TO_NAMES;

struct LDDisconnectResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _LDDisconnectResult_VALUES_TO_NAMES;

struct RDAddFriendResult {
  enum type {
    ESuccess = 0,
    EUserNotExist = 1,
    ERoleNotExist = 2,
    EUserError = 3
  };
};

extern const std::map<int, const char*> _RDAddFriendResult_VALUES_TO_NAMES;

struct RDDelFriendResult {
  enum type {
    ESuccess = 0,
    EUserError = 1
  };
};

extern const std::map<int, const char*> _RDDelFriendResult_VALUES_TO_NAMES;

struct RDFindByNickNameResult {
  enum type {
    ESuccess = 0,
    EUserError = 1
  };
};

extern const std::map<int, const char*> _RDFindByNickNameResult_VALUES_TO_NAMES;

struct RDGetFriendListResult {
  enum type {
    ESuccess = 0,
    EUserError = 1,
    ERoleError = 2
  };
};

extern const std::map<int, const char*> _RDGetFriendListResult_VALUES_TO_NAMES;

struct RDCreateRoomResult {
  enum type {
    ESuccess = 0,
    EUserError = 1
  };
};

extern const std::map<int, const char*> _RDCreateRoomResult_VALUES_TO_NAMES;

struct RDGetReplayResult {
  enum type {
    ESuccess = 0,
    ERoomError = 1
  };
};

extern const std::map<int, const char*> _RDGetReplayResult_VALUES_TO_NAMES;

struct RDGetReplayInfoResult {
  enum type {
    ESuccess = 0,
    ERoomError = 1
  };
};

extern const std::map<int, const char*> _RDGetReplayInfoResult_VALUES_TO_NAMES;

struct RDGetVoiceResult {
  enum type {
    ESuccess = 0,
    ERoomError = 1
  };
};

extern const std::map<int, const char*> _RDGetVoiceResult_VALUES_TO_NAMES;

struct RDRandomNicknameResult {
  enum type {
    ESuccess = 0
  };
};

extern const std::map<int, const char*> _RDRandomNicknameResult_VALUES_TO_NAMES;

struct RDSaveFrameResult {
  enum type {
    ESuccess = 0,
    ERoomError = 1
  };
};

extern const std::map<int, const char*> _RDSaveFrameResult_VALUES_TO_NAMES;

struct RDSaveRoomDataResult {
  enum type {
    ESuccess = 0,
    ERoomError = 1
  };
};

extern const std::map<int, const char*> _RDSaveRoomDataResult_VALUES_TO_NAMES;

struct RDSetNicknameResult {
  enum type {
    ESuccess = 0,
    EUserError = 1,
    ENicknameAlreadyExist = 2
  };
};

extern const std::map<int, const char*> _RDSetNicknameResult_VALUES_TO_NAMES;

struct StartRecordResult {
  enum type {
    ESuccess = 0,
    ERecorderFail = 1,
    ERecorderBusy = 2
  };
};

extern const std::map<int, const char*> _StartRecordResult_VALUES_TO_NAMES;

struct EndPlayRecordResult {
  enum type {
    ESuccess = 0,
    EPlayRecordFail = 1
  };
};

extern const std::map<int, const char*> _EndPlayRecordResult_VALUES_TO_NAMES;

struct UserLoginMode {
  enum type {
    EUnLogin = 0,
    EAccount = 1,
    ETourist = 2
  };
};

extern const std::map<int, const char*> _UserLoginMode_VALUES_TO_NAMES;

struct RoomStatus {
  enum type {
    STATUS_CLOSE = 0,
    STATUS_FULL = 1,
    STATUS_OK = 2,
    STATUS_START = 3,
    STATUS_READY = 4,
    STATUS_RUNNING = 5,
    STATUS_NONE = 6
  };
};

extern const std::map<int, const char*> _RoomStatus_VALUES_TO_NAMES;

class Position;

class Rotation;

class PlayerData;

class RoleData;

class ReplayData;

class UserData;

class CommandData;

class FrameData;

class VoiceData;

class RoomData;

class RoomInfo;

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
  _PlayerData__isset() : userId(false), userName(false), roleId(false), nickname(false), iconId(false) {}
  bool userId :1;
  bool userName :1;
  bool roleId :1;
  bool nickname :1;
  bool iconId :1;
} _PlayerData__isset;

class PlayerData : public virtual ::apache::thrift::TBase {
 public:

  PlayerData(const PlayerData&);
  PlayerData& operator=(const PlayerData&);
  PlayerData() : userId(0), userName(), roleId(0), nickname(), iconId(0) {
  }

  virtual ~PlayerData() throw();
  int64_t userId;
  std::string userName;
  int32_t roleId;
  std::string nickname;
  int32_t iconId;

  _PlayerData__isset __isset;

  void __set_userId(const int64_t val);

  void __set_userName(const std::string& val);

  void __set_roleId(const int32_t val);

  void __set_nickname(const std::string& val);

  void __set_iconId(const int32_t val);

  bool operator == (const PlayerData & rhs) const
  {
    if (!(userId == rhs.userId))
      return false;
    if (!(userName == rhs.userName))
      return false;
    if (!(roleId == rhs.roleId))
      return false;
    if (!(nickname == rhs.nickname))
      return false;
    if (!(iconId == rhs.iconId))
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

typedef struct _RoleData__isset {
  _RoleData__isset() : roleId(false), nickname(false), isSetNickname(false), iconId(false), friendList(false), friendOnlineStatusList(false) {}
  bool roleId :1;
  bool nickname :1;
  bool isSetNickname :1;
  bool iconId :1;
  bool friendList :1;
  bool friendOnlineStatusList :1;
} _RoleData__isset;

class RoleData : public virtual ::apache::thrift::TBase {
 public:

  RoleData(const RoleData&);
  RoleData& operator=(const RoleData&);
  RoleData() : roleId(0), nickname(), isSetNickname(0), iconId(0) {
  }

  virtual ~RoleData() throw();
  int32_t roleId;
  std::string nickname;
  bool isSetNickname;
  int32_t iconId;
  std::vector<PlayerData>  friendList;
  std::vector<bool>  friendOnlineStatusList;

  _RoleData__isset __isset;

  void __set_roleId(const int32_t val);

  void __set_nickname(const std::string& val);

  void __set_isSetNickname(const bool val);

  void __set_iconId(const int32_t val);

  void __set_friendList(const std::vector<PlayerData> & val);

  void __set_friendOnlineStatusList(const std::vector<bool> & val);

  bool operator == (const RoleData & rhs) const
  {
    if (!(roleId == rhs.roleId))
      return false;
    if (!(nickname == rhs.nickname))
      return false;
    if (!(isSetNickname == rhs.isSetNickname))
      return false;
    if (!(iconId == rhs.iconId))
      return false;
    if (!(friendList == rhs.friendList))
      return false;
    if (!(friendOnlineStatusList == rhs.friendOnlineStatusList))
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

typedef struct _ReplayData__isset {
  _ReplayData__isset() : roomId(false), createTime(false) {}
  bool roomId :1;
  bool createTime :1;
} _ReplayData__isset;

class ReplayData : public virtual ::apache::thrift::TBase {
 public:

  ReplayData(const ReplayData&);
  ReplayData& operator=(const ReplayData&);
  ReplayData() : roomId(0), createTime(0) {
  }

  virtual ~ReplayData() throw();
  int32_t roomId;
  int64_t createTime;

  _ReplayData__isset __isset;

  void __set_roomId(const int32_t val);

  void __set_createTime(const int64_t val);

  bool operator == (const ReplayData & rhs) const
  {
    if (!(roomId == rhs.roomId))
      return false;
    if (!(createTime == rhs.createTime))
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

typedef struct _UserData__isset {
  _UserData__isset() : createTimeSec(false), createTimeMsec(false), lastLoginSec(false), lastLoginMsec(false), totalOnlineTime(false), userId(false), userAccount(false), userPassword(false), userEmail(false), userLoginMode(false), roleId(false), roleData(false), replayList(false) {}
  bool createTimeSec :1;
  bool createTimeMsec :1;
  bool lastLoginSec :1;
  bool lastLoginMsec :1;
  bool totalOnlineTime :1;
  bool userId :1;
  bool userAccount :1;
  bool userPassword :1;
  bool userEmail :1;
  bool userLoginMode :1;
  bool roleId :1;
  bool roleData :1;
  bool replayList :1;
} _UserData__isset;

class UserData : public virtual ::apache::thrift::TBase {
 public:

  UserData(const UserData&);
  UserData& operator=(const UserData&);
  UserData() : createTimeSec(0), createTimeMsec(0), lastLoginSec(0), lastLoginMsec(0), totalOnlineTime(0), userId(0), userAccount(), userPassword(), userEmail(), userLoginMode(0), roleId(0) {
  }

  virtual ~UserData() throw();
  int32_t createTimeSec;
  int32_t createTimeMsec;
  int32_t lastLoginSec;
  int32_t lastLoginMsec;
  int32_t totalOnlineTime;
  int64_t userId;
  std::string userAccount;
  std::string userPassword;
  std::string userEmail;
  int32_t userLoginMode;
  int32_t roleId;
  std::vector<RoleData>  roleData;
  std::vector<ReplayData>  replayList;

  _UserData__isset __isset;

  void __set_createTimeSec(const int32_t val);

  void __set_createTimeMsec(const int32_t val);

  void __set_lastLoginSec(const int32_t val);

  void __set_lastLoginMsec(const int32_t val);

  void __set_totalOnlineTime(const int32_t val);

  void __set_userId(const int64_t val);

  void __set_userAccount(const std::string& val);

  void __set_userPassword(const std::string& val);

  void __set_userEmail(const std::string& val);

  void __set_userLoginMode(const int32_t val);

  void __set_roleId(const int32_t val);

  void __set_roleData(const std::vector<RoleData> & val);

  void __set_replayList(const std::vector<ReplayData> & val);

  bool operator == (const UserData & rhs) const
  {
    if (!(createTimeSec == rhs.createTimeSec))
      return false;
    if (!(createTimeMsec == rhs.createTimeMsec))
      return false;
    if (!(lastLoginSec == rhs.lastLoginSec))
      return false;
    if (!(lastLoginMsec == rhs.lastLoginMsec))
      return false;
    if (!(totalOnlineTime == rhs.totalOnlineTime))
      return false;
    if (!(userId == rhs.userId))
      return false;
    if (!(userAccount == rhs.userAccount))
      return false;
    if (!(userPassword == rhs.userPassword))
      return false;
    if (!(userEmail == rhs.userEmail))
      return false;
    if (!(userLoginMode == rhs.userLoginMode))
      return false;
    if (!(roleId == rhs.roleId))
      return false;
    if (!(roleData == rhs.roleData))
      return false;
    if (!(replayList == rhs.replayList))
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

typedef struct _CommandData__isset {
  _CommandData__isset() : type(false), localPlayerId(false), dataLength(false), data(false) {}
  bool type :1;
  bool localPlayerId :1;
  bool dataLength :1;
  bool data :1;
} _CommandData__isset;

class CommandData : public virtual ::apache::thrift::TBase {
 public:

  CommandData(const CommandData&);
  CommandData& operator=(const CommandData&);
  CommandData() : type(0), localPlayerId(0), dataLength(0), data() {
  }

  virtual ~CommandData() throw();
  int32_t type;
  int32_t localPlayerId;
  int16_t dataLength;
  std::string data;

  _CommandData__isset __isset;

  void __set_type(const int32_t val);

  void __set_localPlayerId(const int32_t val);

  void __set_dataLength(const int16_t val);

  void __set_data(const std::string& val);

  bool operator == (const CommandData & rhs) const
  {
    if (!(type == rhs.type))
      return false;
    if (!(localPlayerId == rhs.localPlayerId))
      return false;
    if (!(dataLength == rhs.dataLength))
      return false;
    if (!(data == rhs.data))
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
  std::vector<CommandData>  commandList;

  _FrameData__isset __isset;

  void __set_frameIndex(const int32_t val);

  void __set_commandList(const std::vector<CommandData> & val);

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

typedef struct _VoiceData__isset {
  _VoiceData__isset() : index(false), url(false) {}
  bool index :1;
  bool url :1;
} _VoiceData__isset;

class VoiceData : public virtual ::apache::thrift::TBase {
 public:

  VoiceData(const VoiceData&);
  VoiceData& operator=(const VoiceData&);
  VoiceData() : index(0), url() {
  }

  virtual ~VoiceData() throw();
  int32_t index;
  std::string url;

  _VoiceData__isset __isset;

  void __set_index(const int32_t val);

  void __set_url(const std::string& val);

  bool operator == (const VoiceData & rhs) const
  {
    if (!(index == rhs.index))
      return false;
    if (!(url == rhs.url))
      return false;
    return true;
  }
  bool operator != (const VoiceData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VoiceData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(VoiceData &a, VoiceData &b);

inline std::ostream& operator<<(std::ostream& out, const VoiceData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _RoomData__isset {
  _RoomData__isset() : createTimeSec(false), destoryTimesec(false), id(false), identity(false), playerMap(false), playerExitTimeMap(false), lastFrameIndex(false), masterUserId(false), voiceMap(false) {}
  bool createTimeSec :1;
  bool destoryTimesec :1;
  bool id :1;
  bool identity :1;
  bool playerMap :1;
  bool playerExitTimeMap :1;
  bool lastFrameIndex :1;
  bool masterUserId :1;
  bool voiceMap :1;
} _RoomData__isset;

class RoomData : public virtual ::apache::thrift::TBase {
 public:

  RoomData(const RoomData&);
  RoomData& operator=(const RoomData&);
  RoomData() : createTimeSec(0), destoryTimesec(0), id(0), identity(), lastFrameIndex(0), masterUserId(0) {
  }

  virtual ~RoomData() throw();
  int64_t createTimeSec;
  int64_t destoryTimesec;
  int32_t id;
  std::string identity;
  std::map<int64_t, PlayerData>  playerMap;
  std::map<int64_t, int32_t>  playerExitTimeMap;
  int32_t lastFrameIndex;
  int64_t masterUserId;
  std::map<int32_t, VoiceData>  voiceMap;

  _RoomData__isset __isset;

  void __set_createTimeSec(const int64_t val);

  void __set_destoryTimesec(const int64_t val);

  void __set_id(const int32_t val);

  void __set_identity(const std::string& val);

  void __set_playerMap(const std::map<int64_t, PlayerData> & val);

  void __set_playerExitTimeMap(const std::map<int64_t, int32_t> & val);

  void __set_lastFrameIndex(const int32_t val);

  void __set_masterUserId(const int64_t val);

  void __set_voiceMap(const std::map<int32_t, VoiceData> & val);

  bool operator == (const RoomData & rhs) const
  {
    if (!(createTimeSec == rhs.createTimeSec))
      return false;
    if (!(destoryTimesec == rhs.destoryTimesec))
      return false;
    if (!(id == rhs.id))
      return false;
    if (!(identity == rhs.identity))
      return false;
    if (!(playerMap == rhs.playerMap))
      return false;
    if (!(playerExitTimeMap == rhs.playerExitTimeMap))
      return false;
    if (!(lastFrameIndex == rhs.lastFrameIndex))
      return false;
    if (!(masterUserId == rhs.masterUserId))
      return false;
    if (!(voiceMap == rhs.voiceMap))
      return false;
    return true;
  }
  bool operator != (const RoomData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RoomData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(RoomData &a, RoomData &b);

inline std::ostream& operator<<(std::ostream& out, const RoomData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _RoomInfo__isset {
  _RoomInfo__isset() : roomId(false), roomName(false), playerCount(false) {}
  bool roomId :1;
  bool roomName :1;
  bool playerCount :1;
} _RoomInfo__isset;

class RoomInfo : public virtual ::apache::thrift::TBase {
 public:

  RoomInfo(const RoomInfo&);
  RoomInfo& operator=(const RoomInfo&);
  RoomInfo() : roomId(0), roomName(), playerCount(0) {
  }

  virtual ~RoomInfo() throw();
  int32_t roomId;
  std::string roomName;
  int32_t playerCount;

  _RoomInfo__isset __isset;

  void __set_roomId(const int32_t val);

  void __set_roomName(const std::string& val);

  void __set_playerCount(const int32_t val);

  bool operator == (const RoomInfo & rhs) const
  {
    if (!(roomId == rhs.roomId))
      return false;
    if (!(roomName == rhs.roomName))
      return false;
    if (!(playerCount == rhs.playerCount))
      return false;
    return true;
  }
  bool operator != (const RoomInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RoomInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(RoomInfo &a, RoomInfo &b);

inline std::ostream& operator<<(std::ostream& out, const RoomInfo& obj)
{
  obj.printTo(out);
  return out;
}



#endif
