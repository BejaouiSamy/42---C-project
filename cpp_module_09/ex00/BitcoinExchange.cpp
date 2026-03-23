#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <cctype>

BitcoinEx::BitcoinEx(std::string fileName)
{
    std::ifstream file(fileName.c_str());
    if(!file.is_open())
        std::cerr << "Error, no file founded" << std::endl;
    std::string line;
    while (std::getline(file, line))
    {
        size_t pos = line.find(',');
        std::string date = line.substr(0, pos);
        std::string price = line.substr(pos + 1);
        float convertedPrice = static_cast<float>(std::atof(price.c_str()));
        _file[date] = convertedPrice;
    }
}

BitcoinEx::~BitcoinEx(void)
{
}

void BitcoinEx::takeFile(std::string fileName)
{
    std::ifstream file(fileName.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open input file" << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line))
    {
        size_t pos = line.find(" | ");
        if(pos == std::string::npos)
        {
            std::cerr << "Error: bad input =>" << line << std::endl;
            continue;
        }
        std::string date = line.substr(0, pos);
        std::string price = line.substr(pos + 3);
        float convertedPrice = static_cast<float>(std::atof(price.c_str()));
        if (!(convertedPrice > 0 && convertedPrice < 1000))
        {
            std::cerr << "Price is out of range" << std::endl;
            continue;
        }
        if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }

        bool error = false;
        int i = 0;
        while(i < 10)
        {
            if (i == 4 || i == 7)
            {
                i++;
                continue;
            }
            if (!std::isdigit(static_cast<unsigned char>(date[i])))
            {
                error = true;
                break;
            }
            i++;
        }
        if (error)
        {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }
        std::map<std::string, float>::iterator it = _file.lower_bound(date);
        if(it == _file.end() || it->first != date)
        {
            if(it == _file.begin())
                std::cerr << "Error: no rate for this date" << std::endl;
            else
                --it;
        }
        std::cout << date << " => " << convertedPrice * it->second << std::endl;
    }
}