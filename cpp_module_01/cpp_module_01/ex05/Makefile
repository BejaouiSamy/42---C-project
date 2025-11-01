EXEC = Harl

SRC = ./src/main.cpp ./src/Harl.cpp
HEADER = ./include/Harl.hpp

CXX = g++
CXXFLAGS = -Werror -Wextra -Wall

all: $(EXEC)

$(EXEC): $(SRC)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

clean:
		rm -f $(EXEC)