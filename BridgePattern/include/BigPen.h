#ifndef BigPen_H
#define BigPen_H

#include <iostream>
#include "ColorPen.h"
#include "Color.h"

class BigPen:public ColorPen
{
    public:
        BigPen(Color* impl);
        virtual ~BigPen();

        virtual void Operation();

    protected:

    private:
        Color* _impl;
};

#endif // BigPen_H
