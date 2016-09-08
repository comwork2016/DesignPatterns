#ifndef DECORATOR_H
#define DECORATOR_H

#include "Beverage.h"

class Decorator:public Beverage
{
    public:
        Decorator();
        virtual ~Decorator();
        string getDescription();
        int getPrice();

    protected:

    private:
};

#endif // DECORATOR_H
