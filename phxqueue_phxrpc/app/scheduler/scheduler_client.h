/* scheduler_client.h

 Generated by phxrpc_pb2client from scheduler.proto

*/

#pragma once

#include "phxqueue/comm.h"
#include "phxrpc/rpc.h"

#include "scheduler.pb.h"


class SchedulerClient {
  public:
    static bool Init(const char *config_file);

    static const char *GetPackageName();

    SchedulerClient();
    virtual ~SchedulerClient();

    int PHXEcho(const google::protobuf::StringValue &req,
                google::protobuf::StringValue *resp);

    int PhxBatchEcho(const google::protobuf::StringValue &req,
                     google::protobuf::StringValue *resp);

    int GetAddrScale(const phxqueue::comm::proto::GetAddrScaleRequest &req,
                     phxqueue::comm::proto::GetAddrScaleResponse *resp);

    phxqueue::comm::RetCode
    ProtoGetAddrScale(const phxqueue::comm::proto::GetAddrScaleRequest &req,
                      phxqueue::comm::proto::GetAddrScaleResponse &resp);
};
