EXEC = Megaphone

SRC = megaphone.cpp

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

clean:
	rm -f $(EXEC)
