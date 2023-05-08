#include "fruit.h"
#include "store.h"
float fruit::show() { // 물품의 최대 매출
	return price * many;
}
float store::total() { // 가게의 최대 매출
	float x = apple.show();
	x += pear.show();
	x += peach.show();
	x += mango.show();
	return x;
}

// operator overloading
store store::operator+(store& b) {
	store c;
	c.apple.many = apple.many + b.apple.many;
	c.pear.many = pear.many + b.pear.many;
	c.peach.many = peach.many + b.peach.many;
	if (apple.price < b.apple.price) c.apple.price = apple.price; // A와 B의 사과 가격 중 더 작은 것
	else c.apple.price = b.apple.price;
	if (pear.price < b.pear.price) c.pear.price = pear.price;
	else c.pear.price = b.pear.price;
	if (peach.price < b.peach.price) c.peach.price = peach.price;
	else c.peach.price = b.peach.price;
	return c;

}

store store::operator*=(int k) {
	store c;
	c.apple.many = k * apple.many;
	c.pear.many = k * pear.many;
	c.peach.many = k * peach.many;
	c.mango.many = k * mango.many;

	return c;
}
