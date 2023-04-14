#include <iostream>
#include "functions.h"
#include "Structures.h"
#include "Data.h"




int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;
	//Библиотека с функциями
	/*std::cout << "Введите 2 числа:\n";
	std::cin >> n >> m;
	std::cout << n << "+" << m << "=" << sum(n, m) << std::endl;
	hi();
	const int size = 5;
	int arr[size]{ 10,20,30,40,50 };
	print_arr(arr, size);*/
	//Библиотека со структурой и ф-циями для работы с ней
	/*person p1{
	"Tom Smith",
	26,
	"Programmer",
	80000
	};
	print_person(p1);

	person p2 = input_person();
	print_person(p2);*/


	_A = 15;
	std::cout << "A=" << _A << std::endl;
	std::cout << "Pi=" << _PI << std::endl;
	std::cout << "E=" << _E << std::endl;
	print_arr(_ARR, _ARR_SIZE);
	show_pi();



	return 0;
}