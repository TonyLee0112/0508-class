#include "fruit.h"
#include "store.h"
float fruit::show() { // ��ǰ�� �ִ� ����
	return price * many;
}
float store::total() { // ������ �ִ� ����
	float x = apple.show();
	x += pear.show();
	x += peach.show();
	x += mango.show();
	return x;
}
