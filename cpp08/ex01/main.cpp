

#include    "Span.hpp"
#include    <iostream>
#include    <vector>
#include    <cstdlib>

#define BIG 1
int main()
{
    std::vector<int> r;
    for (size_t i = 0; i < BIG ; i++)
    {
       r.push_back(rand());
    }
    // r[2] = 0;
    // r[3] = 4;
    Span nums(BIG);
    try
    {
        nums.addNumber(r.begin(),r.end());
        std::cout << nums.longestSpan() << std::endl;
        std::cout << nums.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}