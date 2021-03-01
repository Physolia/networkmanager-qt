/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was:
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef INFINIBANDDEVICEINTERFACE_H
#define INFINIBANDDEVICEINTERFACE_H

#include "generictypes.h"

#include <QObject>
#include <QString>
#include <QVariant>
#include <QtDBus>

/*
 * Proxy class for interface org.freedesktop.NetworkManager.Device.Infiniband
 */
class OrgFreedesktopNetworkManagerDeviceInfinibandInterface : public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef NMQT_STATIC
    {
        return "org.kde.fakenetwork.Device.Infiniband";
    }
#else
    {
        return "org.freedesktop.NetworkManager.Device.Infiniband";
    }
#endif

public:
    OrgFreedesktopNetworkManagerDeviceInfinibandInterface(const QString &service,
                                                          const QString &path,
                                                          const QDBusConnection &connection,
                                                          QObject *parent = nullptr);

    ~OrgFreedesktopNetworkManagerDeviceInfinibandInterface();

    Q_PROPERTY(bool Carrier READ carrier)
    inline bool carrier() const
    {
        return qvariant_cast<bool>(property("Carrier"));
    }

    Q_PROPERTY(QString HwAddress READ hwAddress)
    inline QString hwAddress() const
    {
        return qvariant_cast<QString>(property("HwAddress"));
    }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
    void PropertiesChanged(const QVariantMap &properties);
};

#endif
