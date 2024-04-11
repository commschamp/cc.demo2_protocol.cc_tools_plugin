// Generated by commsdsl2tools_qt v6.3.2

#include "ConfigWidget_CC_Demo2.h"

#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

namespace cc_tools_qt_plugin
{

namespace cc_demo2
{

namespace plugin
{

ConfigWidget_CC_Demo2::ConfigWidget_CC_Demo2(int version){
    auto* versionLabel = new QLabel("Default Version:");
    auto* versionSpinBox = new QSpinBox;
    versionSpinBox->setMaximum(99999999);
    versionSpinBox->setValue(version);
    auto* versionSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    auto* versionLayoutLayout = new QHBoxLayout();
    versionLayoutLayout->addWidget(versionLabel);
    versionLayoutLayout->addWidget(versionSpinBox);
    versionLayoutLayout->addItem(versionSpacer);

    auto* verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    auto* verticalLayout = new QVBoxLayout(this);
    verticalLayout->addLayout(versionLayoutLayout);
    verticalLayout->addItem(verticalSpacer);

    setLayout(verticalLayout);

    connect(
        versionSpinBox, SIGNAL(valueChanged(int)),
        this, SLOT(versionChanged(int)));
}

void ConfigWidget_CC_Demo2::versionChanged(int value)
{
    if (m_versionUpdateCb) {
        m_versionUpdateCb(value);
    }
}

} // namespace plugin

} // namespace cc_demo2

} // namespace cc_tools_qt_plugin
