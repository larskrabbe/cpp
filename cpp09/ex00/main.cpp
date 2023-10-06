
#include	"BTC.hpp"
#include    <iostream>


int main(int argc, char** argv)
{
    if(argc == 3)
    {
        std::cout << "Wrong amount of  arguments" << std::endl;
        return(0);
    }
    try
    {
        std::cout << argv[1] << std::endl;
        BTC bank(argv[1]);
        //bank.run();
    }
    catch(const BTC::Exception& e)
    {
        std::cerr << e.message() << std::endl;
    }
    




    return(0);
}