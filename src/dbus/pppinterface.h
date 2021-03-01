/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was:
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef PPPINTERFACE_H
#define PPPINTERFACE_H

#include "generictypes.h"

#include <QList>
#include <QObject>
#include <QString>
#include <QVariant>
#include <QtDBus>

/*
 * Proxy class for interface org.freedesktop.NetworkManager.PPP
 */
class OrgFreedesktopNetworkManagerPPPInterface : public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef NMQT_STATIC
    {
        return "org.kde.fakenetwork.PPP";
    }
#else
    {
        return "org.freedesktop.NetworkManager.PPP";
    }
#endif

public:
    OrgFreedesktopNetworkManagerPPPInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFreedesktopNetworkManagerPPPInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString, QString> NeedSecrets()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("NeedSecrets"), argumentList);
    }

    inline QDBusPendingReply<> SetIp4Config(const QVariantMap &config)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(config);
        return asyncCallWithArgumentList(QStringLiteral("SetIp4Config"), argumentList);
    }

    inline QDBusPendingReply<> SetIp6Config(const QVariantMap &config)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(config);
        return asyncCallWithArgumentList(QStringLiteral("SetIp6Config"), argumentList);
    }

    inline QDBusPendingReply<> SetState(uint state)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(state);
        return asyncCallWithArgumentList(QStringLiteral("SetState"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif
