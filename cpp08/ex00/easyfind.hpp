#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include    <string>
#include    <algorithm>

struct value_not_found : public std::exception
	{const char* what() const throw ()
		{return ("value is not found");}};


template<typename type>
typename type::iterator easyFind(type& container, int num)
{
    typename type::iterator it =  std::find(container.begin(),container.end(),num);
    if (it != container.end())
        return(it);
    throw(value_not_found());
}

#endif