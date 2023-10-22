#include "parallelogram.h"

Parallelogram::Parallelogram() {
	name = "Параллелограм";
}

Parallelogram::Parallelogram(int a, int b, int A, int B) {
	this->a = a; this->b = b;
	this->A = A; this->B = B;
	c = a; d = b;
	C = A; D = B;
	name = "Параллелограм";
}

