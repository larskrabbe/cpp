


#include <iostream>
#include <string>
#include "iter.hpp"

template <typename Type>
void print(Type& a)
{
	std::cout << a << " " <<std::endl;
}


void bbq(std::string& str)
{
	str = "burned " + str;
}

void digit_to_ascii(int& t)
{
	if (t < 9 && t > 0)
		t = t + '0';
}
int main(void)
{
	//int 
	{
		int array[] = {1,2,3,4,5};
		iter(array,4,&digit_to_ascii);
		iter(array,5,&print);
	}

	//string
	{
		std::string array[] = {"apple","banana","strawberrys","Watermelon"};
		iter(array,4,&print);
		iter(array,4,&bbq);
		iter(array,4,&print);
	}
	return 0;
}