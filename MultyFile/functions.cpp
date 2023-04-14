#include "functions.h"
#include <iostream>

extern const double _PI = 3.14;

double sum(double num1, double num2) {
	return num1 + num2;
}

void hi(){
	std::cout << "Hello World!\n";
}

void show_pi() {
	std::cout << "Число Pi=" << _PI << std::endl;

}

