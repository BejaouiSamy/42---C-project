#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

int main(void)
{
	std::cout << "=== Basic test ===" << std::endl;
	try
	{
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n=== Not enough elements ===" << std::endl;
	try
	{
		Span one(1);
		one.addNumber(42);
		std::cout << one.shortestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n=== Full span test ===" << std::endl;
	try
	{
		Span tiny(2);
		tiny.addNumber(10);
		tiny.addNumber(20);
		tiny.addNumber(30);
	}
	catch (std::exception const &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n=== Large test (10000 numbers) ===" << std::endl;
	try
	{
		Span big(10000);
		std::srand(static_cast<unsigned int>(std::time(NULL)));
		for (int i = 0; i < 10000; ++i)
			big.addNumber(std::rand());
		std::cout << "shortestSpan: " << big.shortestSpan() << std::endl;
		std::cout << "longestSpan : " << big.longestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
