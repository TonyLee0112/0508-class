#pragma once
#include "fruit.h"
class store {
public:
	store() {};
	store(int a, int b, int c, int d, float e, float f, float g, float h) {
		apple = fruit(e, a);
		pear = fruit(f, b);
		peach = fruit(g, c);
		mango = fruit(h, d);
	}
	fruit apple, pear, peach, mango;
	float total();
	store operator+(store&);
	void operator*=(int k);
};
