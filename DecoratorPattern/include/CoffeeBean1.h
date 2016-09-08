#ifndef COFFEEBEAN1_H
#define COFFEEBEAN1_H

#include <string>
#include "Beverage.h"

using namespace std;

class CoffeeBean1:public Beverage
{
    public:
        CoffeeBean1();
        virtual ~CoffeeBean1();
        string getDescription();
        int getPrice();

    protected:

    private:
};

#endif // COFFEEBEAN1_H
