// Generated by commsdsl2tools_qt v6.3.0

#pragma once

#include "cc_demo2/Message.h"
#include "cc_tools_qt/MessageBase.h"
#include "cc_tools_qt_plugin/cc_demo2/Version.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo2
{

class Message : public
    cc_tools_qt::MessageBase<
        ::cc_demo2::Message
    >
{
protected:
    virtual const QVariantList& extraTransportFieldsPropertiesImpl() const override;
};

} // namespace cc_demo2

} // namespace cc_tools_qt_plugin