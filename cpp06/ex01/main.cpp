
// #include	"Data.hpp"
#include	"Serializer.hpp"
#include	<iostream>

int main()
{
	Data d;
	d.str.append("hello world");
	void* ptr = Serializer::serialize(&d);
	std::cout << ptr << std::endl;
	Data* data = Serializer::deserialize(ptr);
	std::cout << &d << std::endl;
	std::cout << p->str << std::endl;
}