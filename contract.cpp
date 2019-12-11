#include "contract.h"

#include <QString>
contract::contract()
{
    map.clear();
    map.insert("11","1♣");
    map.insert("12","1♦");
    map.insert("13","1♥");
    map.insert("14","1♠");
    map.insert("15","1NT");
    map.insert("21","2♣");
    map.insert("22","2♦");
    map.insert("23","2♥");
    map.insert("24","2♠");
    map.insert("25","2NT");
    map.insert("31","3♣");
    map.insert("32","3♦");
    map.insert("33","3♥");
    map.insert("34","3♠");
    map.insert("35","3NT");
    map.insert("41","4♣");
    map.insert("42","4♦");
    map.insert("43","4♥");
    map.insert("44","4♠");
    map.insert("45","4NT");
    map.insert("51","5♣");
    map.insert("52","5♦");
    map.insert("53","5♥");
    map.insert("54","5♠");
    map.insert("55","5NT");
    map.insert("61","6♣");
    map.insert("62","6♦");
    map.insert("63","6♥");
    map.insert("64","6♠");
    map.insert("65","6NT");
    map.insert("71","7♣");
    map.insert("72","7♦");
    map.insert("73","7♥");
    map.insert("74","7♠");
    map.insert("75","7NT");
    map.insert("-1","Pass");
    map.insert("-2","Dbl");
    map.insert("-3","ReDbl");
    last=-1;
    Dbl=false;
    ReDbl=false;
    len=0;
    con="";
}
void contract::add(QString x)
{
    con=con+x;

    if(x!="-1_")last=len%4;
    len++;
    return;
}
void contract::sub()
{
    con=con.left(len-3);
    return ;
}

void contract::restart()
{
    last=-1;
    Dbl=false;
    ReDbl=false;
    len=0;
    con="";
}
