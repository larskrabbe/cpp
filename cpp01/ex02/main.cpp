#include	<string>
#include	<iostream>

int	main()
{
	std::string str("HI THIS IS BRAIN");

	std::string* stringPTR = &str;
	std::string& stringREF = str; 

	std::cout << " memory address of string    => " << &str << std::endl;
	std::cout << " memory address of stringPTR => " << &stringPTR << std::endl;
	std::cout << " memory address of stringREF => " << &stringREF << std::endl;
	std::cout << " value of string    => " << str << std::endl;
	std::cout << " value of stringPTR => " << *stringPTR << std::endl;
	std::cout << " value of stringREF => " << stringREF << std::endl;
}