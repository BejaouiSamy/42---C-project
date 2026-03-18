#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {}

		MutantStack(MutantStack const &other) : std::stack<T>(other) {}

		MutantStack &operator=(MutantStack const &other)
		{
			if (this != &other)
				std::stack<T>::operator=(other);
			return (*this);
		}

		~MutantStack(void) {}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin(void)
		{
			return (this->c.begin()); // access to the protected container stack (c)
		}

		iterator end(void)
		{
			return (this->c.end());
		}

		const_iterator begin(void) const
		{
			return (this->c.begin());
		}

		const_iterator end(void) const
		{
			return (this->c.end());
		}
};

#endif
