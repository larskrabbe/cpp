
#ifndef CLASS_Animal
# define CLASS_Animal

#include	<string>

class Animal
{
	public:
	protected:
		std::string			type;
	public:
		virtual void				makeSound();
		Animal();
		Animal(const Animal &a);
		virtual ~Animal();
		Animal &operator= (const Animal& a);
};

#endif

