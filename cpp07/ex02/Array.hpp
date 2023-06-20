
#ifndef CLASS_Array
# define CLASS_Array


template<class type>
class Array
{
	private:
		type* 		_array;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n	);
		Array(const Array &a);
		~Array();
		Array &operator= (const Array& a);
};


#endif
