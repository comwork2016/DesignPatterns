#include "Adaptee.h"

Adaptee::Adaptee()
{
    //ctor
}

Adaptee::~Adaptee()
{
    //dtor
}

void Adaptee::SpecificRequest()
{
    using namespace std;
    cout << "Adaptee::SpecificRequest()" << endl;
}
