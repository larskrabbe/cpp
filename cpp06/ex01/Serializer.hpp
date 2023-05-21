
#include	"Data.hpp"

#ifndef SERIAL_CLASS
# define SERIAL_CLASS

struct Data;
class Serializer
{
private:
	Serializer();
	~Serializer();
public:
	static Data* 		deserialize(uintptr_t raw);
	static uintptr_t	serialize(Data* ptr);
};


#endif