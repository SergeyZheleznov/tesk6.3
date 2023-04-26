#include "class_figure.h"
#include "class_triangle.h"
#include "class_right_triangle.h"

Right_triangle::Right_triangle()
{
    name = "Прямоугольный треугольник";
    value_angle_C = 90;
};

Right_triangle::Right_triangle(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c,
    int value_angle_A, int value_angle_B, int value_angle_C)
{
    this->length_side_a = length_side_a;
    this->length_side_b = length_side_b;
    this->length_side_c = length_side_c;
    this->value_angle_A = value_angle_A;
    this->value_angle_B = value_angle_B;
    this->value_angle_C = value_angle_C;
};