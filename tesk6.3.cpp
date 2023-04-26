#include "class_figure.h"
#include "class_triangle.h"
#include "class_right_triangle.h"
#include "class_isosceles_triangle.h"
#include "class_equilateral_triangle.h"
#include "class_quadrangle.h"
#include "class_parallelogram.h"
#include "class_rectangle1.h"
#include "rhombus.h"
#include "square.h"
#include <iostream>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::system("chcp 1251");

    Figure f;
    f.print_info();

    Triangle tr;
    tr.print_info();

    Right_triangle rt;
    rt.print_info();

    Isosceles_triangle itr;
    itr.print_info();

    Equilateral_triangle etr;
    etr.print_info();

    Quadrangle qv;
    qv.print_info();

    Rectangle1 rct;
    rct.print_info();

    Square sq;
    sq.print_info();

    Parallelogram prl;
    prl.print_info();

    Rhombus rh;
    rh.print_info();
}

