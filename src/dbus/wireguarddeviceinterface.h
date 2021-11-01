/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was:
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef WIREGUARDDEVICEINTERFACE_H
#define WIREGUARDDEVICEINTERFACE_H

#include "generictypes.h"

#include <QByteArray>
#include <QObject>
#include <QString>
#include <QtDBus>

/*
 * Proxy class for interface org.freedesktop.NetworkManager.Device.WireGuard
 */
class OrgFreedesktopNetworkManagerDeviceWireGuardInterface : public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef NMQT_STATIC
    {
        return "org.kde.fakenetwork.Device.WireGuard";
    }
#else
    {
        return "org.freedesktop.NetworkManager.Device.WireGuard";
    }
#endif

public:
    OrgFreedesktopNetworkManagerDeviceWireGuardInterface(const QString &service,
                                                         const QString &path,
                                                         const QDBusConnection &connection,
                                                         QObject *parent = nullptr);

    ~OrgFreedesktopNetworkManagerDeviceWireGuardInterface() override;

    Q_PROPERTY(QByteArray PublicKey READ publicKey)
    inline QByteArray publicKey() const
    {
        return qvariant_cast<QByteArray>(property("PublicKey"));
    }

    Q_PROPERTY(uint ListenPort READ listenPort)
    inline uint listenPort() const
    {
        return qvariant_cast<uint>(property("ListenPort"));
    }

    Q_PROPERTY(uint FwMark READ fwMark)
    inline uint fwMark() const
    {
        return qvariant_cast<uint>(property("FwMark"));
    }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
};

#endif
