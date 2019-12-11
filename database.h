#ifndef DATABASE_H
#define DATABASE_H
#include <QString>
#include <QHash>
#include <QFile>
#include <QDebug>
#include "means.h"

class database
{
public:
    QHash<QString,means> DBtree;
    database();
    void load();
    void save();
    void update(QString x,means y);
};

#endif // DATABASE_H
