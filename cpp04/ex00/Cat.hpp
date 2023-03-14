
#ifndef CLASS_Cat
# define CLASS_Cat

#include	"Animal.hpp"

class Cat : public Animal
{
	private:

	public:
		void				makeSound();
		Cat();
		Cat(const Cat &a);
		~Cat();
		Cat &operator= (const Cat& a);
};

#endif
