#include	<string>
#include	"utiels.h"


std::string string_cut(std::string& str, std::string end)
{
	int pos = str.find_first_of (end);
	if (pos == 0)
		throw(std::string("ERROR"));
	std::string tmp = str.substr(pos);
	str.erase(0,pos);
	return(tmp);
}

int	stoi_with_range(std::string str,int min, int max)
{
	int tmp = 0;

	tmp = std::stoi(str,NULL,10);
	if (tmp < min || tmp > max)
		throw("number not in range");
	return(tmp);
}

btc_data* btc_split(std::string time_string)
{
	btc_data* data = 	new btc_data;
		data->time[DAY] =  stoi_with_range( string_cut(time_string,"|"), 0, 31);
		data->time[MONTH] =  stoi_with_range( string_cut(time_string,"|"), 0, 12);
		data->time[YEAR] =  stoi_with_range( string_cut(time_string,"|"), -20000, 20000);
		data->btc_value = std::stod(time_string);
		if (data->btc_value < 0 || data->btc_value > 1000)
	return (data);
}