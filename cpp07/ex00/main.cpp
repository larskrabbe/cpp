#include <iostream>
#include <string>

template<typename t>
void	swap(t& a, t& b)
{
	t tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template<typename t>
t max(t& a, t& b)
{
	return (a < b ? b : a);
}

template<typename t>
t min(t& a, t& b)
{
	return (a > b ? b : a);
}
int main()
{
	std::string a("helloa");
	std::string b("hellob");
	std::cout << "max : " << max(a,b) << std::endl;
	std::cout << "min : " << min(a,b) << std::endl;
	std::cout << "swap : before " << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	swap(a,b);
	std::cout << "swap : after " << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
}