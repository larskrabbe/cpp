
#ifndef CLASS_AAnimal
# define CLASS_AAnimal

#include	<string>
#include	"Brain.hpp"
class AAnimal
{
	protected:
		std::string			type;
		AAnimal();
		AAnimal(const AAnimal &a);
	public:
		virtual void				makeSound();
		virtual ~AAnimal();
		AAnimal &operator= (const AAnimal& a);
};

#endif

