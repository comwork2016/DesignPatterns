#include "Milk.h"

Milk::Milk(Beverage* b)
{
    //ctor
    this->beverage = b;
}

Milk::~Milk()
{
    //dtor
}

string Milk::getDescription()
{
    return this->beverage->getDescription() + " " + "���ţ��";
}

int Milk::getPrice()
{
    return this->beverage->getPrice() + 20;
}
