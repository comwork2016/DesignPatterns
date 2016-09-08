#ifndef ADAPTEE_H
#define ADAPTEE_H

#include <iostream>

//需要适配的类
class Adaptee
{
    public:
        Adaptee();
        virtual ~Adaptee();
        virtual void SpecificRequest();

    protected:

    private:
};

#endif // ADAPTEE_H
