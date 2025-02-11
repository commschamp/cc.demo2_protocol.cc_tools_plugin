// Generated by commsdsl2tools_qt v7.0.3

#pragma once

#include <tuple>
#include "cc_demo2/frame/Frame.h"
#include "cc_tools_qt/ToolsTransportProtMessageBase.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_demo2
{

namespace frame
{

template <typename TOpt>
struct FrameProtTransportMessageFields
{
    using All =
        std::tuple<
            typename ::cc_demo2::frame::FrameLayers<TOpt>::SyncMembers::Sync,
            typename ::cc_demo2::frame::FrameLayers<TOpt>::SizeMembers::Size,
            ::cc_demo2::field::MsgId<TOpt>,
            typename ::cc_demo2::frame::FrameLayers<TOpt>::VersionMembers::Version,
            typename ::cc_demo2::frame::FrameLayers<TOpt>::Data::Field,
            typename ::cc_demo2::frame::FrameLayers<TOpt>::ChecksumMembers::Checksum
        >;
};

template <typename TMsgBase, typename TOpt>
class FrameProtTransportMessage : public
    cc_tools_qt::ToolsTransportProtMessageBase<
        TMsgBase,
        typename FrameProtTransportMessageFields<TOpt>::All,
        FrameProtTransportMessage<TMsgBase, TOpt>
    >
{
    using Base =
        cc_tools_qt::ToolsTransportProtMessageBase<
            TMsgBase,
            typename FrameProtTransportMessageFields<TOpt>::All,
            FrameProtTransportMessage<TMsgBase, TOpt>
        >;
public:
    COMMS_MSG_FIELDS_NAMES(
        sync,
        size,
        id,
        version,
        data,
        checksum
    );

    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        len -= 2U;
        auto es = Base::template doReadUntilAndUpdateLen<5U>(iter, len);
        if (es == comms::ErrorStatus::Success) {
            len += 2U;
            es = Base::template doReadFrom<5U>(iter, len);
        }

        return es;
    }
};

} // namespace frame

} // namespace cc_demo2

} // namespace Message

} // namespace cc_tools_qt_plugin
