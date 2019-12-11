#ifndef CONTRACT_H
#define CONTRACT_H
#include <QString>
#include <QHash>
class contract
{ 
public:
    QString con;
    bool Dbl,ReDbl;
    int last;
    int len;
    QHash<QString,QString>map;
    contract();
    void add(QString x);
    void sub();
    void restart();
};

#endif // CONTRACT_H
