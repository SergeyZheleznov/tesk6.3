#include "class_figure.h"
Figure::Figure() { sides_count = 0; name = "������";}

Figure:: Figure (int sides_count, std::string name)
{
    this->sides_count = sides_count;
    this->name = name;
}
 
std::string Figure::get_name() { return name;};
int Figure::get_sides_count() { return sides_count;};
bool Figure::check() { return 1;};
void Figure:: print_info() {
        std::cout << get_name() << std::endl;
        if (check() == 1) {
            std::cout << "����������" << std::endl;
        }
        else {
            std::cout << "������������" << std::endl;
        }
        std::cout << "���������� ������: " << get_sides_count() << std::endl << std::endl;
    };