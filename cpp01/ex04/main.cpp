
#include <iostream>
#include <fstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

void	replace(std::string& buffer ,std::string old_str, std::string new_str)
{
	size_t pos = buffer.find(old_str);
	while(pos != (size_t) -1)
	{
		buffer.erase(pos, old_str.length());
		buffer.insert(pos,new_str);
		pos += new_str.length();
		pos = buffer.find(old_str,pos);
	}
}

int main(int argc, char* argv[])
{
	struct stat info;
	if (argc != 4)
	{
		std::cout << "invalid Input" << std::endl;
		return (0);
	}
	if (stat(argv[1],&info) != 0 || !S_ISREG(info.st_mode))
	{
		std::cout << "invalid File" << std::endl;
		return (0);
	}
	std::string file;
	std::string buffer;
	file = argv[1];
	std::ifstream input(file, std::fstream::in);
	while (input.peek () > 0)
		buffer += input.get();
	replace(buffer ,argv[2], argv[3]);
	std::ofstream output(file + ".replace");
	output << buffer;
}