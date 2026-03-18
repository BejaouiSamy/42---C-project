EXEC = Span

SRC = main.cpp Span.cpp
HEADER = Span.hpp
CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRC)

clean:
	rm -f $(EXEC)

fclean: clean

re: fclean all