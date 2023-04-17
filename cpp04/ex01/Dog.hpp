
#ifndef CLASS_Dog
# define CLASS_Dog

#include	"Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		void				makeSound();
		Dog();
		Dog(const Dog &a);
		~Dog();
		Dog &operator= (const Dog& a);
};

#endif
