#ifndef CLASS_MUTANTSTACK
# define CLASS_MUTANTSTACK

// #include	<stack>
#include	<deque>

template<typename type, typename container = std::deque<type> >
class MutantStack : public  std::stack<type, container>
{
public:
	MutantStack(/* args */) : std::stack<type,container>(){};
	MutantStack(const MutantStack& src) : std::stack<type,container>(src){};
	~MutantStack();
	MutantStack& operator=(const MutantStack& src)
	{
        if (this == &src)
            return (*this);
        std::stack<type,container>::operator=(src);
        return (*this);	
	};
	typedef typename container::iterator			iterator;
	typedef typename container::reverse_iterator	reverse_iterator;
	iterator	begin()
	{
		return (MutantStack::stack::c.begin());
	};
	iterator	end()
	{
		return (MutantStack::stack::c.end());
	};
	reverse_iterator	rbegin()
	{
		return (MutantStack::stack::c.rbegin());
	};
	reverse_iterator	rend()
	{
		return (MutantStack::stack::c.rend());
	};
};

#endif