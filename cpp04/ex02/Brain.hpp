
#ifndef CLASS_Brain
# define CLASS_Brain

#include	<string>

class Brain
{
	private:
		std::string	Ideas[100];
		size_t		last_idea;
		size_t		total_idea;
	public:
		Brain();
		Brain(const Brain &a);
		~Brain();
		Brain &operator= (const Brain& a);
		void	add_idea(std::string idea);
		void	print_ideas( void );
};

#endif
