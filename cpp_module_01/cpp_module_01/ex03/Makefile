EXEC = VIOLENCE

SRC = ./src/main.cpp ./src/HumanA.cpp ./src/Weapon.cpp ./src/HumanB.cpp
HEADER = ./include/Weapon.hpp ./include/HumanA.hpp ./include/HumanB.hpp

CXX = g++
CXXFLAGS = -Werror -Wextra -Wall

all: $(EXEC)

$(EXEC): $(SRC)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

clean:
		rm -f $(EXEC)