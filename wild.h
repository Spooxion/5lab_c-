#ifndef WILD_H
#define WILD_H


#include <iostream>
#include<QString>
#include "bird.h"
#include "domestic.h"


class Wild : public Bird
{
private:
    Wild(Bird* obj1){}
    QString type_of_food;
    QString fear_of_man;

public:
    Wild(){}
    Wild(QString name, QString weight,QString age, QString typeoffly, QString male, QString typeoffood, QString fearofman) {
            setTypeofFood(typeoffood);
            setFearofMan(fearofman);
            setName(name);
            setWeight(weight);
            setAge(age);
            setTypeofFly(typeoffly);
            setMale(male);
        }

    void setTypeofFood(QString type1) {
        type_of_food=type1;
    }
    QString getTypeofFood() {
        return type_of_food;
    }
    void setFearofMan(QString fear1) {
        fear_of_man=fear1;
    }
    QString getFearofMan() {
        return fear_of_man;
    }

};


#endif // WILD_H
