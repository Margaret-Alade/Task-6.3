#include"equal_triangle.h"

Equal_triangle::Equal_triangle() {
	A = 60; B = A; C = A;
	name = "Равносторонний треугольник";
}

Equal_triangle::Equal_triangle(int b) {
	this->b = b;
	a = b; c = b;
	A = 60; B = A; C = A;
	name = "Равносторонний треугольник";
}