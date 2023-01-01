#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void iter(T *arr, size_t len_arr, void (*f)(T const &)){
	for (size_t i = 0; i < len_arr; i++){
		f(arr[i]);
	}
}

#endif