
#ifndef CLASS_WrongAnimal
# define CLASS_WrongAnimal

#include	<string>

class WrongAnimal
{
	public:
	protected:
		std::string			type;
	public:
		virtual void				makeSound();
		WrongAnimal();
		WrongAnimal(const WrongAnimal &a);
		virtual ~WrongAnimal();
		WrongAnimal &operator= (const WrongAnimal& a);
};

#endif

