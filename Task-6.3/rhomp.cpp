#include "rhomb.h"

Rhomb::Rhomb() {
	name = "����";
}

Rhomb::Rhomb (int a, int A, int B) {
	this->a = a;
	this->A = A; this->B = B;
	c = a; d = a; b = a;
	C = A; D = B;
	name = "����";
}