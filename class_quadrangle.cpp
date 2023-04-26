#include "class_figure.h"
#include "class_triangle.h"
#include "class_quadrangle.h"

Quadrangle:: Quadrangle()
    {
        name = "Четырёхугольник";
        length_side_a = 10;
        length_side_d = 20;
        length_side_c = 30;
        length_side_d = 40;
        value_angle_A = 50;
        value_angle_B = 60;
        value_angle_C = 70;
        value_angle_D = 80;
    }

Quadrangle:: Quadrangle(int length_side_d, int value_angle_D)
    {
        this->length_side_d = length_side_d;
        this->value_angle_D = value_angle_D;
    }

int Quadrangle::get_lenght_side_d()
    {
        return length_side_d;
    };

int  Quadrangle::get_value_angle_D()
    {
        return value_angle_D;
    };

bool  Quadrangle::check() {
        if (((length_side_a == length_side_b) && (length_side_b == length_side_c) && (length_side_c == length_side_d) && (length_side_a == length_side_d)) &&
            ((value_angle_A == value_angle_B) && (value_angle_B == value_angle_C) && (value_angle_C == value_angle_D) && (value_angle_A == value_angle_D)))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    };

void  Quadrangle::print_info() {
    std::cout << get_name() << std::endl;
    if (check() == 1) {
        std::cout << "Правильная" << std::endl;
    }
    else {
        std::cout << "Неправильная" << std::endl;
    }
    std::cout << "Количество сторон: " << get_sides_count() << std::endl;
    std::cout << "Стороны: " << " a = " << get_lenght_side_a() << " b = " << get_lenght_side_b() << " c = " << get_lenght_side_c() <<
        " d = " << get_lenght_side_d() << std::endl;
    std::cout << "Углы: " << " А = " << get_value_angle_A() << " B = " << get_value_angle_B() << " C = " << get_value_angle_C() <<
        " D = " << get_value_angle_D() << std::endl << std::endl;
};