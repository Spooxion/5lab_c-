#ifndef BIRD_H
#define BIRD_H

#include <iostream>
#include<QString>
#include <QLineEdit>

class Bird
{
private:


protected:
    QString name;
    QString weight;
    QString age;
    QString type_of_fly;
    QString male;



public:
    /*virtual void setNickName(QString nickname1){}
    virtual QString getNickName(){return " ";}
    virtual void setUseful(QString useful1){}
    virtual QString getUseful(){return " ";}

    virtual void setTypeofFood(QString type1){}
    virtual QString getTypeofFood(){return " ";}
    virtual void setFearofMan(QString fear1){}
    virtual QString getFearofMan(){return " ";
    virtual QString toString()=0;*/

    virtual ~Bird(){}
    QString getName(){
        return name;
    }
    QString getTypeofFly(){
        return type_of_fly;
    }
    QString getMale(){
        return male;
    }

    QString getWeight (){
        return weight;
    }
    QString getAge(){
        return age;
    }
    void setName(QString name1){
        name=name1;
    }
    void setTypeofFly(QString fly1){
        type_of_fly=fly1;
    }
    void setMale(QString male1){
        male=male1;
    }
    void setAge(QString age1){
        age=age1;
    }
    void setWeight(QString weight1){
        weight=weight1;
    }

 };




#endif // BIRD_H
