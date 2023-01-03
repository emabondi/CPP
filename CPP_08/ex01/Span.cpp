#include "Span.hpp"

		Span::Span(unsigned int n) : _size(n){
			if (!n)
				throw Span::InvalidSize();
			_storage.reserve(n);
		}

		Span::Span(const Span &toCopy): _size(toCopy._size){
			*this = toCopy;
		}

		Span& Span::operator = (const Span &f){
			if (this != &f){
				_size = f._size;
				_storage = f._storage;
			}
			return *this;
		}

		void Span::addNumber(int n){
			if (this->_storage.size() == this->_size)
				throw Span::MaxStorage();
			_storage.push_back(n);
		}

		void	Span::addNumber(std::vector<int>::const_iterator it1, std::vector<int>::const_iterator it2) {
			while (it1 < it2)
			{
				if (_storage.size() == _size)
					throw MaxStorage();
				_storage.push_back(*it1);
				it1++;
			}
		}

		int Span::shortestSpan(){
			int ret;
			int size = this->_storage.size();

			if (this->_storage.size() <= 1)
				throw Span::NoElements();
			std::sort(this->_storage.begin(), this->_storage.end());
			ret = this->_storage[1] - this->_storage[0];
    		for (int n = 1; n < size - 1; n++)
				if (ret > (this->_storage[n + 1] - this->_storage[n]))
					ret = this->_storage[n + 1] - this->_storage[n];
			return (ret);
		}

		int Span::longestSpan(){
			if (this->_storage.size() <= 1)
				throw Span::NoElements();
			std::vector<int>::const_iterator min = std::min_element(_storage.begin(), _storage.end());
			std::vector<int>::const_iterator max = std::max_element(_storage.begin(), _storage.end());

			return std::labs(long(*min) - long(*max));
		}

		Span::~Span() {}