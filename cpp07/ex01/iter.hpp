template<typename t_array>
void iter(t_array *array,size_t len, void (*f)(t_array&) )
{
	for (size_t i = 0; i < len; i++)
	{
		f(array[i]);
	}
}