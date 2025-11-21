EXEC = Fixed

SRC = ./src/main.cpp ./src/Fixed.cpp
HEADER = ./include/Fixed.hpp

CXX = g++
CXXFLAGS = -Werror -Wextra -Wall

all: $(EXEC)

$(EXEC): $(SRC)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

clean:
		rm -f $(EXEC)