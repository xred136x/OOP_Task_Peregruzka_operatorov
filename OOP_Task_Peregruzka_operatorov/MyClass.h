#pragma once
#include<iostream>
#include<cstring>
class MyClass
{
	std::string _name;

public:
	MyClass();
	MyClass(const std::string& name);

	const std::string& getName()const;

	void setName(const std::string& name);

	int operator+(const MyClass& other);
	int operator-(const MyClass& other);
	int operator*(const MyClass& other);
	float operator/(const MyClass& other);
	int operator!();
	bool operator==(const MyClass& other);
	int operator+=(const MyClass& other);
	friend std::ostream& operator<<(std::ostream& os, MyClass& c) {
		os << c.getName();
		return os;
	}
		
	
};

