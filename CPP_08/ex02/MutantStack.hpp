#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
//#include <vector>
//#include <algorithm>
//#include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack(){}
		MutantStack(const MutantStack &MutantStack){ *this = MutantStack;}
		MutantStack& operator = (const MutantStack& f){
			this->c = f.c;
			return (*this);
		}
		~MutantStack(){};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin( void )
		{
			return this->c.begin();
		}
		
		iterator	end( void ) {
			return this->c.end();
		}

	private:
};


#endif