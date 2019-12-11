#ifndef DATA_H
#define DATA_H
#include <QString>
#include <QPair>
#include "means.h"

class Data
{
public:
    QPair<QString,means> data;
    Data();
};

#endif // DATA_H
