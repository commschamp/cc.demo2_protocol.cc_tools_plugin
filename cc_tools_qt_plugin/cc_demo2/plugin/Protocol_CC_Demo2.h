// Generated by commsdsl2tools_qt v7.0.3

#pragma once

#include "cc_tools_qt/ToolsProtocol.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo2
{

namespace plugin
{

class Protocol_CC_Demo2 : public cc_tools_qt::ToolsProtocol
{
    using Base = cc_tools_qt::ToolsProtocol;
public:
    Protocol_CC_Demo2();
    virtual ~Protocol_CC_Demo2();

protected:
    virtual const QString& nameImpl() const override;
};

} // namespace plugin

} // namespace cc_demo2

} // namespace cc_tools_qt_plugin
