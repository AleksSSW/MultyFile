#include "Structures.h"
#include <iostream>

void print_person(const person& P){
	std::cout << "���: " << P.name << std::endl;
	std::cout << "�������: " << P.age << std::endl;
	std::cout << "���������: " << P.job << std::endl;
	std::cout << "��������: " << P.salary << std::endl;
}

person input_person(){
	person tmp;
	std::cout << "������� ���:\n";
	std::getline(std::cin, tmp.name);
	std::cout << "������� �������:\n";
	std::cin >> tmp.age;
	std::cin.ignore();
	std::cout << "������� ���������:\n";
	std::getline(std::cin, tmp.job);
	std::cout << "������� ��������:\n";
	std::cin >> tmp.salary;
	std::cin.ignore();
	return tmp;
}
