#ifndef CLASS_MUTANTSTACK
# define CLASS_MUTANTSTACK

#include	<stack>
#include	<deque>

template<typename type, typename container = std::deque<type> >
class MutantStack : public  std::stack<type, container>
{
public:
	MutantStack(/* args */) : std::stack<type,container>(){};
	MutantStack(const MutantStack& src) : std::stack<type,container>(src){};
	virtual	~MutantStack(void){};
	MutantStack& operator=(const MutantStack& src)
	{
        if (this == &src)
            return (*this);
        std::stack<type,container>::operator=(src);
        return (*this);	
	};
	
	
	typedef typename container::iterator			iterator;
	iterator	begin()
	{
		return (this->c.begin());
	};
	iterator	end()
	{
		return (this->c.end());
	};
	
	typedef typename container::reverse_iterator	reverse_iterator;
	reverse_iterator	rbegin()
	{
		return (this->c.rbegin());
	};
	reverse_iterator	rend()
	{
		return (this->c.rend());
	};
};

#endif