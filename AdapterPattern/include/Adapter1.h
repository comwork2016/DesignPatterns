#ifndef ADAPTER1_H
#define ADAPTER1_H

#include <iostream>
#include "Target.h"
#include "Adaptee.h"

//对象模式，适配器类，继承Target类，采用组合的方式实现Adaptee的复用
class Adapter1:public Target
{
public:
    Adapter1(Adaptee* adaptee);
    Adapter1();
    ~Adapter1();
    virtual void Request();//实现Target定义的Request接口
private:
    Adaptee* _adaptee;
};

#endif // ADAPTER1_H
