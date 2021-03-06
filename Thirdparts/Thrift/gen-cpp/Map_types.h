/**
 * Autogenerated by Thrift Compiler (@PACKAGE_VERSION@)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Map_TYPES_H
#define Map_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




struct TileType {
  enum type {
    None = -1,
    Static = 0,
    Trigger = 1,
    NPC = 2,
    PlayerStart = 3,
    SavePoint = 4
  };
};

extern const std::map<int, const char*> _TileType_VALUES_TO_NAMES;

class TileConfig;

class TileConfigList;

class TileData;

class ChunkData;

class MapData;

typedef struct _TileConfig__isset {
  _TileConfig__isset() : name(false), width(false), height(false), depth(false), resource(false), type1(false), type2(false), func(false), rad(false), overlapFog(false) {}
  bool name :1;
  bool width :1;
  bool height :1;
  bool depth :1;
  bool resource :1;
  bool type1 :1;
  bool type2 :1;
  bool func :1;
  bool rad :1;
  bool overlapFog :1;
} _TileConfig__isset;

class TileConfig : public virtual ::apache::thrift::TBase {
 public:

  TileConfig(const TileConfig&);
  TileConfig& operator=(const TileConfig&);
  TileConfig() : name(), width(0), height(0), depth(0), resource(), type1(0), type2(0), func(), rad(0), overlapFog(0) {
  }

  virtual ~TileConfig() throw();
  std::string name;
  int32_t width;
  int32_t height;
  int32_t depth;
  std::string resource;
  int32_t type1;
  int32_t type2;
  std::string func;
  double rad;
  bool overlapFog;

  _TileConfig__isset __isset;

  void __set_name(const std::string& val);

  void __set_width(const int32_t val);

  void __set_height(const int32_t val);

  void __set_depth(const int32_t val);

  void __set_resource(const std::string& val);

  void __set_type1(const int32_t val);

  void __set_type2(const int32_t val);

  void __set_func(const std::string& val);

  void __set_rad(const double val);

  void __set_overlapFog(const bool val);

  bool operator == (const TileConfig & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(width == rhs.width))
      return false;
    if (!(height == rhs.height))
      return false;
    if (!(depth == rhs.depth))
      return false;
    if (!(resource == rhs.resource))
      return false;
    if (!(type1 == rhs.type1))
      return false;
    if (!(type2 == rhs.type2))
      return false;
    if (!(func == rhs.func))
      return false;
    if (!(rad == rhs.rad))
      return false;
    if (!(overlapFog == rhs.overlapFog))
      return false;
    return true;
  }
  bool operator != (const TileConfig &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TileConfig & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TileConfig &a, TileConfig &b);

inline std::ostream& operator<<(std::ostream& out, const TileConfig& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _TileConfigList__isset {
  _TileConfigList__isset() : tileList(false) {}
  bool tileList :1;
} _TileConfigList__isset;

class TileConfigList : public virtual ::apache::thrift::TBase {
 public:

  TileConfigList(const TileConfigList&);
  TileConfigList& operator=(const TileConfigList&);
  TileConfigList() {
  }

  virtual ~TileConfigList() throw();
  std::vector<TileConfig>  tileList;

  _TileConfigList__isset __isset;

  void __set_tileList(const std::vector<TileConfig> & val);

  bool operator == (const TileConfigList & rhs) const
  {
    if (!(tileList == rhs.tileList))
      return false;
    return true;
  }
  bool operator != (const TileConfigList &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TileConfigList & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TileConfigList &a, TileConfigList &b);

inline std::ostream& operator<<(std::ostream& out, const TileConfigList& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _TileData__isset {
  _TileData__isset() : id(false), name(false), resource(false), x(false), y(false), z(false), depth(false), type(false) {}
  bool id :1;
  bool name :1;
  bool resource :1;
  bool x :1;
  bool y :1;
  bool z :1;
  bool depth :1;
  bool type :1;
} _TileData__isset;

class TileData : public virtual ::apache::thrift::TBase {
 public:

  TileData(const TileData&);
  TileData& operator=(const TileData&);
  TileData() : id(0), name(), resource(), x(0), y(0), z(0), depth(0), type((TileType::type)0) {
  }

  virtual ~TileData() throw();
  int32_t id;
  std::string name;
  std::string resource;
  double x;
  double y;
  double z;
  double depth;
  TileType::type type;

  _TileData__isset __isset;

  void __set_id(const int32_t val);

  void __set_name(const std::string& val);

  void __set_resource(const std::string& val);

  void __set_x(const double val);

  void __set_y(const double val);

  void __set_z(const double val);

  void __set_depth(const double val);

  void __set_type(const TileType::type val);

  bool operator == (const TileData & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(resource == rhs.resource))
      return false;
    if (!(x == rhs.x))
      return false;
    if (!(y == rhs.y))
      return false;
    if (!(z == rhs.z))
      return false;
    if (!(depth == rhs.depth))
      return false;
    if (!(type == rhs.type))
      return false;
    return true;
  }
  bool operator != (const TileData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TileData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TileData &a, TileData &b);

inline std::ostream& operator<<(std::ostream& out, const TileData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ChunkData__isset {
  _ChunkData__isset() : id(false), x(false), y(false), z(false), tiles(false) {}
  bool id :1;
  bool x :1;
  bool y :1;
  bool z :1;
  bool tiles :1;
} _ChunkData__isset;

class ChunkData : public virtual ::apache::thrift::TBase {
 public:

  ChunkData(const ChunkData&);
  ChunkData& operator=(const ChunkData&);
  ChunkData() : id(0), x(0), y(0), z(0) {
  }

  virtual ~ChunkData() throw();
  int32_t id;
  double x;
  double y;
  double z;
  std::vector<TileData>  tiles;

  _ChunkData__isset __isset;

  void __set_id(const int32_t val);

  void __set_x(const double val);

  void __set_y(const double val);

  void __set_z(const double val);

  void __set_tiles(const std::vector<TileData> & val);

  bool operator == (const ChunkData & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(x == rhs.x))
      return false;
    if (!(y == rhs.y))
      return false;
    if (!(z == rhs.z))
      return false;
    if (!(tiles == rhs.tiles))
      return false;
    return true;
  }
  bool operator != (const ChunkData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChunkData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ChunkData &a, ChunkData &b);

inline std::ostream& operator<<(std::ostream& out, const ChunkData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MapData__isset {
  _MapData__isset() : id(false), name(false), chunks(false) {}
  bool id :1;
  bool name :1;
  bool chunks :1;
} _MapData__isset;

class MapData : public virtual ::apache::thrift::TBase {
 public:

  MapData(const MapData&);
  MapData& operator=(const MapData&);
  MapData() : id(0), name() {
  }

  virtual ~MapData() throw();
  int32_t id;
  std::string name;
  std::vector<ChunkData>  chunks;

  _MapData__isset __isset;

  void __set_id(const int32_t val);

  void __set_name(const std::string& val);

  void __set_chunks(const std::vector<ChunkData> & val);

  bool operator == (const MapData & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(chunks == rhs.chunks))
      return false;
    return true;
  }
  bool operator != (const MapData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MapData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MapData &a, MapData &b);

inline std::ostream& operator<<(std::ostream& out, const MapData& obj)
{
  obj.printTo(out);
  return out;
}



#endif
