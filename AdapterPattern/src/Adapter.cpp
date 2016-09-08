#include "Adapter.h"
#include <iostream>

using namespace std;

//类模式的Adapter
Adapter::Adapter()
{
}

Adapter::~Adapter()
{
}

void Adapter::Request()
{
    cout << "Adapter::Request()" << endl;
    this->SpecificRequest();
    cout << "----------------------------" <<endl;
}
