#ifndef NANOTECHPRO_H
#define NANOTECHPRO_H

#include "nanotechpro_global.h"

#include <extensionsystem/iplugin.h>

namespace NanotechPRO {
namespace Internal {

class NanotechPROPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "NanotechPRO.json")

public:
    NanotechPROPlugin();
    ~NanotechPROPlugin();

    bool initialize(const QStringList &arguments, QString *errorString);
    void extensionsInitialized();
    ShutdownFlag aboutToShutdown();

private slots:
    void triggerAction();
};

} // namespace Internal
} // namespace NanotechPRO

#endif // NANOTECHPRO_H

