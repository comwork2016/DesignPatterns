#include "Mocha.h"

Mocha::Mocha(Beverage* b)
{
    //ctor
    this->beverage = b;
}

Mocha::~Mocha()
{
    //dtor
}

string Mocha::getDescription()
{
    return this->beverage->getDescription() + " " + "���Ħ��";
}

int Mocha::getPrice()
{
    return this->beverage->getPrice() + 49;
}
