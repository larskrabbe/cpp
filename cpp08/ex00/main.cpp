
#include    "easyfind.hpp"
#include    <vector>
#include    <list>
#include    <stack>
#include    <deque>
#include    <iostream>
#include    <cstdlib>

#define MAX_RAND_NUM 20


int main()
{
    //vector {0 1 2 3 4}
    {
        std::vector<int> nums(5);
        for (size_t i = 0; i < nums.size(); ++i)
        {
            nums[i] = i;
        }
        try
        {
            std::cout << *easyFind(nums,2) << std::endl;
        }
        catch  (const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    //list
    {
        std::list<int> nums;
        for (std::list<int>::iterator tmp = nums.begin(); tmp != nums.end(); ++tmp)
        {
            *tmp = rand() % 3;
        }
        try
        {
            std::cout << *easyFind(nums,2) << std::endl;
        }
        catch  (const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    //deque 
    {
        std::deque<int> nums;
        for (size_t i = 0; i < 10; i++)
        {
           nums.push_back(i);
        }
        try
        {
            std::cout << *easyFind(nums,7) << std::endl;
        }
        catch  (const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}