
#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char *argv[])
{
	std::string str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
		{
			str = argv[i];
			for(std::string::iterator it=str.begin(); it!=str.end(); ++it)
				std::cout << (char)toupper(*it);
		}
	std::cout  << std::endl;
	return (0);
}