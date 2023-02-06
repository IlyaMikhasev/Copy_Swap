#include <iostream>
#include "Car.h"
int main() {
	setlocale(LC_ALL, "Russian");
	Car c1("white", "Mazda");
	std::cout << "Car 1 color: " << c1.GetColor() << "\tBrand: " << c1.GetBrand() << '\n';
	Car c2;
	Car c3;
	c2 = Car("blue", "BMV");
	std::cout << "Car 2 color: " << c2.GetColor() << "\tBrand: " << c2.GetBrand() << '\n';
	c3 = std::move(c2);//copy-swap с пустым обьектом опасен обнулением данных и сопутствующими ошибками
	std::cout << "Car 3 copy-swap car 2\n";
	std::cout << "Car 2 color: " << c2.GetColor() << "\tBrand: " << c2.GetBrand() << '\n';
	std::cout << "Car 3 color: " << c3.GetColor() << "\tBrand: " << c3.GetBrand() << '\n';
	return 0;
}