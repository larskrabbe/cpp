#include <iostream>
#include <string>
#include "whatever.hpp"


int main()
{
	std::string a("helloa");
	std::string b("hellob");
	std::cout << "max : " << max(a,b) << std::endl;
	std::cout << "min : " << min(a,b) << std::endl;
	std::cout << "swap : before " << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	swap(a,b);
	std::cout << "swap : after " << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
}