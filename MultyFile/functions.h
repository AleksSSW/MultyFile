#pragma once
#include <iostream>

double sum(double num1, double num2);

void hi();

template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

void show_pi();


