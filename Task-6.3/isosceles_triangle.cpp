#include "isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle() {
	name = "�������������� �����������";
}

Isosceles_triangle::Isosceles_triangle (int a, int b, int A, int B) {
	this->a = a; this->b = b;
	this->A = A; this->B = B;
	c = a;
	C = B;
	name = "�������������� �����������";
}



