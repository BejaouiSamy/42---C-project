EXEC = Intern

SRC = ./src/main.cpp ./src/Bureaucrat.cpp ./src/AForm.cpp ./src/ShrubberyCreationForm.cpp ./src/RobotomyRequestForm.cpp ./src/PresidentialPardonForm.cpp ./src/Intern.cpp
HEADERS = ./include/Bureaucrat.hpp ./include/AForm.hpp ./include/ShrubberyCreationForm.hpp ./include/RobotomyRequestForm.hpp ./include/PresidentialPardonForm.hpp ./include/Intern.hpp

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(EXEC)

$(EXEC): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRC)

clean:
	rm -f $(EXEC)

fclean: clean

re : fclean all

