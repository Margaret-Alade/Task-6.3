#include "triangle.h"

Triangle::Triangle() {
	name = "�����������";
	a = 0; b = 0; c = 0;
	A = 0; B = 0; C = 0;
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
	this->a = a; this->b = b; this->c = c;
	this->A = A; this->B = B; this->C = C;
	name = "�����������";
}

void Triangle::print_info() {
	std::cout << name << ": \n";
	std::cout << "�������: a = " << a << " b = " << b << " c = " << c << '\n';
	std::cout << "����: A = " << A << " B = " << B << " C = " << C << '\n';
}
