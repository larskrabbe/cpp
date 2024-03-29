
#ifndef CLASS_Cat
# define CLASS_Cat

#include	"Animal.hpp"

class Cat : public Animal
{
	private:
		Brain* _Brain;
	public:
		void				makeSound();
		Cat();
		Cat(const Cat &a);
		~Cat();
		Cat &operator= (const Cat& a);
		void	add_idea(std::string idea);
		void	print_ideas( void );
};

#endif
