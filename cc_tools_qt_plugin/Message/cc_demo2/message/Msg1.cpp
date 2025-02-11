// Generated by commsdsl2tools_qt v7.0.3

#include "Msg1.h"

#include "cc_demo2/message/Msg1.h"
#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_demo2/Message.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_demo2
{

namespace message
{

class Msg1Impl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_demo2::Message,
        ::cc_demo2::message::Msg1,
        Msg1Impl
    >
{
public:
    Msg1Impl() = default;
    Msg1Impl(const Msg1Impl&) = default;
    Msg1Impl(Msg1Impl&&) = default;
    virtual ~Msg1Impl() = default;
    Msg1Impl& operator=(const Msg1Impl&) = default;
    Msg1Impl& operator=(Msg1Impl&&) = default;
};

Msg1::Msg1() : m_pImpl(new Msg1Impl) {}
Msg1::~Msg1() = default;

Msg1& Msg1::operator=(const Msg1& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Msg1& Msg1::operator=(Msg1&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Msg1::nameImpl() const
{
    return m_pImpl->name();
}

bool Msg1::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Msg1::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Msg1::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Msg1::resetImpl()
{
    m_pImpl->reset();
}

bool Msg1::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Msg1*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Msg1::isValidImpl() const
{
    return m_pImpl->isValid();
}

Msg1::DataSeq Msg1::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Msg1::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Msg1::Ptr Msg1::cloneImpl() const
{
    ImplPtr impl(static_cast<Msg1Impl*>(m_pImpl->clone().release()));
    return Ptr(new Msg1(std::move(impl)));
}

void Msg1::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Msg1::DataSeq Msg1::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Msg1::FieldsList Msg1::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Msg1::FieldsList Msg1::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Msg1::Msg1(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_demo2

} // namespace Message

} // namespace cc_tools_qt_plugin
