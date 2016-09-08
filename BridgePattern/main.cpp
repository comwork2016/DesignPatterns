#include <iostream>
#include "ColorPen.h"
#include "BigPen.h"
#include "MiddlePen.h"
#include "SmallPen.h"
#include "Color.h"
#include "BlackColor.h"
#include "RedColor.h"


using namespace std;

int main()
{
    /* 将抽象部分与它的实现部分分离，使得它们可以独立地变化
10
11     1、抽象ColorPen与实现Color分离;
12
13     2、抽象部分ColorPen可以变化，如new BigPen(imp)、new SmallPen(imp2);
14
15     3、实现部分Color也可以变化，如new BlackColor()、new RedColor();
16
17     */
    Color* black = new BlackColor();        //实现部分BlackColor
    Color* red = new RedColor();        //实现部分BlackColor

    ColorPen* abs = new BigPen(black);                        //抽象部分BigPen
    abs->Operation();

    cout << "-----------------------------------------" << endl;

    ColorPen* abs1 = new BigPen(red);
    abs1->Operation();

    cout << "-----------------------------------------" << endl;

    ColorPen* abs2 = new MiddlePen(black);                        //抽象部分BigPen
    abs2->Operation();

    cout << "-----------------------------------------" << endl;

    ColorPen* abs3 = new MiddlePen(red);
    abs3->Operation();

    cout << "-----------------------------------------" << endl;

    ColorPen* abs4 = new SmallPen(black);                        //抽象部分BigPen
    abs4->Operation();

    cout << "-----------------------------------------" << endl;

    ColorPen* abs5 = new SmallPen(red);
    abs5->Operation();

    delete black;
    delete red;
    delete abs;
    delete abs1;
    delete abs2;
    delete abs3;
    delete abs4;
    delete abs5;


    return 0;
}
