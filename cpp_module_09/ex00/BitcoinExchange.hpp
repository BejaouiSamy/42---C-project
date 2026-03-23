#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <map>
#include <string>

class BitcoinEx
{
    private:
        std::map<std::string, float> _file;

    public:
        BitcoinEx(std::string file);
        ~BitcoinEx(void);

        void takeFile(std::string file);
};

#endif