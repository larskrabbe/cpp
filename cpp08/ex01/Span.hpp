#ifndef CLASS_SPAN
#define CLASS_SPAN

#include    <vector>

class Span
{
private:
	std::vector<int> nums;
	unsigned int max;
public:
	void    addNumber(int num);
	template<typename type>
	void    addNumber(type start,type end)
	{
		for (;start != end; ++start)
		{
			addNumber(*start);
		}
	}
	int					get_max() const;
	std::vector<int>	get_data() const;
	int					longestSpan();
	int					shortestSpan();
	Span();
	Span(unsigned int new_max);
	Span(const Span& copy);
	~Span();
	Span& operator= (const Span& copy);
	struct max_amount_reached : public std::exception
		{const char* what() const throw ()
			{return ("the max amount is reached");}};
	struct not_enougth_nums : public std::exception
		{const char* what() const throw ()
			{return ("need more Data");}};
};

#endif