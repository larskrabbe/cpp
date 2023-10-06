#include	<utility>
#include	<vector>
#include	<iostream>
#include	<deque>
#include <sys/time.h>

void print(std::vector<int>& numbers)
{
	for (size_t i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;
}


template<typename pair_container>
void print_pair(const pair_container& pairs)
{
    for (typename pair_container::const_iterator iter = pairs.begin(); iter != pairs.end(); ++iter)
    {
        std::cout << "(" << iter->first << ", " << iter->second << ") ";
    }
    std::cout << std::endl;
}


void print(std::deque<int>& numbers)
{
    for (std::deque<int>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter)
    {
        std::cout << *iter << " "; 
    }
    std::cout << std::endl;
}

template<typename container, typename pair_container>
void creating_pairs(const container& numbers, pair_container& pairs)
{
    typename container::const_iterator iter = numbers.begin();

    while (iter != numbers.end())
    {
        typename container::const_iterator next = std::next(iter);
        std::pair<int, int> tmp;

        if (next != numbers.end())
        {
            if (*iter > *next)
            {
                tmp.first = *iter;
                tmp.second = *next;
            }
            else
            {
                tmp.first = *next;
                tmp.second = *iter;
            }
            ++iter;
            ++iter;
        }
        else
        {
            tmp.first = -1;
            tmp.second = *iter;
            ++iter;
        }

        pairs.push_back(tmp);
    }
}

template<typename pair_container>
void merge(pair_container& arr, int p, int q, int r) {
			
	int n1 = q - p + 1;
	int n2 = r - q;
	pair_container L(n1), M(n2);

	for (int i = 0; i < n1; i++)
		L[i] = arr[p + i];
	for (int j = 0; j < n2; j++)
		M[j] = arr[q + 1 + j];

	int i, j, k;
	i = 0;
	j = 0;
	k = p;
	while (i < n1 && j < n2)
	{
		if ( (L[i].first <= M[j].first && L[i].first != -1) || M[j].first == -1 )
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = M[j];
			j++;
		}
		k++;
	}

  while (i < n1)
  {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2)
  {
    arr[k] = M[j];
    j++;
    k++;
  }
}


template<typename pair_container>
void mergeSort(pair_container& arr, int l, int r) {
  if (l < r) 
  {
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}



template<typename container,typename pair_container>
void	fill(container& main_c,container& pend_c,pair_container&  pairs)
{
	for (typename pair_container::const_iterator iter = pairs.begin(); iter != pairs.end(); iter++)
	{
		if (iter->first != -1)
			main_c.push_back(iter->first);
		pend_c.push_back(iter->second);
	}
	
}




template<typename container>
void binary_search_insertion(container& main_c, int num)
{
    typename container::iterator low = main_c.begin();
    typename container::iterator high = main_c.end();

    while (low < high)
    {
        typename container::iterator mid = low + (std::distance(low, high) / 2);

        if (*mid < num)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    main_c.insert(low, num);
}

template<typename container>
container	jakob_iterator(container main_c,container pend_c)
{
	int i = 1;
	int j = 1;
	int counter = 0;
	typename container::iterator iter = pend_c.begin();
	 main_c.insert(main_c.begin(), pend_c[0]);
	while (counter < pend_c.size()-1)
	{
		for (size_t k = i; k > j ; k--)
		{
			if (k < pend_c.size()+1)
			{
				counter++;
				binary_search_insertion(main_c,iter[k-1]);
			}
		}
		int tmp = i;
		i = i + 2 * j;
		j = tmp;
	}
	return(main_c);
}



template<typename container,typename pair_container>
container	ft_ford_johnsen(container& numbers,pair_container&  pairs)
{

	creating_pairs(numbers,pairs);
	pair_container sorted(pairs.size());
	mergeSort(pairs,0,pairs.size()-1);
	container main_c;
	container pend_c;
	fill(main_c,pend_c,pairs);
	return(jakob_iterator(main_c,pend_c));
}

std::vector<int>	vector_f(std::vector<int>& numbers)
{
	std::vector<std::pair<int,int> > pairs(0);
	return(ft_ford_johnsen(numbers,pairs));
}



std::deque<int>	deque_f(std::deque<int>& numbers)
{
	std::deque<std::pair<int,int> > pairs(0);
	return(ft_ford_johnsen(numbers,pairs));
}

long long	timeval_to_ll(struct timeval *start, struct timeval *end)
{
	struct timeval tmp;

	tmp.tv_sec = end->tv_sec - start->tv_sec;
	tmp.tv_usec = end->tv_usec - start->tv_usec;
	while (tmp.tv_usec < 0){
		tmp.tv_sec--;
		tmp.tv_usec += 1000000;
	}

	long long time = tmp.tv_usec + tmp.tv_sec * 1000000;
	return (time);
}


int main(int argc, char** argv)
{
	if (argc <= 2){
		std::cout << "Error | Need more data" << std::endl;
		return(-1);
	}
	try
	{
		std::vector<int> vec;
		std::deque<int> deq;
		for (size_t i = 1; i < argc; i++)
		{
			int num = atoi(argv[i]);
            if (num == 0 && strcmp(argv[i], "0") != 0)
			{
				throw(std::string("Error | Not a Number"));
			}
            if (num < 0)
			{
				throw(std::string("Error | Negativ Number"));
			}
			if (vec.size() >= 1)
			{
				if (*(std::find(vec.begin(),vec.end(),num)) == true)
					throw(std::string("Error |  Multiple of the same Number"));
			}
				vec.push_back(num);
				deq.push_back(num);
		}
		std::cout << "Before : ";
		print(vec);	
		struct timeval time;
		struct timeval timeb;
		struct timeval vec_time;
		struct timeval deq_time;
		gettimeofday(&time,NULL);
		vector_f(vec);
		gettimeofday(&vec_time,NULL);
		gettimeofday(&timeb,NULL);
		deque_f(deq);
		gettimeofday(&deq_time,NULL);
		std::vector<int> sorted_vec = vector_f(vec);
		std::deque<int> sorted_deq = deque_f(deq);
		std::cout << "After : ";
		print(sorted_vec);		
		std::cout << "deq = " << timeval_to_ll(&time,&vec_time)  << std::endl;
		std::cout << "vec = " << timeval_to_ll(&timeb,&deq_time) << std::endl;
		int o = 0;
		for (size_t i = 0; i < sorted_vec.size()-1; i++)
		{
			if (sorted_vec[i] > sorted_vec[i + 1])
			{
				std::cout << "not sorted"<<std::endl;
				exit(0);
			}
			if (sorted_deq[i] > sorted_deq[i + 1])
			{
				std::cout << "not sorted"<<std::endl;
				exit(0);
			}
			o = i;
		}
		std::cout << "its sorted ="<< o <<std::endl;

	}
	catch(const std::string str)
	{
		std::cerr << str << '\n';
		exit(-1);
	}
	return(0);
}