// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: InputMessage.proto

#ifndef PROTOBUF_InputMessage_2eproto__INCLUDED
#define PROTOBUF_InputMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_InputMessage_2eproto();
void protobuf_AssignDesc_InputMessage_2eproto();
void protobuf_ShutdownFile_InputMessage_2eproto();

class InputMessage;

// ===================================================================

class InputMessage : public ::google::protobuf::Message {
 public:
  InputMessage();
  virtual ~InputMessage();

  InputMessage(const InputMessage& from);

  inline InputMessage& operator=(const InputMessage& from) {
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
  static const InputMessage& default_instance();

  void Swap(InputMessage* other);

  // implements Message ----------------------------------------------

  InputMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const InputMessage& from);
  void MergeFrom(const InputMessage& from);
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

  // required bool ahead = 1;
  inline bool has_ahead() const;
  inline void clear_ahead();
  static const int kAheadFieldNumber = 1;
  inline bool ahead() const;
  inline void set_ahead(bool value);

  // required bool back = 2;
  inline bool has_back() const;
  inline void clear_back();
  static const int kBackFieldNumber = 2;
  inline bool back() const;
  inline void set_back(bool value);

  // required bool left = 3;
  inline bool has_left() const;
  inline void clear_left();
  static const int kLeftFieldNumber = 3;
  inline bool left() const;
  inline void set_left(bool value);

  // required bool right = 4;
  inline bool has_right() const;
  inline void clear_right();
  static const int kRightFieldNumber = 4;
  inline bool right() const;
  inline void set_right(bool value);

  // @@protoc_insertion_point(class_scope:InputMessage)
 private:
  inline void set_has_ahead();
  inline void clear_has_ahead();
  inline void set_has_back();
  inline void clear_has_back();
  inline void set_has_left();
  inline void clear_has_left();
  inline void set_has_right();
  inline void clear_has_right();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  bool ahead_;
  bool back_;
  bool left_;
  bool right_;
  friend void  protobuf_AddDesc_InputMessage_2eproto();
  friend void protobuf_AssignDesc_InputMessage_2eproto();
  friend void protobuf_ShutdownFile_InputMessage_2eproto();

  void InitAsDefaultInstance();
  static InputMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// InputMessage

// required bool ahead = 1;
inline bool InputMessage::has_ahead() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InputMessage::set_has_ahead() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InputMessage::clear_has_ahead() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void InputMessage::clear_ahead() {
  ahead_ = false;
  clear_has_ahead();
}
inline bool InputMessage::ahead() const {
  // @@protoc_insertion_point(field_get:InputMessage.ahead)
  return ahead_;
}
inline void InputMessage::set_ahead(bool value) {
  set_has_ahead();
  ahead_ = value;
  // @@protoc_insertion_point(field_set:InputMessage.ahead)
}

// required bool back = 2;
inline bool InputMessage::has_back() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void InputMessage::set_has_back() {
  _has_bits_[0] |= 0x00000002u;
}
inline void InputMessage::clear_has_back() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void InputMessage::clear_back() {
  back_ = false;
  clear_has_back();
}
inline bool InputMessage::back() const {
  // @@protoc_insertion_point(field_get:InputMessage.back)
  return back_;
}
inline void InputMessage::set_back(bool value) {
  set_has_back();
  back_ = value;
  // @@protoc_insertion_point(field_set:InputMessage.back)
}

// required bool left = 3;
inline bool InputMessage::has_left() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void InputMessage::set_has_left() {
  _has_bits_[0] |= 0x00000004u;
}
inline void InputMessage::clear_has_left() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void InputMessage::clear_left() {
  left_ = false;
  clear_has_left();
}
inline bool InputMessage::left() const {
  // @@protoc_insertion_point(field_get:InputMessage.left)
  return left_;
}
inline void InputMessage::set_left(bool value) {
  set_has_left();
  left_ = value;
  // @@protoc_insertion_point(field_set:InputMessage.left)
}

// required bool right = 4;
inline bool InputMessage::has_right() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void InputMessage::set_has_right() {
  _has_bits_[0] |= 0x00000008u;
}
inline void InputMessage::clear_has_right() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void InputMessage::clear_right() {
  right_ = false;
  clear_has_right();
}
inline bool InputMessage::right() const {
  // @@protoc_insertion_point(field_get:InputMessage.right)
  return right_;
}
inline void InputMessage::set_right(bool value) {
  set_has_right();
  right_ = value;
  // @@protoc_insertion_point(field_set:InputMessage.right)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_InputMessage_2eproto__INCLUDED
