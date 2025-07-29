EXEC = Account

SRC = Account.cpp tests.cpp
HEADER = Account.hpp

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(EXEC)

$(EXEC): $(SRC)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

clean:
	rm -f $(EXEC)