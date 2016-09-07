#include <iostream>

using namespace std;

enum PRODUCTTYPE{SFJ,XSL,NAS};

class soapBase
{
public:
	virtual ~soapBase(){};
	virtual void show() = 0;
};

class SFJSoap:public soapBase
{
public:
	void show(){cout<<"SFJ Soap!"<<endl;}
};

class XSLSoap:public soapBase
{
public:
	void show(){cout<<"XSL Soap!"<<endl;}
};

class NASSoap:public soapBase
{
public:
	void show(){cout<<"NAS Soap!"<<endl;}
};

class FactoryBase
{
public:
	virtual soapBase* createSoap() = 0;
};

class SFJFactory:public FactoryBase
{
public:
	soapBase* createSoap()
	{
		return new SFJSoap;
	}
};

class XSLFactory:public FactoryBase
{
public:
	soapBase* createSoap()
	{
		return new XSLSoap();
	}
};

class NASFactory:public FactoryBase
{
public:
	soapBase* createSoap()
	{
		return new NASSoap();
	}
};

int main()  
{  
    FactoryBase* factory = new SFJFactory();
    soapBase* pSoap1 = factory->createSoap();
    pSoap1->show();
	delete factory;
	
    factory = new XSLFactory();
    soapBase* pSoap2 = factory->createSoap();
    pSoap2->show();
	delete factory;

    factory = new NASFactory();
    soapBase* pSoap3 = factory->createSoap();
    pSoap3->show();
	delete factory;

    delete pSoap1;  
    delete pSoap2;  
    delete pSoap3;  
    return 0;  
}   