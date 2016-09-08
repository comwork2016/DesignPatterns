#ifndef ColorPen_H
#define ColorPen_H

class ColorPen
{
    public:
        virtual ~ColorPen();

        virtual void Operation()=0;

    protected:
        ColorPen();

    private:
};

#endif // ColorPen_H
