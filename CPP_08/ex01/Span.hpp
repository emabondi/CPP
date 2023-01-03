#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
//#include <iterator>


class Span{
	public:
		Span(unsigned int n);
		Span(const Span &Span);
		Span& operator = (const Span& f);
		void addNumber(int n);
		void addNumber(std::vector<int>::const_iterator it1, std::vector<int>::const_iterator it2);
		int shortestSpan();
		int longestSpan();
		~Span();

		class MaxStorage : public std::exception {
			public:
				const char *what() const throw(){
					return "Exception: Reached storage limit!";
				}
		};

		class InvalidSize : public std::exception {
			public:
				const char *what() const throw(){
					return "Exception: The size cannot be 0!";
				}
		};

		class NoElements : public std::exception {
			public:
				const char *what() const throw(){
					return "Exception: There aren't enough elements!";
				}
		};

	private:
		Span(){};
		std::vector<int> _storage;
		unsigned int _size;
};


#endif