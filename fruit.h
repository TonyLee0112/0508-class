#pragma once
#include <iostream>
using namespace std;
class fruit {
public:
	// Constructor
	fruit() : price(200), many(2) {} // default values

	fruit(float p, float n) {
		price = p; many = n;
	}

	// Member data
	int many;
	float price;

	// Member function
	float show();
	void show_all() {
		cout << "Price : " << price << endl;
		cout << "many : " << many << endl;
	}
};