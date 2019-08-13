/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was:
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DHCP4CONFIGINTERFACE_H
#define DHCP4CONFIGINTERFACE_H

#include <QObject>
#include <QString>
#include <QVariant>
#include <QtDBus>
#include "generictypes.h"

/*
 * Proxy class for interface org.freedesktop.NetworkManager.DHCP4Config
 */
class OrgFreedesktopNetworkManagerDHCP4ConfigInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef NMQT_STATIC
    {
        return "org.kde.fakenetwork.DHCP4Config";
    }
#else
    {
        return "org.freedesktop.NetworkManager.DHCP4Config";
    }
#endif

public:
    OrgFreedesktopNetworkManagerDHCP4ConfigInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFreedesktopNetworkManagerDHCP4ConfigInterface();

    Q_PROPERTY(QVariantMap Options READ options)
    inline QVariantMap options() const
    {
        return qvariant_cast< QVariantMap >(property("Options"));
    }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
    void PropertiesChanged(const QVariantMap &properties);
};

#endif
