#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <sstream>
#include <iostream>
#include <cstdlib>

class RPN
{
    private:
        std::stack<int> _num;
    public:
        RPN(void);
        ~RPN(void);
        
        void calculate(std::string values);
};

#endif