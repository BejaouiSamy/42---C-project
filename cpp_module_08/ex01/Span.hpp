#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>

class Span
{
    private:
        unsigned int        _maxSize;
        std::vector<int>    _numbers;
        Span(void);

    public:
        Span(unsigned int N);
        Span(Span const &other);
        Span &operator=(Span const &other);
        ~Span(void);

        void            addNumber(int number);
        unsigned int    shortestSpan(void) const;
        unsigned int    longestSpan(void) const;

        class FullException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class NoSpanException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};


#endif