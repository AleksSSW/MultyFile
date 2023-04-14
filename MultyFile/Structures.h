#pragma once
#include <iostream>
#include <string>

struct person {
	std::string name = "noname";
	int age = 0;
	std::string job = "empty";
	int salary = 0;
};

void print_person(const person& P);
person input_person();
