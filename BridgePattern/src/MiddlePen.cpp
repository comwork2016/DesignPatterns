#include "MiddlePen.h"

MiddlePen::MiddlePen(Color* impl)
{
    //ctor
    this->_impl = impl;
}

MiddlePen::~MiddlePen()
{
    //dtor
}

void MiddlePen::Operation()
{
    using namespace std;
    cout<<"MiddlePen::Operation"<<endl;
    this->_impl->Operation();
}
