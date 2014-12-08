/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generictypes.h -p nm-active-connectioninterface /home/jgrulich/development/projects/libnm-qt/dbus/introspection/nm-active-connection.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef NETWORKMANAGERQT_ACTIVE_CONNECTIONINTERFACE_H
#define NETWORKMANAGERQT_ACTIVE_CONNECTIONINTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "generictypes.h"

/*
 * Proxy class for interface org.freedesktop.NetworkManager.Connection.Active
 */
class OrgFreedesktopNetworkManagerConnectionActiveInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef NMQT_STATIC
    {
        return "org.kde.fakenetwork.Connection.Active";
    }
#else
    {
        return "org.freedesktop.NetworkManager.Connection.Active";
    }
#endif
public:
    OrgFreedesktopNetworkManagerConnectionActiveInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopNetworkManagerConnectionActiveInterface();

    Q_PROPERTY(QDBusObjectPath Connection READ connection)
    inline QDBusObjectPath connection() const
    {
        return qvariant_cast< QDBusObjectPath >(property("Connection"));
    }

    Q_PROPERTY(bool Default READ default4)
    inline bool default4() const
    {
        return qvariant_cast< bool >(property("Default"));
    }

    Q_PROPERTY(bool Default6 READ default6)
    inline bool default6() const
    {
        return qvariant_cast< bool >(property("Default6"));
    }

    Q_PROPERTY(QList<QDBusObjectPath> Devices READ devices)
    inline QList<QDBusObjectPath> devices() const
    {
        return qvariant_cast< QList<QDBusObjectPath> >(property("Devices"));
    }

    Q_PROPERTY(QDBusObjectPath Dhcp4Config READ dhcp4Config)
    inline QDBusObjectPath dhcp4Config() const
    {
        return qvariant_cast< QDBusObjectPath >(property("Dhcp4Config"));
    }

    Q_PROPERTY(QDBusObjectPath Dhcp6Config READ dhcp6Config)
    inline QDBusObjectPath dhcp6Config() const
    {
        return qvariant_cast< QDBusObjectPath >(property("Dhcp6Config"));
    }

    Q_PROPERTY(QDBusObjectPath Ip4Config READ ip4Config)
    inline QDBusObjectPath ip4Config() const
    {
        return qvariant_cast< QDBusObjectPath >(property("Ip4Config"));
    }

    Q_PROPERTY(QDBusObjectPath Ip6Config READ ip6Config)
    inline QDBusObjectPath ip6Config() const
    {
        return qvariant_cast< QDBusObjectPath >(property("Ip6Config"));
    }

    Q_PROPERTY(QDBusObjectPath Master READ master)
    inline QDBusObjectPath master() const
    {
        return qvariant_cast< QDBusObjectPath >(property("Master"));
    }

    Q_PROPERTY(QDBusObjectPath SpecificObject READ specificObject)
    inline QDBusObjectPath specificObject() const
    {
        return qvariant_cast< QDBusObjectPath >(property("SpecificObject"));
    }

    Q_PROPERTY(uint State READ state)
    inline uint state() const
    {
        return qvariant_cast< uint >(property("State"));
    }

    Q_PROPERTY(QString Id READ id)
    inline QString id() const
    {
        return qvariant_cast< QString >(property("Id"));
    }

    Q_PROPERTY(QString Uuid READ uuid)
    inline QString uuid() const
    {
        return qvariant_cast< QString >(property("Uuid"));
    }

    Q_PROPERTY(QString Type READ type)
    inline QString type() const
    {
        return qvariant_cast< QString >(property("Type"));
    }

    Q_PROPERTY(bool Vpn READ vpn)
    inline bool vpn() const
    {
        return qvariant_cast< bool >(property("Vpn"));
    }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
    void PropertiesChanged(const QVariantMap &properties);
};

#endif
