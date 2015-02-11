// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config.proto

#ifndef PROTOBUF_config_2eproto__INCLUDED
#define PROTOBUF_config_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "nanopb.pb.h"
// @@protoc_insertion_point(includes)

namespace pb {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_config_2eproto();
void protobuf_AssignDesc_config_2eproto();
void protobuf_ShutdownFile_config_2eproto();

class File;
class Application;

enum ApplicationType {
  QT5_QML = 1,
  GLADEVCP = 2,
  JAVASCRIPT = 3
};
bool ApplicationType_IsValid(int value);
const ApplicationType ApplicationType_MIN = QT5_QML;
const ApplicationType ApplicationType_MAX = JAVASCRIPT;
const int ApplicationType_ARRAYSIZE = ApplicationType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ApplicationType_descriptor();
inline const ::std::string& ApplicationType_Name(ApplicationType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ApplicationType_descriptor(), value);
}
inline bool ApplicationType_Parse(
    const ::std::string& name, ApplicationType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ApplicationType>(
    ApplicationType_descriptor(), name, value);
}
enum FileContent {
  CLEARTEXT = 1,
  ZLIB = 2
};
bool FileContent_IsValid(int value);
const FileContent FileContent_MIN = CLEARTEXT;
const FileContent FileContent_MAX = ZLIB;
const int FileContent_ARRAYSIZE = FileContent_MAX + 1;

const ::google::protobuf::EnumDescriptor* FileContent_descriptor();
inline const ::std::string& FileContent_Name(FileContent value) {
  return ::google::protobuf::internal::NameOfEnum(
    FileContent_descriptor(), value);
}
inline bool FileContent_Parse(
    const ::std::string& name, FileContent* value) {
  return ::google::protobuf::internal::ParseNamedEnum<FileContent>(
    FileContent_descriptor(), name, value);
}
// ===================================================================

class File : public ::google::protobuf::Message {
 public:
  File();
  virtual ~File();
  
  File(const File& from);
  
  inline File& operator=(const File& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const File& default_instance();
  
  void Swap(File* other);
  
  // implements Message ----------------------------------------------
  
  File* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const File& from);
  void MergeFrom(const File& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // required .pb.FileContent encoding = 2;
  inline bool has_encoding() const;
  inline void clear_encoding();
  static const int kEncodingFieldNumber = 2;
  inline pb::FileContent encoding() const;
  inline void set_encoding(pb::FileContent value);
  
  // optional bytes blob = 3;
  inline bool has_blob() const;
  inline void clear_blob();
  static const int kBlobFieldNumber = 3;
  inline const ::std::string& blob() const;
  inline void set_blob(const ::std::string& value);
  inline void set_blob(const char* value);
  inline void set_blob(const void* value, size_t size);
  inline ::std::string* mutable_blob();
  inline ::std::string* release_blob();
  
  // @@protoc_insertion_point(class_scope:pb.File)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_encoding();
  inline void clear_has_encoding();
  inline void set_has_blob();
  inline void clear_has_blob();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* name_;
  ::std::string* blob_;
  int encoding_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_config_2eproto();
  friend void protobuf_AssignDesc_config_2eproto();
  friend void protobuf_ShutdownFile_config_2eproto();
  
  void InitAsDefaultInstance();
  static File* default_instance_;
};
// -------------------------------------------------------------------

class Application : public ::google::protobuf::Message {
 public:
  Application();
  virtual ~Application();
  
  Application(const Application& from);
  
  inline Application& operator=(const Application& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Application& default_instance();
  
  void Swap(Application* other);
  
  // implements Message ----------------------------------------------
  
  Application* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Application& from);
  void MergeFrom(const Application& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // optional string description = 2;
  inline bool has_description() const;
  inline void clear_description();
  static const int kDescriptionFieldNumber = 2;
  inline const ::std::string& description() const;
  inline void set_description(const ::std::string& value);
  inline void set_description(const char* value);
  inline void set_description(const char* value, size_t size);
  inline ::std::string* mutable_description();
  inline ::std::string* release_description();
  
  // optional .pb.ApplicationType type = 3;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 3;
  inline pb::ApplicationType type() const;
  inline void set_type(pb::ApplicationType value);
  
  // optional string weburi = 4;
  inline bool has_weburi() const;
  inline void clear_weburi();
  static const int kWeburiFieldNumber = 4;
  inline const ::std::string& weburi() const;
  inline void set_weburi(const ::std::string& value);
  inline void set_weburi(const char* value);
  inline void set_weburi(const char* value, size_t size);
  inline ::std::string* mutable_weburi();
  inline ::std::string* release_weburi();
  
  // repeated .pb.File file = 5;
  inline int file_size() const;
  inline void clear_file();
  static const int kFileFieldNumber = 5;
  inline const ::pb::File& file(int index) const;
  inline ::pb::File* mutable_file(int index);
  inline ::pb::File* add_file();
  inline const ::google::protobuf::RepeatedPtrField< ::pb::File >&
      file() const;
  inline ::google::protobuf::RepeatedPtrField< ::pb::File >*
      mutable_file();
  
  // @@protoc_insertion_point(class_scope:pb.Application)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_description();
  inline void clear_has_description();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_weburi();
  inline void clear_has_weburi();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* name_;
  ::std::string* description_;
  ::std::string* weburi_;
  ::google::protobuf::RepeatedPtrField< ::pb::File > file_;
  int type_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  friend void  protobuf_AddDesc_config_2eproto();
  friend void protobuf_AssignDesc_config_2eproto();
  friend void protobuf_ShutdownFile_config_2eproto();
  
  void InitAsDefaultInstance();
  static Application* default_instance_;
};
// ===================================================================


// ===================================================================

// File

// required string name = 1;
inline bool File::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void File::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void File::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void File::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& File::name() const {
  return *name_;
}
inline void File::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void File::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void File::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* File::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* File::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required .pb.FileContent encoding = 2;
inline bool File::has_encoding() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void File::set_has_encoding() {
  _has_bits_[0] |= 0x00000002u;
}
inline void File::clear_has_encoding() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void File::clear_encoding() {
  encoding_ = 1;
  clear_has_encoding();
}
inline pb::FileContent File::encoding() const {
  return static_cast< pb::FileContent >(encoding_);
}
inline void File::set_encoding(pb::FileContent value) {
  GOOGLE_DCHECK(pb::FileContent_IsValid(value));
  set_has_encoding();
  encoding_ = value;
}

// optional bytes blob = 3;
inline bool File::has_blob() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void File::set_has_blob() {
  _has_bits_[0] |= 0x00000004u;
}
inline void File::clear_has_blob() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void File::clear_blob() {
  if (blob_ != &::google::protobuf::internal::kEmptyString) {
    blob_->clear();
  }
  clear_has_blob();
}
inline const ::std::string& File::blob() const {
  return *blob_;
}
inline void File::set_blob(const ::std::string& value) {
  set_has_blob();
  if (blob_ == &::google::protobuf::internal::kEmptyString) {
    blob_ = new ::std::string;
  }
  blob_->assign(value);
}
inline void File::set_blob(const char* value) {
  set_has_blob();
  if (blob_ == &::google::protobuf::internal::kEmptyString) {
    blob_ = new ::std::string;
  }
  blob_->assign(value);
}
inline void File::set_blob(const void* value, size_t size) {
  set_has_blob();
  if (blob_ == &::google::protobuf::internal::kEmptyString) {
    blob_ = new ::std::string;
  }
  blob_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* File::mutable_blob() {
  set_has_blob();
  if (blob_ == &::google::protobuf::internal::kEmptyString) {
    blob_ = new ::std::string;
  }
  return blob_;
}
inline ::std::string* File::release_blob() {
  clear_has_blob();
  if (blob_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = blob_;
    blob_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// Application

// required string name = 1;
inline bool Application::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Application::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Application::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Application::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Application::name() const {
  return *name_;
}
inline void Application::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Application::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Application::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Application::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Application::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string description = 2;
inline bool Application::has_description() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Application::set_has_description() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Application::clear_has_description() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Application::clear_description() {
  if (description_ != &::google::protobuf::internal::kEmptyString) {
    description_->clear();
  }
  clear_has_description();
}
inline const ::std::string& Application::description() const {
  return *description_;
}
inline void Application::set_description(const ::std::string& value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(value);
}
inline void Application::set_description(const char* value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(value);
}
inline void Application::set_description(const char* value, size_t size) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Application::mutable_description() {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  return description_;
}
inline ::std::string* Application::release_description() {
  clear_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = description_;
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional .pb.ApplicationType type = 3;
inline bool Application::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Application::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Application::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Application::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline pb::ApplicationType Application::type() const {
  return static_cast< pb::ApplicationType >(type_);
}
inline void Application::set_type(pb::ApplicationType value) {
  GOOGLE_DCHECK(pb::ApplicationType_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional string weburi = 4;
inline bool Application::has_weburi() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Application::set_has_weburi() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Application::clear_has_weburi() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Application::clear_weburi() {
  if (weburi_ != &::google::protobuf::internal::kEmptyString) {
    weburi_->clear();
  }
  clear_has_weburi();
}
inline const ::std::string& Application::weburi() const {
  return *weburi_;
}
inline void Application::set_weburi(const ::std::string& value) {
  set_has_weburi();
  if (weburi_ == &::google::protobuf::internal::kEmptyString) {
    weburi_ = new ::std::string;
  }
  weburi_->assign(value);
}
inline void Application::set_weburi(const char* value) {
  set_has_weburi();
  if (weburi_ == &::google::protobuf::internal::kEmptyString) {
    weburi_ = new ::std::string;
  }
  weburi_->assign(value);
}
inline void Application::set_weburi(const char* value, size_t size) {
  set_has_weburi();
  if (weburi_ == &::google::protobuf::internal::kEmptyString) {
    weburi_ = new ::std::string;
  }
  weburi_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Application::mutable_weburi() {
  set_has_weburi();
  if (weburi_ == &::google::protobuf::internal::kEmptyString) {
    weburi_ = new ::std::string;
  }
  return weburi_;
}
inline ::std::string* Application::release_weburi() {
  clear_has_weburi();
  if (weburi_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = weburi_;
    weburi_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// repeated .pb.File file = 5;
inline int Application::file_size() const {
  return file_.size();
}
inline void Application::clear_file() {
  file_.Clear();
}
inline const ::pb::File& Application::file(int index) const {
  return file_.Get(index);
}
inline ::pb::File* Application::mutable_file(int index) {
  return file_.Mutable(index);
}
inline ::pb::File* Application::add_file() {
  return file_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::pb::File >&
Application::file() const {
  return file_;
}
inline ::google::protobuf::RepeatedPtrField< ::pb::File >*
Application::mutable_file() {
  return &file_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< pb::ApplicationType>() {
  return pb::ApplicationType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< pb::FileContent>() {
  return pb::FileContent_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_config_2eproto__INCLUDED
