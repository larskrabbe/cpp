
#include <iostream>


int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		std::cout << "invalid Input" << std::endl;
		return (0);
	}
	std::fstream stream(argv[1], ios_base::in);
}