#include <iostream>
#include <string>
#include "whatever.hpp"


int main()
{
	{
		int small = -1;
		int big = 7;
		std::cout << "max : " << max(small,big) << std::endl;
		std::cout << "min : " << min(small,big) << std::endl;
	}
	std::string a("hello a");
	std::string b("hello b");
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