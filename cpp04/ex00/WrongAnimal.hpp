
#ifndef CLASS_WrongAnimal
# define CLASS_WrongAnimal

#include	<string>

class WrongAnimal
{
	public:
	protected:
		std::string			type;
	public:
		void				makeSound();
		WrongAnimal();
		WrongAnimal(const WrongAnimal &a);
		~WrongAnimal();
		WrongAnimal &operator= (const WrongAnimal& a);
};

#endif

