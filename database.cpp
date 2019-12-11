#include "database.h"

database::database()
{

}
void database::update(QString x,means y)
{
    DBtree[x]=y;
}
void database::load()
{

    QFile file("ccba.txt");
    if(file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        QTextStream in(&file);
        in.setCodec("UTF-8");
        QString t;
        int i=0;
        QString x;
        means y;
        while(!in.atEnd())
        {
            t=in.readLine();
            if(i==0)x=QString(t);
            if(i==1)y.point=QString(t);
            if(i==2)y.spade=QString(t);
            if(i==3)y.heart=QString(t);
            if(i==4)y.diamond=QString(t);
            if(i==5)y.club=QString(t);
            if(i==6)
            {
                y.other=QString(t);
                update(x,y);
                i=0;
            }
            else i++;
        }
        file.close();
    }
}
void database::save()
{
    QFile file("ccba.txt");
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QHash<QString,means>::iterator iter;
    iter=DBtree.begin();
    QString x;
    means y;
    while(iter!=DBtree.end())
    {
        x=iter.key();
        y=iter.value();
        if(y.club=="")y.club="无";
        if(y.other=="")y.other="无";
        if(y.diamond=="")y.diamond="无";
        if(y.heart=="")y.heart="无";
        if(y.spade=="")y.spade="无";
        if(y.point=="")y.point="无";
        file.write(x.toUtf8());
        file.write("\n");
        file.write(y.point.toUtf8());
        file.write("\n");
        file.write(y.spade.toUtf8());
        file.write("\n");
        file.write(y.heart.toUtf8());
        file.write("\n");
        file.write(y.diamond.toUtf8());
        file.write("\n");
        file.write(y.club.toUtf8());
        file.write("\n");
        file.write(y.other.toUtf8());
        file.write("\n");
        iter++;
    }
    file.close();
}
