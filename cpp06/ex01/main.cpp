
// #include	"Data.hpp"
#include	"Serializer.hpp"
#include	<iostream>

int main()
{
	Data d;
	d.str.append("hello world");
	size_t a = Serializer::serialize(&d);
	std::cout << a << std::endl;
	std::cout << (size_t)&d << std::endl;
	Data* p = Serializer::deserialize(a);
	std::cout << p->str << std::endl;
}