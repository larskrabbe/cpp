#include    "Span.hpp"


#include	<algorithm>
int	Span::shortestSpan()
{
	if (this->nums.size() < 2)
		throw(Span::not_enougth_nums());
	std::sort(this->nums.begin(),this->nums.end());
	int span = std::abs (nums[1] - nums[0]);
	for (size_t i = 1; i < this->nums.size(); i++)
	{
		int new_span = nums[i] - nums[i - 1];
		if ( span > new_span)
			span = new_span;
	}
	return (span);
	
}
int	Span::longestSpan()
{
	if (this->nums.size() < 2)
		throw(Span::not_enougth_nums());
	return (*std::max_element(this->nums.begin(),this->nums.end()) - *std::min_element(this->nums.begin(),this->nums.end()));
}

void	Span::addNumber(int num)
{
	if (this->nums.size() >= max)
		throw(Span::max_amount_reached());
	this->nums.push_back(num);
	// std::cout << num << std::endl;
}

std::vector<int> Span::get_data() const
{
	return (this->nums);
}


int Span::get_max() const
{
	return (this->max);
}


Span::Span(/* args */):max(0)
{
}

Span::Span(unsigned new_max):max(new_max)
{
}


Span::Span(const Span& copy)
{
	this->max = copy.get_max();
	this->nums = copy.get_data();
}

Span::~Span()
{
}

Span&  Span::operator= (const Span& copy)
{
	this->max = copy.get_max();
	this->nums = copy.get_data();
	return(*this);
}