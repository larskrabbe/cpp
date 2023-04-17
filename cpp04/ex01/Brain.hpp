
#ifndef CLASS_Brain
# define CLASS_Brain

#include	<string>

class Brain
{
	private:
		std::string Ideas[100];
	public:
		Brain();
		Brain(const Brain &a);
		~Brain();
		Brain &operator= (const Brain& a);
};

#endif

/*

#include	"Brain.hpp"

Brain::Brain()
{
	
}

Brain::Brain(const Brain &a)
{
	
}

Brain::~Brain()
{
	
}

Brain& Brain::operator= (const Brain& a)
{
	
	return (*(this));
}
*/