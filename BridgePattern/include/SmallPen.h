#ifndef SmallPen_H
#define SmallPen_H

#include <iostream>
#include "ColorPen.h"
#include "Color.h"

class SmallPen:public ColorPen
{
    public:
        SmallPen(Color* impl);
        virtual ~SmallPen();

        virtual void Operation();

    protected:

    private:
        Color* _impl;
};

#endif // SmallPen_H
