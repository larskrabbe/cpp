#include <iostream>
#include "Array.hpp"
#include <cstdlib>
// int main()
// {
//     Array<int> a(4);
//     a[1] = 10;
//     std::cout << a[1] << std::endl;
// }


#define MAX_VAL 10
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    Array<int> tmp;
    tmp = numbers;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != tmp[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        tmp[i] = rand();
    }
    delete [] mirror;//
    return 0;
}