
#include	<vector>
#include	<iostream>

struct pairs{
	int a;
	int	b;
	int pos;
}t_pairs;



void print(std::vector<int>& numbers)
{
	for (size_t i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << std::endl;
	}
	std::cout << std::endl;
	
}

void	pairs_create(std::vector<int>& a, std::vector<int>& b,std::vector<int>& numbers)
{
	// struct pairs tmp;
	for (size_t i=0,j = 0; i < numbers.size(); i += 2)
	{
		if (i + 1 == numbers.size())
		{
			b[j] = numbers[i];
			return;
		}
		if (numbers[i] < numbers[i + 1])
		{
			a[j] = numbers[i];
			b[j] = numbers[i + 1];
		}
		else 
		{
			a[j] = numbers[i + 1];
			b[j] = numbers[i];
		}
		j++;
	}
	
}

void	insert(std::vector<int>& a, std::vector<int>& b,std::vector<int>& sorted)
{
	 
}

void recursiv(std::vector<int>& numbers,std::vector<int>& sorted, size_t pos)
{

		print(numbers);
		if ( numbers.size() == 2)
		{
			sorted();
		}
		else if ( numbers.size() > 1)
		{
			std::vector<int> a(numbers.size() / 2);
			std::vector<int> b(numbers.size() / 2 + numbers.size() % 2);
			pairs_create(a,b,numbers);
			recursiv(a,sorted,pos+2);
			insert(a,b,sorted);
		}
		else if( numbers.size() == 1)
		{
			sorted[0] = numbers[0];
		}
			return;
	// }
}

void	merge(std::vector<int>& numbers)
{
	std::vector<int> sorted(numbers.size());

	recursiv(numbers,sorted,0);	
}

//













int main()
{
	std::vector<int> numbers(7);
	numbers[0] = 5;
	numbers[1] = 2;
	numbers[2] = 6;
	numbers[3] = 1;
	numbers[4] = 4;
	numbers[5] = 3;
	numbers[6] = 7;
	numbers[7] = 0;
	print(numbers);
	merge(numbers);
	print(numbers);
;}