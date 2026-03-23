#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./btc <input_file>" << std::endl;
		return 1;
	}

	BitcoinEx exchange("../cpp_09/data.csv");
	exchange.takeFile(argv[1]);
	return 0;
}
