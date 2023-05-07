#include <iostream>
#include "fruit.h"
#include "store.h"
using namespace std;

int main() {
	store A, B;
	A = store(5, 4, 3, 6, 600, 300, 200, 500);
	B = store(3, 4, 5, 1, 100, 200, 300, 700);
	cout << A.total() << endl;
	cout << B.total() << endl;
	cout << "Price of Mango in the A store is " << A.mango.price << endl;
	return 666;
}
