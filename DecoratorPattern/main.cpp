#include <iostream>
#include "Beverage.h"
#include "CoffeeBean1.h"
#include "CoffeeBean2.h"
#include "Milk.h"
#include "Mocha.h"

using namespace std;

int main()
{
    Beverage* b = new CoffeeBean1();
    cout<<b->getDescription()<<","<<b->getPrice()<<endl;
    b = new Milk(b);
    cout<<b->getDescription()<<","<<b->getPrice()<<endl;

    Beverage* b2 = new CoffeeBean2();
    cout<<b2->getDescription()<<","<<b2->getPrice()<<endl;
    b2 = new Mocha(b2);
    cout<<b2->getDescription()<<","<<b2->getPrice()<<endl;

    delete b;
    delete b2;
    return 0;
}
