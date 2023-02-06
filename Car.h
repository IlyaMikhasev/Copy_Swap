#pragma once
#include <iostream>
#include <algorithm>
class Car
{
public:
	explicit Car(const std::string& color, const std::string& brand);
	Car() {}
	Car& operator= (Car&& obj) noexcept;
	const std::string& GetColor() const;
	const std::string& GetBrand() const;
	void SetColor(const std::string& color);
	void SetBrand(const std::string& brand);
private:
	std::string _color;
	std::string _brand;
};

