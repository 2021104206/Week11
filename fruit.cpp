#include <iostream>
#include "fruit.h"
using namespace std; 
float fruit::show() {
	return price * many;
}
void fruit::show_all() {
	cout << "Price of the fruit: " << price << "\nNumber of the fruit: " << many << "\nDay of the fruit: " << day << endl;
}
