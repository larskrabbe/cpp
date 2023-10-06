
#include    "BTC.hpp"
#include    <unistd.h>


BTC::BTC(const BTC& copy)
{
    *this = copy;
}
BTC::BTC()
{

}

void BTC::btc_split( std::ifstream& inFile)
{
    std::string line;
    std::getline(inFile, line);
    while (std::getline(inFile, line))
    {
        btc_data date;
        size_t pos1 = line.find('-');
        if (pos1 == std::string::npos)
            throw(BTC::InvalidFile());
        date.year = std::stoi(line.substr(0,pos1));

        size_t pos2 = line.find('-',pos1+1);
        if (pos2 == std::string::npos)
            throw(BTC::InvalidFile());
        date.month = std::stoi(line.substr(pos1+1,pos2));

        size_t pos3 = line.find('|',pos2+1);
        size_t pos4 = line.find(',',pos2+1);
        if (pos4 < pos3)
        pos3 = pos4;
        if (pos3 == std::string::npos)
            throw(BTC::InvalidFile());
        date.days = std::stoi(line.substr(pos2+1,pos3));
        
        float num =std::stof(line.substr(pos3+1,line.size()));
        this->data[date] = num;
    }
}

BTC::BTC(std::string file)
{
    std::ifstream inFile(file);
    if (!inFile) 
    {
        throw(BTC::InvalidFile());
    }
    btc_split(inFile);
    inFile.close();
}

BTC::~BTC()
{
}

BTC& BTC::operator=(const BTC& copy)
{
    return(*this);
}


const std::string BTC::Exception::message() const
{
	return("Error:: error");
}



const std::string BTC::InvalidFile::message() const
{
	return("Error:: Invalid File");
}



const std::string BTC::b::message() const
{
	return("b");
}

const std::string BTC::c::message() const
{
	return("d");
}

const std::string BTC::d::message() const
{
	return("d");
}
