
#include	<string>


#ifndef CLASS_ScalarConverter
# define CLASS_ScalarConverter

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &a);
		~ScalarConverter();
		ScalarConverter &operator= (const ScalarConverter& a);
		void static convert_to_d(std::string arg);
	public:
		static int		errors;
		static char		_c;
		static int		_i;
		static float	_f;
		static double	_d;
		void			static convert(std::string arg);};

#endif

/*

#include	"ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	
}

ScalarConverter::ScalarConverter(const ScalarConverter &a)
{
	
}

ScalarConverter::~ScalarConverter()
{
	
}

ScalarConverter& ScalarConverter::operator= (const ScalarConverter& a)
{
	
	return (*(this));
}
*/
