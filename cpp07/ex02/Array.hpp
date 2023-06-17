

#ifndef Class_Array
# define Class_Array


template<typename type>
class Array
{
private:
	type* Array;
	unsigned int size;
public:
	Array(/* args */);
	Array(int n;
	~Array();
	unsigned int size ( void )const;
	type operator[]( unsigned int );

};
	struct error_range: public std::exception {
			const char* what(void) const throw() {
				return ("Out of Range");}};

Array::Array(/* args */): Array(NULL),size(0)
{
}

Array::Array(unsigned int n):Array(NULL), size(n)
{
	Array = new type[n];
}


Array::~Array()
{
	if (Array != NULL)
		delete[] Array;
}

unsigned int  Array::size()
{
	return(size);
}
type& Array::operator=( const Array& copy )
{
			delete [] this->_array;
			Array = NULL;
			size = copy.size();
			if (size > 0)
			{
				Array = new Type[size];
				for (size_t i = 0; i < size; i++)
					Array[i] = copy[i];
			}
			return *this;
}

type& Array::operator[]( unsigned int n )
{
	if (n < size)
		return (Array[n]);
	throw(error_range);
}
#endif