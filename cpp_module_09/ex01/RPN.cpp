#include "RPN.hpp"
#include <iostream>
#include <cctype>

RPN::RPN(void)
{

}

RPN::~RPN(void)
{

}

void RPN::calculate(std::string value) 
{
    std::istringstream iss(value);
    std::string token;
    while (iss >> token)
    {
        if (token.length() > 0 && std::isdigit(static_cast<unsigned char>(token[0])) && token.length() == 1)
        {
            _num.push(std::atoi(token.c_str()));
        }
        else if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (_num.size() < 2)
            {
                std::cerr << "Error" << std::endl;
                return;
            }
            int b = _num.top(); _num.pop();
            int a = _num.top(); _num.pop();
            int res = 0;
            
            if (token == "+")
                res = a + b;
            else if (token == "-")
                res = a - b;
            else if (token == "*")
                res = a * b;
            else if (token == "/")
            {
                if (b == 0)
                {
                    std::cerr << "Error" << std::endl;
                    return;
                }
                res = a / b;
            }
            _num.push(res);
        }
        else
        {
            std::cerr << "Error" << std::endl;
            return;
        }
    }
    if (_num.size() != 1)
        std::cerr << "Error" << std::endl;
    else
        std::cout << _num.top() << std::endl;
}