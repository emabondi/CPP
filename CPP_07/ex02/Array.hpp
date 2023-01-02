#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> 
class Array{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &toCopy);
		Array& operator = (const Array& f);
		T& operator[] (int i) const;
		size_t size() const;
		~Array();

		class IndexOutOfBound : public std::exception {
			const char *what() const throw();
		};

	private:
		size_t 	_len;
		T* 		_arr;
};

template <typename T>
Array<T>::Array() : _len(0), _arr(NULL) {
}

template <typename T>
Array<T>::Array(unsigned int n) : _len(n){
	_arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array &toCopy){
	this->_len = toCopy._len;
	this->_arr = new T[this->_len];
	for (size_t i = 0; i < this->_len; i++)
		this->_arr[i] = toCopy._arr[i];
}

template <typename T>
Array<T>& Array<T>::operator= (const Array& f){
	delete [] this->_arr;
	this->_len = f._len;
	this->_arr = new T[this->_len];
	for (size_t i = 0; i < this->_len; i++)
		this->_arr[i] = f._arr[i];
	return (*this);
}

template <typename T>
T& Array<T>::operator[] (int i) const{
	if (i < 0 || i >= (int)this->_len)
		throw IndexOutOfBound();
	return (this->_arr[i]);
}

template <typename T>
size_t Array<T>::size() const{
	return this->_len;
}

template <typename T>
Array<T>::~Array(){
	delete[] this->_arr;
}

template <typename T>
const char* Array<T>::IndexOutOfBound::what() const throw(){
	return "ArrayException: Index out of bounds";
}

#endif