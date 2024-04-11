// Generated by commsdsl2tools_qt v6.3.2

#pragma once

#include <QtCore/QVariantList>
#include "cc_demo2/message/Msg2.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt_plugin/cc_demo2/Message.h"
#include "cc_tools_qt_plugin/cc_demo2/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo2
{

namespace message
{

class Msg2 : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_demo2::message::Msg2<cc_tools_qt_plugin::cc_demo2::Message, cc_tools_qt_plugin::cc_demo2::options::DefaultOptions>,
        Msg2
    >
{
public:
    Msg2();
    Msg2(const Msg2&) = delete;
    Msg2(Msg2&&) = delete;
    virtual ~Msg2();
    Msg2& operator=(const Msg2&);
    Msg2& operator=(Msg2&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_demo2

} // namespace cc_tools_qt_plugin
