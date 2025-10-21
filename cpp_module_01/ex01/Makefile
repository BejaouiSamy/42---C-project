EXEC = Zombie

SRC = ./src/Zombie.cpp ./src/zombieHorde.cpp ./src/main.cpp
HEADER = ./include/Zombie.hpp

CXX = g++
CXXFLAGS = -Werror -Wextra -Wall

all: $(EXEC)

$(EXEC): $(SRC)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

clean:
		rm -f $(EXEC)