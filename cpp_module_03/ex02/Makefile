EXEC = sc4vtrap

SRC = ./src/main.cpp ./src/ClapTrap.cpp ./src/ScavTrap.cpp ./src/FragTrap.cpp
HEADER = ./include/ClapTrap.hpp ./include/ScavTrap.hpp ./include/FragTrap.hpp

CXX = g++
CXXFLAGS = -Werror -Wextra -Wall

all: $(EXEC)

$(EXEC): $(SRC)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

clean:
		rm -f $(EXEC)