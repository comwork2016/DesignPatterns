#include "SmallPen.h"

SmallPen::SmallPen(Color* impl)
{
    //ctor
    this->_impl = impl;
}

SmallPen::~SmallPen()
{
    //dtor
}

void SmallPen::Operation()
{
    using namespace std;
    cout<<"SmallPen::Operation"<<endl;
    this->_impl->Operation();
}
