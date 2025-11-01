EXEC = HI

SRC = ./src/main.cpp

CXX = g++
CXXFLAGS = -Werror -Wextra -Wall

all: $(EXEC)

$(EXEC): $(SRC)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

clean:
		rm -f $(EXEC)