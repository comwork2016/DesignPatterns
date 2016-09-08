#ifndef Color_H
#define Color_H


class Color
{
    public:
        Color();
        virtual ~Color();
        virtual void Operation()=0;//定义操作接口
    protected:

    private:
};

#endif // Color_H
