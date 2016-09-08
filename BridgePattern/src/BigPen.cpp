#include "BigPen.h"

BigPen::BigPen(Color* impl)
{
    //ctor
    this->_impl = impl;
}

BigPen::~BigPen()
{
    //dtor
}

void BigPen::Operation()
{
    using namespace std;
    cout<<"BigPen::Operation"<<endl;
    this->_impl->Operation();
}
