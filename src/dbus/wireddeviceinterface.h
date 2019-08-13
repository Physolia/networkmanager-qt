/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was:
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef WIREDDEVICEINTERFACE_H
#define WIREDDEVICEINTERFACE_H

#include <QObject>
#include <QString>
#include <QStringList>
#include <QVariant>
#include <QtDBus>
#include "generictypes.h"

/*
 * Proxy class for interface org.freedesktop.NetworkManager.Device.Wired
 */
class OrgFreedesktopNetworkManagerDeviceWiredInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef NMQT_STATIC
    {
        return "org.kde.fakenetwork.Device.Wired";
    }
#else
    {
        return "org.freedesktop.NetworkManager.Device.Wired";
    }
#endif

public:
    OrgFreedesktopNetworkManagerDeviceWiredInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFreedesktopNetworkManagerDeviceWiredInterface();

    Q_PROPERTY(bool Carrier READ carrier)
    inline bool carrier() const
    {
        return qvariant_cast< bool >(property("Carrier"));
    }

    Q_PROPERTY(QString HwAddress READ hwAddress)
    inline QString hwAddress() const
    {
        return qvariant_cast< QString >(property("HwAddress"));
    }

    Q_PROPERTY(QString PermHwAddress READ permHwAddress)
    inline QString permHwAddress() const
    {
        return qvariant_cast< QString >(property("PermHwAddress"));
    }

    Q_PROPERTY(QStringList S390Subchannels READ s390Subchannels)
    inline QStringList s390Subchannels() const
    {
        return qvariant_cast< QStringList >(property("S390Subchannels"));
    }

    Q_PROPERTY(uint Speed READ speed)
    inline uint speed() const
    {
        return qvariant_cast< uint >(property("Speed"));
    }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
    void PropertiesChanged(const QVariantMap &properties);
};

#endif
