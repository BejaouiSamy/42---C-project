EXEC = PhoneBook

SRC = ./src/contact.cpp ./src/main.cpp
HEADER = ./include/contact.hpp

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

clean:
	rm -f $(EXEC)
