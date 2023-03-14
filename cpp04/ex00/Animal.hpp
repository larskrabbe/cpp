
#ifndef CLASS_Animal
# define CLASS_Animal

#include	<string>

class Animal
{
	public:
	protected:
		std::string			sound;
		std::string			type;
	public:
		virtual void				makeSound();
		Animal();
		Animal(const Animal &a);
		~Animal();
		Animal &operator= (const Animal& a);
};

#endif

