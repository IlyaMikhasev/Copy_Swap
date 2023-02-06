#include "Car.h"
Car::Car(const std::string& color, const std::string& brand):_color(color),_brand(brand){}

Car& Car::operator=(Car&& obj) noexcept{
	std::swap(_brand, obj._brand);
	std::swap(_color, obj._color);
	return *this;
}

const std::string& Car::GetColor() const{
	return _color;
}

const std::string& Car::GetBrand() const{
	return _brand;
}

void Car::SetColor(const std::string& color){
	_color = color;
}

void Car::SetBrand(const std::string& brand){
	_brand = brand;
}

