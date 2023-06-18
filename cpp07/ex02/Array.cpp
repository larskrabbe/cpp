#include	"Array.hpp"


template<typename type>
type* copy_array(type* target, unsigned int len)
{
	type* copy = 0;
	if (target == 0 || len == 0)
		return(copy);
	else
		copy = new type[len];
	for ( unsigned int i = 0; i < len; i++)
	{
		target[i] = copy[i];
	}
	return (copy);
}

template<typename type>
Array<type>::Array()
{
	
}

template<typename type>
Array<type>::Array(const Array &a)
{
	
}

template<typename type>
Array<type>::~Array()
{
	
}

template<typename type>
Array<type>& Array<type>::operator= (const Array<type>& a)
{
	return (*(this));
}
