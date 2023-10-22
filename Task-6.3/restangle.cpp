#include "restangle.h"

Restangle::Restangle() {
	A = 90; B = A; C = A; D = A;
	name = "Прямоугольник";
}

Restangle::Restangle (int a, int b) {
	this->a = a; this->b = b;
	c = a; d = b;
	A = 90; B = A; C = A; D = A;
	name = "Прямоугольник";
}