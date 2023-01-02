#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>

class NotFound : public std::exception {
	public:
		const char *what() const throw(){
			return "Exception: Not found";
		}
};

template <typename T> typename T::iterator easyfind(T cont, int toFind){
	typename T::iterator found;

	found = std::find(cont.begin(), cont.end(), toFind);
	if (found == cont.end())
		throw NotFound();
	return found;
}

#endif