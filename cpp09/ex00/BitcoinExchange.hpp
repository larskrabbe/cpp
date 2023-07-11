
#ifndef CLASS_BitcoinExchange
# define CLASS_BitcoinExchange

#include <vector>

class BitcoinExchange 
{
	private:
		std::vector<int,char> v;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &a);
		~BitcoinExchange();
		BitcoinExchange &operator= (const BitcoinExchange& a);
};

#endif

/*

#include	"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &a)
{
	
}

BitcoinExchange::~BitcoinExchange()
{
	
}

BitcoinExchange& BitcoinExchange::operator= (const BitcoinExchange& a)
{
	
	return (*(this));
}
*/