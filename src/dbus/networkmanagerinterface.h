/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was:
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef NETWORKMANAGERINTERFACE_H
#define NETWORKMANAGERINTERFACE_H

#include "generictypes.h"

#include <QList>
#include <QObject>
#include <QString>
#include <QVariant>
#include <QtDBus>

/*
 * Proxy class for interface org.freedesktop.NetworkManager
 */
class OrgFreedesktopNetworkManagerInterface : public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef NMQT_STATIC
    {
        return "org.kde.fakenetwork";
    }
#else
    {
        return "org.freedesktop.NetworkManager";
    }
#endif

public:
    OrgFreedesktopNetworkManagerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFreedesktopNetworkManagerInterface();

    Q_PROPERTY(QDBusObjectPath ActivatingConnection READ activatingConnection)
    inline QDBusObjectPath activatingConnection() const
    {
        return qvariant_cast<QDBusObjectPath>(property("ActivatingConnection"));
    }

    Q_PROPERTY(QList<QDBusObjectPath> ActiveConnections READ activeConnections)
    inline QList<QDBusObjectPath> activeConnections() const
    {
        return qvariant_cast<QList<QDBusObjectPath>>(property("ActiveConnections"));
    }

    Q_PROPERTY(QList<QDBusObjectPath> AllDevices READ allDevices)
    inline QList<QDBusObjectPath> allDevices() const
    {
        return qvariant_cast<QList<QDBusObjectPath>>(property("AllDevices"));
    }

    Q_PROPERTY(UIntList Capabilities READ capabilities)
    inline UIntList capabilities() const
    {
        return qvariant_cast<UIntList>(property("Capabilities"));
    }

    Q_PROPERTY(uint Connectivity READ connectivity)
    inline uint connectivity() const
    {
        return qvariant_cast<uint>(property("Connectivity"));
    }

    Q_PROPERTY(QList<QDBusObjectPath> Devices READ devices)
    inline QList<QDBusObjectPath> devices() const
    {
        return qvariant_cast<QList<QDBusObjectPath>>(property("Devices"));
    }

    Q_PROPERTY(QVariantMap GlobalDnsConfiguration READ globalDnsConfiguration WRITE setGlobalDnsConfiguration)
    inline QVariantMap globalDnsConfiguration() const
    {
        return qvariant_cast<QVariantMap>(property("GlobalDnsConfiguration"));
    }
    inline void setGlobalDnsConfiguration(QVariantMap value)
    {
        setProperty("GlobalDnsConfiguration", QVariant::fromValue(value));
    }

    Q_PROPERTY(uint Metered READ metered)
    inline uint metered() const
    {
        return qvariant_cast<uint>(property("Metered"));
    }

    Q_PROPERTY(bool NetworkingEnabled READ networkingEnabled)
    inline bool networkingEnabled() const
    {
        return qvariant_cast<bool>(property("NetworkingEnabled"));
    }

    Q_PROPERTY(QDBusObjectPath PrimaryConnection READ primaryConnection)
    inline QDBusObjectPath primaryConnection() const
    {
        return qvariant_cast<QDBusObjectPath>(property("PrimaryConnection"));
    }

    Q_PROPERTY(QString PrimaryConnectionType READ primaryConnectionType)
    inline QString primaryConnectionType() const
    {
        return qvariant_cast<QString>(property("PrimaryConnectionType"));
    }

    Q_PROPERTY(bool Startup READ startup)
    inline bool startup() const
    {
        return qvariant_cast<bool>(property("Startup"));
    }

    Q_PROPERTY(uint State READ state)
    inline uint state() const
    {
        return qvariant_cast<uint>(property("State"));
    }

    Q_PROPERTY(QString Version READ version)
    inline QString version() const
    {
        return qvariant_cast<QString>(property("Version"));
    }

    Q_PROPERTY(bool WimaxEnabled READ wimaxEnabled WRITE setWimaxEnabled)
    inline bool wimaxEnabled() const
    {
        return qvariant_cast<bool>(property("WimaxEnabled"));
    }
    inline void setWimaxEnabled(bool value)
    {
        setProperty("WimaxEnabled", QVariant::fromValue(value));
    }

    Q_PROPERTY(bool WimaxHardwareEnabled READ wimaxHardwareEnabled)
    inline bool wimaxHardwareEnabled() const
    {
        return qvariant_cast<bool>(property("WimaxHardwareEnabled"));
    }

    Q_PROPERTY(bool WirelessEnabled READ wirelessEnabled WRITE setWirelessEnabled)
    inline bool wirelessEnabled() const
    {
        return qvariant_cast<bool>(property("WirelessEnabled"));
    }
    inline void setWirelessEnabled(bool value)
    {
        setProperty("WirelessEnabled", QVariant::fromValue(value));
    }

    Q_PROPERTY(bool WirelessHardwareEnabled READ wirelessHardwareEnabled)
    inline bool wirelessHardwareEnabled() const
    {
        return qvariant_cast<bool>(property("WirelessHardwareEnabled"));
    }

    Q_PROPERTY(bool WwanEnabled READ wwanEnabled WRITE setWwanEnabled)
    inline bool wwanEnabled() const
    {
        return qvariant_cast<bool>(property("WwanEnabled"));
    }
    inline void setWwanEnabled(bool value)
    {
        setProperty("WwanEnabled", QVariant::fromValue(value));
    }

    Q_PROPERTY(bool WwanHardwareEnabled READ wwanHardwareEnabled)
    inline bool wwanHardwareEnabled() const
    {
        return qvariant_cast<bool>(property("WwanHardwareEnabled"));
    }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QDBusObjectPath>
    ActivateConnection(const QDBusObjectPath &connection, const QDBusObjectPath &device, const QDBusObjectPath &specific_object)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(connection) << QVariant::fromValue(device) << QVariant::fromValue(specific_object);
        return asyncCallWithArgumentList(QStringLiteral("ActivateConnection"), argumentList);
    }

    inline QDBusPendingReply<QDBusObjectPath, QDBusObjectPath>
    AddAndActivateConnection(NMVariantMapMap connection, const QDBusObjectPath &device, const QDBusObjectPath &specific_object)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(connection) << QVariant::fromValue(device) << QVariant::fromValue(specific_object);
        return asyncCallWithArgumentList(QStringLiteral("AddAndActivateConnection"), argumentList);
    }

    inline QDBusPendingReply<QDBusObjectPath, QDBusObjectPath, QVariantMap>
    AddAndActivateConnection2(NMVariantMapMap connection, const QDBusObjectPath &device, const QDBusObjectPath &specific_object, const QVariantMap &options)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(connection) << QVariant::fromValue(device) << QVariant::fromValue(specific_object) << QVariant::fromValue(options);
        return asyncCallWithArgumentList(QStringLiteral("AddAndActivateConnection2"), argumentList);
    }

    inline QDBusPendingReply<uint> CheckConnectivity()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("CheckConnectivity"), argumentList);
    }

    inline QDBusPendingReply<QDBusObjectPath> CheckpointCreate(const QList<QDBusObjectPath> &devices, uint rollback_timeout, uint flags)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(devices) << QVariant::fromValue(rollback_timeout) << QVariant::fromValue(flags);
        return asyncCallWithArgumentList(QStringLiteral("CheckpointCreate"), argumentList);
    }

    inline QDBusPendingReply<> CheckpointDestroy(const QDBusObjectPath &checkpoint)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(checkpoint);
        return asyncCallWithArgumentList(QStringLiteral("CheckpointDestroy"), argumentList);
    }

    inline QDBusPendingReply<> DeactivateConnection(const QDBusObjectPath &active_connection)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(active_connection);
        return asyncCallWithArgumentList(QStringLiteral("DeactivateConnection"), argumentList);
    }

    inline QDBusPendingReply<> Enable(bool enable)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(enable);
        return asyncCallWithArgumentList(QStringLiteral("Enable"), argumentList);
    }

    inline QDBusPendingReply<QList<QDBusObjectPath>> GetAllDevices()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetAllDevices"), argumentList);
    }

    inline QDBusPendingReply<QDBusObjectPath> GetDeviceByIpIface(const QString &iface)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(iface);
        return asyncCallWithArgumentList(QStringLiteral("GetDeviceByIpIface"), argumentList);
    }

    inline QDBusPendingReply<QList<QDBusObjectPath>> GetDevices()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetDevices"), argumentList);
    }

    inline QDBusPendingReply<QString, QString> GetLogging()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetLogging"), argumentList);
    }

    inline QDBusPendingReply<NMStringMap> GetPermissions()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetPermissions"), argumentList);
    }

    inline QDBusPendingReply<> Reload(uint flags)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(flags);
        return asyncCallWithArgumentList(QStringLiteral("Reload"), argumentList);
    }

    inline QDBusPendingReply<> SetLogging(const QString &level, const QString &domains)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(level) << QVariant::fromValue(domains);
        return asyncCallWithArgumentList(QStringLiteral("SetLogging"), argumentList);
    }

    inline QDBusPendingReply<> Sleep(bool sleep)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(sleep);
        return asyncCallWithArgumentList(QStringLiteral("Sleep"), argumentList);
    }

    inline QDBusPendingReply<uint> state()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("state"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void CheckPermissions();
    void DeviceAdded(const QDBusObjectPath &device_path);
    void DeviceRemoved(const QDBusObjectPath &device_path);
    void PropertiesChanged(const QVariantMap &properties);
    void StateChanged(uint state);
};

#endif
