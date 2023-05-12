
#ifndef CLASS_Dog
# define CLASS_Dog

#include	"AAnimal.hpp"

class Dog : public AAnimal
{
	private:
		Brain* _Brain;
	public:
		void				makeSound() const;
		Dog();
		Dog(const Dog &a);
		~Dog();
		Dog &operator= (const Dog& a);
		void	add_idea(std::string idea);
		void	print_ideas( void );
};

#endif
