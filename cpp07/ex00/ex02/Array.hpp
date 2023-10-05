
#include	<iostream>
#include	<exception>

#ifndef CLASS_Array
# define CLASS_Array

template<typename type>
type* copy_array(type* target, unsigned int len);
template<typename type>
class Array
{
	private:
		type* 		_array;
		unsigned int _size;
	public:
		Array():_array(0),_size(0)
			{}
		Array(unsigned int n):_array(0),_size(n)
			{_array = new type[n];}
		Array(const Array &copy):_array(copy_array(copy._array,copy._size)),_size(copy._size)
			{}
		~Array()
			{delete[] (_array);}
		unsigned int	size()
			{return (_size);}
		Array&	operator= (const Array& a);
		type&	operator[] (int n) const;
	struct outside_the_range :	public std::exception{
		virtual const char* what() const throw() { return "Index is outside the Array";}};
};

#include	"Array.tpp"

#endif
