#ifndef COFFEEBEAN2_H
#define COFFEEBEAN2_H

#include "Beverage.h"

using namespace std;

class CoffeeBean2:public Beverage
{
    public:
        CoffeeBean2();
        virtual ~CoffeeBean2();
        string getDescription();
        int getPrice();
    protected:

    private:
};

#endif // COFFEEBEAN2_H
