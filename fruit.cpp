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
