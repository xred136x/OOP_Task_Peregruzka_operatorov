#include "MyClass.h"
MyClass::MyClass() {
	_name = "DefaultName";
}
MyClass::MyClass(const std::string& name) : _name(name) {}

const std::string& MyClass::getName() const {
	return _name;
}
void MyClass::setName(const std::string& name) {
	_name = name;
}
int MyClass::operator+(const MyClass& other) {	
	return _name.size() + other.getName().size();
}
int MyClass::operator-(const MyClass& other) {
		return _name.size() - other.getName().size();
}
int MyClass::operator*(const MyClass& other) {
	return _name.size() * other.getName().size();
}
float MyClass::operator/(const MyClass& other) {
	return _name.size() / other.getName().size();
}
int MyClass::operator!() {
	return _name.size() * (-1);
}
bool MyClass::operator==(const MyClass& other) {
	return _name.size() == other.getName().size();
}
int MyClass::operator+=(const MyClass& other) {
	return _name.size() + other.getName().size();
}

