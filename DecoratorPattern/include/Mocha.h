#ifndef MOCHA_H
#define MOCHA_H

#include "Decorator.h"
#include "Beverage.h"

using namespace std;

class Mocha:public Decorator
{
    public:
        Mocha(Beverage* b);
        virtual ~Mocha();
        string getDescription();
        int  getPrice();

    protected:

    private:
        Beverage* beverage;
};

#endif // MOCHA_H
