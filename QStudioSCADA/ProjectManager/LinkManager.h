﻿#ifndef LINKMANAGER_H
#define LINKMANAGER_H

#include "../Public/Public.h"
#include "DeviceBase.h"
#include <QJsonObject>
#include <QStandardItemModel>
#include <QList>


class LinkManager
{

public:
    LinkManager(QString projectPath);
    void addDevice(DeviceBase *dev);
    void delDevice(DeviceBase *dev);

public:
    QList<DeviceBase *> devList;

private:

    QString m_ProjectPath;

public:
    bool loadFromFile(SaveFormat saveFormat);
    bool saveToFile(SaveFormat saveFormat);

private:
    void load(const QJsonObject &json);
    void save(QJsonObject &json);


};

#endif // LINKMANAGER_H
