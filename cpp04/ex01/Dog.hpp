
#ifndef CLASS_Dog
# define CLASS_Dog

#include	"Animal.hpp"

class Dog : public Animal
{
	private:
		Brain* _Brain;
	public:
		void				makeSound();
		Dog();
		Dog(const Dog &a);
		~Dog();
		Dog &operator= (const Dog& a);
		void	add_idea(std::string idea);
		void	print_ideas( void );
};

#endif
