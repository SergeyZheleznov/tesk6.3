#include "class_figure.h"
#include "class_triangle.h"
#include "class_quadrangle.h"
#include "class_parallelogram.h"
#include "class_rectangle1.h"

Rectangle1::Rectangle1()
{
    name = "Прямоугольник";
    length_side_a = length_side_c = 10;
    length_side_b = length_side_d = 20;
    value_angle_A = value_angle_C = value_angle_B = value_angle_D = 90;
};