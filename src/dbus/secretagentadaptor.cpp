/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was:
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "secretagentadaptor.h"
#include <QString>
#include <QStringList>

/*
 * Implementation of adaptor class SecretAgentAdaptor
 */

SecretAgentAdaptor::SecretAgentAdaptor(NetworkManager::SecretAgent *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

SecretAgentAdaptor::~SecretAgentAdaptor()
{
    // destructor
}

void SecretAgentAdaptor::CancelGetSecrets(const QDBusObjectPath &connection_path, const QString &setting_name)
{
    // handle method call org.freedesktop.NetworkManager.SecretAgent.CancelGetSecrets
    parent()->CancelGetSecrets(connection_path, setting_name);
}

void SecretAgentAdaptor::DeleteSecrets(NMVariantMapMap connection, const QDBusObjectPath &connection_path)
{
    // handle method call org.freedesktop.NetworkManager.SecretAgent.DeleteSecrets
    parent()->DeleteSecrets(connection, connection_path);
}

NMVariantMapMap SecretAgentAdaptor::GetSecrets(NMVariantMapMap connection,
                                               const QDBusObjectPath &connection_path,
                                               const QString &setting_name,
                                               const QStringList &hints,
                                               uint flags)
{
    // handle method call org.freedesktop.NetworkManager.SecretAgent.GetSecrets
    return parent()->GetSecrets(connection, connection_path, setting_name, hints, flags);
}

void SecretAgentAdaptor::SaveSecrets(NMVariantMapMap connection, const QDBusObjectPath &connection_path)
{
    // handle method call org.freedesktop.NetworkManager.SecretAgent.SaveSecrets
    parent()->SaveSecrets(connection, connection_path);
}
