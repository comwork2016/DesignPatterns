#include "Adapter1.h"

//对象模式的Adapter
Adapter1::Adapter1():_adaptee(new Adaptee())
{
}

Adapter1::Adapter1(Adaptee* _adaptee)
{
    this->_adaptee = _adaptee;
}

Adapter1::~Adapter1()
{
}

void Adapter1::Request()
{
    using namespace std;
    cout << "Adapter1::Request()" << endl;
    this->_adaptee->SpecificRequest();
    cout << "----------------------------" <<endl;
}
