#pragma once
#include<iostream>
#include<string>

class Sheep
{
private:
	std::string its_my_name = "Noname";
	unsigned short its_my_year = 2000;
public:
	Sheep(std::string  Name = "Noname", unsigned short Year = 2000);
	~Sheep();
	inline const std::string& Get_name() const { return its_my_name; }
	inline const unsigned short& Get_year() const { return its_my_year; }
	bool Set_name(std::string);
	bool Set_year(unsigned short);
	bool Input_year();
	bool Input_name();
	friend std::ostream& operator<<(std::ostream&, const Sheep&);
};

