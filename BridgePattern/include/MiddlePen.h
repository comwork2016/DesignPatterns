#ifndef MiddlePen_H
#define MiddlePen_H

#include <iostream>
#include "ColorPen.h"
#include "Color.h"

class MiddlePen:public ColorPen
{
    public:
        MiddlePen(Color* impl);
        virtual ~MiddlePen();

        virtual void Operation();

    protected:

    private:
        Color* _impl;
};

#endif // MiddlePen_H
