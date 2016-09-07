#include <iostream>

using namespace std;

class Builder  
{
public:
	virtual void BuildHead() {}
	virtual void BuildBody() {}
	virtual void BuildLeftArm(){}
	virtual void BuildRightArm() {}
	virtual void BuildLeftLeg() {}
	virtual void BuildRightLeg() {}
};

//构造瘦人
class ThinBuilder : public Builder
{
public:
	void BuildHead() { cout<<"build thin body"<<endl; }
	void BuildBody() { cout<<"build thin head"<<endl; }
	void BuildLeftArm() { cout<<"build thin left arm"<<endl; }
	void BuildRightArm() { cout<<"build thin right arm"<<endl; }
	void BuildLeftLeg() { cout<<"build thin left leg"<<endl; }
	void BuildRightLeg() { cout<<"build thin right leg"<<endl; }
};

//构造胖人
class FatBuilder : public Builder
{
public:
	void BuildHead() { cout<<"build fat body"<<endl; }
	void BuildBody() { cout<<"build fat head"<<endl; }
	void BuildLeftArm() { cout<<"build fat left arm"<<endl; }
	void BuildRightArm() { cout<<"build fat right arm"<<endl; }
	void BuildLeftLeg() { cout<<"build fat left leg"<<endl; }
	void BuildRightLeg() { cout<<"build fat right leg"<<endl; }
};

//构造的指挥官
class Director  
{
private:
	Builder *m_pBuilder;
public:
	Director(Builder *builder) { m_pBuilder = builder; }
	void construct(){
		m_pBuilder->BuildHead();
		m_pBuilder->BuildBody();
		m_pBuilder->BuildLeftArm();
		m_pBuilder->BuildRightArm();
		m_pBuilder->BuildLeftLeg();
		m_pBuilder->BuildRightLeg();
	}
};

int main()
{
	FatBuilder thin;
	Director director(&thin);
	director.construct();
	return 0;
}