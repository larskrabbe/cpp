
#include	"Data.hpp"

#ifndef SERIAL_CLASS
# define SERIAL_CLASS

struct Data;
class Serializer
{
private:
	Serializer();
	~Serializer();
	static void*		serialize(Data* ptr);
public:
	static Data* 		deserialize(void* raw);
};


#endif