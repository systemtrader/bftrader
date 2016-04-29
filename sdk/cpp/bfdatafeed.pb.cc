// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bfdatafeed.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "bfdatafeed.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace bftrader {
namespace bfdatafeed {

namespace {


}  // namespace


void protobuf_AssignDesc_bfdatafeed_2eproto() {
  protobuf_AddDesc_bfdatafeed_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "bfdatafeed.proto");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_bfdatafeed_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_bfdatafeed_2eproto() {
}

void protobuf_AddDesc_bfdatafeed_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::bftrader::protobuf_AddDesc_bftrader_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020bfdatafeed.proto\022\023bftrader.bfdatafeed\032"
    "\016bftrader.proto2\204\005\n\021BfDatafeedService\0224\n"
    "\004Ping\022\024.bftrader.BfPingData\032\024.bftrader.B"
    "fPingData\"\000\0226\n\nInsertTick\022\024.bftrader.BfT"
    "ickData\032\020.bftrader.BfVoid\"\000\022;\n\007GetTick\022\026"
    ".bftrader.BfGetTickReq\032\024.bftrader.BfTick"
    "Data\"\0000\001\022;\n\nDeleteTick\022\031.bftrader.BfDele"
    "teTickReq\032\020.bftrader.BfVoid\"\000\0224\n\tInsertB"
    "ar\022\023.bftrader.BfBarData\032\020.bftrader.BfVoi"
    "d\"\000\0228\n\006GetBar\022\025.bftrader.BfGetBarReq\032\023.b"
    "ftrader.BfBarData\"\0000\001\0229\n\tDeleteBar\022\030.bft"
    "rader.BfDeleteBarReq\032\020.bftrader.BfVoid\"\000"
    "\022>\n\016InsertContract\022\030.bftrader.BfContract"
    "Data\032\020.bftrader.BfVoid\"\000\022O\n\013GetContract\022"
    "\".bftrader.BfDatafeedGetContractReq\032\030.bf"
    "trader.BfContractData\"\0000\001\022K\n\016DeleteContr"
    "act\022%.bftrader.BfDatafeedDeleteContractR"
    "eq\032\020.bftrader.BfVoid\"\000B\003\370\001\001b\006proto3", 715);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "bfdatafeed.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_bfdatafeed_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_bfdatafeed_2eproto {
  StaticDescriptorInitializer_bfdatafeed_2eproto() {
    protobuf_AddDesc_bfdatafeed_2eproto();
  }
} static_descriptor_initializer_bfdatafeed_2eproto_;

// @@protoc_insertion_point(namespace_scope)

}  // namespace bfdatafeed
}  // namespace bftrader

// @@protoc_insertion_point(global_scope)