#include	"Brain.hpp"
#include	<iostream>

Brain::Brain():last_idea(0), total_idea(0)
{
	std::cout << "construct Brain" << std::endl;
}

Brain::Brain(const Brain &a):last_idea(a.last_idea), total_idea(a.total_idea)
{
	std::cout << "copy construct Brain" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		this->Ideas[i] = a.Ideas[i];
	}
	
}

Brain::~Brain()
{
	std::cout << "deconstruct Brain" << std::endl;
}

Brain& Brain::operator= (const Brain& a)
{
	this->last_idea = a.last_idea;
	this->total_idea = a.total_idea;
	for (size_t i = 0; i < 100; i++)
	{
		this->Ideas[i] = a.Ideas[i];
	}
	return (*(this));
}

void	Brain::add_idea( std::string idea )
{
	this->Ideas[last_idea] = idea;
	this->last_idea++;
	if (total_idea < 100)
		this->total_idea++;
	if (last_idea >= 100)
		last_idea = 0;
}

void	Brain::print_ideas( void )
{
	for	(size_t i = 0; i < this->total_idea; i++)
	{
		std::cout << this->Ideas[i] << std::endl;
	}
}