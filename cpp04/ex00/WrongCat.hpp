
#ifndef CLASS_WrongCat
# define CLASS_WrongCat

#include	"WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		void				makeSound();
		WrongCat();
		WrongCat(const WrongCat &a);
		~WrongCat();
		WrongCat &operator= (const WrongCat& a);
};

#endif
