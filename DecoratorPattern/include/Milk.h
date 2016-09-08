#ifndef MILK_H
#define MILK_H

#include <string>
#include "Beverage.h"
#include "Decorator.h"

using namespace std;

class Milk:public Decorator
{
    public:
        Milk(Beverage* b);
        virtual ~Milk();
        string getDescription();
        int  getPrice();

    protected:

    private:
        Beverage* beverage;
};

#endif // MILK_H
