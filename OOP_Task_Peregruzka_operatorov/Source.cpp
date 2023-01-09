#include "MyClass.h"
#include<iostream>
#include<cstring>

int main() {
	MyClass a ("student");
	MyClass b("figa");
	
	std::cout << a+b << ' ';
	std::cout << a - b << ' ';
	std::cout << a * b << ' ';
	std::cout << a / b << ' ';
	std::cout << !a << ' ';
	int z = a += b;
	std::cout << z << ' ';
	bool res = a == b;
	std::cout << res << ' ';

	return 0;
}