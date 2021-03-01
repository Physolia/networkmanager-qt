/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was:
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OLPCMESHDEVICEINTERFACE_H
#define OLPCMESHDEVICEINTERFACE_H

#include "generictypes.h"

#include <QObject>
#include <QString>
#include <QVariant>
#include <QtDBus>

/*
 * Proxy class for interface org.freedesktop.NetworkManager.Device.OlpcMesh
 */
class OrgFreedesktopNetworkManagerDeviceOlpcMeshInterface : public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef NMQT_STATIC
    {
        return "org.kde.fakenetwork.Device.OlpcMesh";
    }
#else
    {
        return "org.freedesktop.NetworkManager.Device.OlpcMesh";
    }
#endif

public:
    OrgFreedesktopNetworkManagerDeviceOlpcMeshInterface(const QString &service,
                                                        const QString &path,
                                                        const QDBusConnection &connection,
                                                        QObject *parent = nullptr);

    ~OrgFreedesktopNetworkManagerDeviceOlpcMeshInterface();

    Q_PROPERTY(uint ActiveChannel READ activeChannel)
    inline uint activeChannel() const
    {
        return qvariant_cast<uint>(property("ActiveChannel"));
    }

    Q_PROPERTY(QDBusObjectPath Companion READ companion)
    inline QDBusObjectPath companion() const
    {
        return qvariant_cast<QDBusObjectPath>(property("Companion"));
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
