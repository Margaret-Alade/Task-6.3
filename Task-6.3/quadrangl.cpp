#include "quadrangl.h"

Quadrangl::Quadrangl() {
	name = "Четырёхугольник";
	a = 0; b = 0; c = 0; d = 0;
	A = 0; B = 0; C = 0; D = 0;
}

Quadrangl::Quadrangl(int a, int b, int c, int d, int A, int B, int C, int D) {
	this->a = a; this->b = b; this->c = c; this->d = d;
	this->A = A; this->B = B; this->C = C; this->D = D;
	name = "Четырёхугольник";
}

void Quadrangl::print_info() {
	std::cout << name << ": \n";
	std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << '\n';
	std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << '\n';
}
