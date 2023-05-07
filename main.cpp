#include <iostream>
#include "fruit.h"
#include "store.h"
using namespace std;

int main() {
	store A, B, C;
	A = store(5, 4, 3, 6, 600, 300, 200, 500);
	B = store(3, 4, 5, 1, 100, 200, 300, 700);
	C = A + B;
	cout << A.total() << " " << B.total()  << endl;
	cout << C.total() << endl;

	return 666;
}