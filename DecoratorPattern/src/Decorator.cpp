#include "Decorator.h"

Decorator::Decorator()
{
    //ctor
}

Decorator::~Decorator()
{
    //dtor
}

string Decorator::getDescription()
{
    return "装饰器，没有具体描述";
}

int Decorator::getPrice()
{
    return 0;
}
