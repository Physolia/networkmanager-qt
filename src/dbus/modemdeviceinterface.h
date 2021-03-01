/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was:
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef MODEMDEVICEINTERFACE_H
#define MODEMDEVICEINTERFACE_H

#include "generictypes.h"

#include <QObject>
#include <QString>
#include <QVariant>
#include <QtDBus>

/*
 * Proxy class for interface org.freedesktop.NetworkManager.Device.Modem
 */
class OrgFreedesktopNetworkManagerDeviceModemInterface : public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef NMQT_STATIC
    {
        return "org.kde.fakenetwork.Device.Modem";
    }
#else
    {
        return "org.freedesktop.NetworkManager.Device.Modem";
    }
#endif

public:
    OrgFreedesktopNetworkManagerDeviceModemInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFreedesktopNetworkManagerDeviceModemInterface();

    Q_PROPERTY(uint CurrentCapabilities READ currentCapabilities)
    inline uint currentCapabilities() const
    {
        return qvariant_cast<uint>(property("CurrentCapabilities"));
    }

    Q_PROPERTY(uint ModemCapabilities READ modemCapabilities)
    inline uint modemCapabilities() const
    {
        return qvariant_cast<uint>(property("ModemCapabilities"));
    }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
    void PropertiesChanged(const QVariantMap &properties);
};

#endif
