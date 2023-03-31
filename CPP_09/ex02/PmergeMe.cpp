#include "PmergeMe.hpp"

std::vector<int>& merge_insert_sort(std::vector<int> &vec, int	size)
{
	int	half_size = size / 2;
	if (size == 1)
		return vec;
	if (size == 2){
		if (vec[0] > vec[1])
			vec.swap(vec);
		return vec;
	}
	if (size > 2){
		std::vector<int>::const_iterator it;
		for (int i = 0; i < half_size; i++)
			it++;
		std::vector<int>::const_iterator begin = vec.begin();
		std::vector<int>::const_iterator end = vec.end();
		std::vector<int> v1(begin, it);
		std::vector<int> v2(it + 1, end);
		v1 = merge_insert_sort(v1, half_size);
		if (size % 2 == 0)
			v2 = merge_insert_sort(v2, half_size);
		else
			v2 = merge_insert_sort(v2, half_size + 1);
		//std::vector<int>::iterator j;
		//std::vector<int>::iterator l;
		//while ()
		////v1.insert();
	}
}