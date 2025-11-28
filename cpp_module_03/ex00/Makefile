EXEC = ClapTrap

SRC = ./src/main.cpp ./src/ClapTrap.cpp
HEADER = ./include/ClapTrap.hpp

CXX = g++
CXXFLAGS = -Werror -Wextra -Wall

all: $(EXEC)

$(EXEC): $(SRC)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

clean:
		rm -f $(EXEC)