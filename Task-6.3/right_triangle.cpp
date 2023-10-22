#include "right_triangle.h"

Right_triangle::Right_triangle() {
	C = 90;
	name = "Прямоугольный треугольник";
}

Right_triangle::Right_triangle (int a, int b, int c, int A, int B) {
	this->a = a; this->b = b; this->c = c;
	this->A = A; this->B = B;
	C = 90;
	name = "Прямоугольный треугольник";
}



