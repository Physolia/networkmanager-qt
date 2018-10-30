/*
    Copyright 2012-2013  Jan Grulich <jgrulich@redhat.com>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) version 3, or any
    later version accepted by the membership of KDE e.V. (or its
    successor approved by the membership of KDE e.V.), which shall
    act as a proxy defined in Section 6 of version 3 of the license.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef NETWORKMANAGERQT_IPV4_SETTING_P_H
#define NETWORKMANAGERQT_IPV4_SETTING_P_H

#include "../ipconfig.h"

#include <networkmanagerqt/networkmanagerqt_export.h>
#include <QtCore/QStringList>
#include <QtNetwork/QHostAddress>

namespace NetworkManager
{

class Ipv4SettingPrivate
{
public:
    Ipv4SettingPrivate();

    QString name;
    NetworkManager::Ipv4Setting::ConfigMethod method;
    QList<QHostAddress> dns;
    QStringList dnsSearch;
    QList<NetworkManager::IpAddress> addresses;
    QList<NetworkManager::IpRoute> routes;
    int routeMetric;
    bool ignoreAutoRoutes;
    bool ignoreAutoDns;
    QString dhcpClientId;
    bool dhcpSendHostname;
    QString dhcpHostname;
    bool neverDefault;
    bool mayFail;
    qint32 dadTimeout;
    QString dhcpFqdn;
    QStringList dnsOptions;
    qint32 dnsPriority;
    QString gateway;
    NMVariantMapList addressData;
    NMVariantMapList routeData;
};

}
#endif // NETWORKMANAGERQT_IPV4_SETTING_P_H
