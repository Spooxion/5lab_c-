#ifndef DOMESTIC_H
#define DOMESTIC_H

#include <iostream>
#include<QString>
#include "bird.h"

class Domestic : public Bird
{
private:
    QString nickname;
    QString useful;

public:
    Domestic(){}
    Domestic(QString name, QString weight,QString age, QString typeoffly, QString male, QString usefull, QString nick) {
            setNickName(nick);
            setUseful(usefull);
            setName(name);
            setWeight(weight);
            setAge(age);
            setTypeofFly(typeoffly);
            setMale(male);
        }

    void setNickName(QString nickname1) {
        nickname=nickname1;
    }
    QString getNickName() {
        return nickname;
    }
    void setUseful(QString useful1) {
        useful=useful1;
    }
    QString getUseful() {
        return useful;
    }

};

#endif // DOMESTIC_H
