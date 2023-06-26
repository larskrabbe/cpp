
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
		copy[i] = target[i];
	}
	return (copy);
}

template<typename type>
type&	Array<type>::operator[] (int n) const
{
	if (n < 0 || n >= (int)this->_size)
		throw(Array<type>::out_of_range());
	return _array[n];
}

template<typename type>
Array<type>& Array<type>::operator= (const Array<type>& a)
{
	(void)a;
	if (_size == 0)
		delete[] _array;
	_size = a._size;
	_array = copy_array(a._array, a._size);
	return (*(this));
}