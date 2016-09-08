#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

using namespace std;

class Beverage
{
    public:
        Beverage();
        virtual ~Beverage();
        virtual string getDescription() = 0;
        virtual int getPrice() = 0;

    protected:

    private:
};

#endif // BEVERAGE_H
