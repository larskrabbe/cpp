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