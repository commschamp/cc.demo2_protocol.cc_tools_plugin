// Generated by commsdsl2tools_qt v6.3.0

#include "MsgId.h"

#include "cc_demo2/field/MsgId.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_demo2/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo2
{

namespace field
{

QVariantMap createProps_msgId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo2::field::MsgId<cc_tools_qt_plugin::cc_demo2::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("Msg1", 1)
            .add("Msg2", 2)
            .asMap();
}

} // namespace field

} // namespace cc_demo2

} // namespace cc_tools_qt_plugin
