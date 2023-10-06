#ifndef BTC_HPP
#define BTC_HPP

#include <map>
#include <string>
#include <iostream>
#include <exception>
#include <fstream>
typedef struct btc_data
{
    int days;
    int month;
    int year;
} t_btcdate;


class BTC
{
private:

	std::map<t_btcdate,float> data;

public:
	void 	btc_split( std::ifstream& inFile);
	BTC(/* args */);
	BTC(std::string str);
	~BTC();
	BTC(const BTC& copy);
	BTC& operator=(const BTC& copy);
	struct Exception : 				public std::exception{
		virtual const std::string message() const;};
	struct InvalidFile :	public BTC::Exception{
		const std::string message() const;};
	struct b :	public BTC::Exception{
		const std::string message() const;};
	struct c :	public BTC::Exception{
		const std::string message() const;};
	struct d :	public BTC::Exception{
		const std::string message() const;};
};

#endif // BTC_HPP