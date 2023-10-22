#include "figure.h"

Figure::Figure() {
	name = "Фигура";
}
void Figure::print_info() {
	std::cout << name << ": \n";
}