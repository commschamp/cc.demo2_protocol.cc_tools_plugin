// Generated by commsdsl2tools_qt v6.3.2

#pragma once

#include <tuple>
#include <QtCore/QVariantList>
#include "cc_tools_qt/TransportMessageBase.h"
#include "cc_tools_qt_plugin/cc_demo2/options/DefaultOptions.h"
#include "cc_demo2/frame/Frame.h"
#include "cc_tools_qt_plugin/cc_demo2/Message.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo2
{

namespace frame
{

struct FrameTransportMessageFields
{
    using All =
        std::tuple<
            ::cc_demo2::frame::FrameLayers<cc_tools_qt_plugin::cc_demo2::options::DefaultOptions>::SyncMembers::Sync,
            ::cc_demo2::frame::FrameLayers<cc_tools_qt_plugin::cc_demo2::options::DefaultOptions>::SizeMembers::Size,
            ::cc_demo2::field::MsgId<cc_tools_qt_plugin::cc_demo2::options::DefaultOptions>,
            ::cc_demo2::frame::FrameLayers<cc_tools_qt_plugin::cc_demo2::options::DefaultOptions>::VersionMembers::Version,
            ::cc_demo2::frame::FrameLayers<cc_tools_qt_plugin::cc_demo2::options::DefaultOptions>::Data::Field,
            ::cc_demo2::frame::FrameLayers<cc_tools_qt_plugin::cc_demo2::options::DefaultOptions>::ChecksumMembers::Checksum
        >;
    static const QVariantList& props();
};

class FrameTransportMessage : public
    cc_tools_qt::TransportMessageBase<
        cc_tools_qt_plugin::cc_demo2::Message,
        FrameTransportMessageFields::All
    >
{
protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
    virtual comms::ErrorStatus readImpl(ReadIterator& iter, std::size_t len) override;
};

} // namespace frame

} // namespace cc_demo2

} // namespace cc_tools_qt_plugin
