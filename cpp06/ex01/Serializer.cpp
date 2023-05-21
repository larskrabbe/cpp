

#include	"Serializer.hpp"


uintptr_t	Serializer::serialize(Data* ptr)
{
	return(static_cast<uintptr_t>((size_t)ptr)); 
}

Data* 		Serializer::deserialize(uintptr_t raw)
{
	return(static_cast<Data*>((void*)raw));
}


Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}