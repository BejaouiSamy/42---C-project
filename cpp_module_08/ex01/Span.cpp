#include "Span.hpp"

#include <algorithm>
#include <limits>

Span::Span(unsigned int N) : _maxSize(N), _numbers() {}

Span::Span(Span const &other) : _maxSize(other._maxSize), _numbers(other._numbers) {}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		_maxSize = other._maxSize;
		_numbers = other._numbers;
	}
	return (*this);
}

Span::~Span(void) {}

void Span::addNumber(int number)
{
	if (_numbers.size() >= _maxSize)
		throw FullException();
	_numbers.push_back(number);
}

unsigned int Span::shortestSpan(void) const
{
	if (_numbers.size() < 2)
		throw NoSpanException();

	std::vector<int> sorted(_numbers);
	std::sort(sorted.begin(), sorted.end());

	unsigned int shortest = std::numeric_limits<unsigned int>::max();
	std::size_t i = 1; 
    while (i < sorted.size())
	{
		unsigned int diff = static_cast<unsigned int>(sorted[i] - sorted[i - 1]);
		if (diff < shortest)
			shortest = diff;
        i++;
	}
	return (shortest);
}

unsigned int Span::longestSpan(void) const
{
	if (_numbers.size() < 2)
		throw NoSpanException();

	int minValue = *std::min_element(_numbers.begin(), _numbers.end());
	int maxValue = *std::max_element(_numbers.begin(), _numbers.end());
	return (static_cast<unsigned int>(maxValue - minValue));
}

const char *Span::FullException::what() const throw()
{
	return ("Span is full");
}

const char *Span::NoSpanException::what() const throw()
{
	return ("Not enough numbers to compute span");
}
