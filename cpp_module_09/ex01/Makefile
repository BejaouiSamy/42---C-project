EXEC = RPN

SRC = main.cpp RPN.cpp
HEADER = RPN.hpp
CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98

all: $(EXEC)

$(EXEC): $(SRC) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRC)

clean:
	rm -f $(EXEC)

fclean: clean

re: fclean all
