#include "PmergeMe.hpp"

std::vector<int>& merge_insert_sort(std::vector<int> &vec)
{
	
	if (vec.size() == 1)
		return vec;
	if (vec.size() <= 5){
		int	x = 0;
		int x1 = 1;
		int	tmp = 0;
		while (x1 < (int)vec.size()){
			x = x1 - 1;
			tmp = vec.at(x1);	
			while (x >= 0){
				if (vec.at(x) < tmp)
					break ;
				vec.at(x + 1) = vec.at(x);
				vec.at(x) = tmp;
				x--;
			}
			x1++;
		}
		return vec;
	}
	else {
		int	half_size = vec.size() / 2;
		std::vector<int>::const_iterator it = vec.begin();
		it += half_size;
		std::vector<int>::const_iterator begin = vec.begin();
		std::vector<int>::const_iterator end = vec.end();
		std::vector<int> v1(begin, it);
		std::vector<int> v2(it, end); //su portatile end + 1
		v1 = merge_insert_sort(v1);
		v2 = merge_insert_sort(v2);
		vec.clear();
		std::vector<int>::iterator i = v1.begin();
		std::vector<int>::iterator j = v2.begin();
		while (i != v1.end() && j != v2.end()){
			if (*i < *j){
				vec.push_back(*i);
				i++;
			}
			else {
				vec.push_back(*j);
				j++;
			}
		}
		while (i != v1.end()){
			vec.push_back(*i);
			i++;
		}
		while (j != v2.end()){
			vec.push_back(*j);
			j++;
		}	
		return vec;
	}
	return vec;
}

std::deque<int>& merge_insert_sort(std::deque<int> &vec)
{
	
	if (vec.size() == 1)
		return vec;
	if (vec.size() <= 5){
		int	x = 0;
		int x1 = 1;
		int	tmp = 0;
		while (x1 < (int)vec.size()){
			x = x1 - 1;
			tmp = vec.at(x1);	
			while (x >= 0){
				if (vec.at(x) < tmp)
					break ;
				vec.at(x + 1) = vec.at(x);
				vec.at(x) = tmp;
				x--;
			}
			x1++;
		}
		return vec;
	}
	else {
		int	half_size = vec.size() / 2;
		std::deque<int>::const_iterator it = vec.begin();
		it += half_size;
		std::deque<int>::const_iterator begin = vec.begin();
		std::deque<int>::const_iterator end = vec.end();
		std::deque<int> v1(begin, it);
		std::deque<int> v2(it, end); //su portatile end + 1
		v1 = merge_insert_sort(v1);
		v2 = merge_insert_sort(v2);
		vec.clear();
		std::deque<int>::iterator i = v1.begin();
		std::deque<int>::iterator j = v2.begin();
		while (i != v1.end() && j != v2.end()){
			if (*i < *j){
				vec.push_back(*i);
				i++;
			}
			else {
				vec.push_back(*j);
				j++;
			}
		}
		while (i != v1.end()){
			vec.push_back(*i);
			i++;
		}
		while (j != v2.end()){
			vec.push_back(*j);
			j++;
		}	
		return vec;
	}
	return vec;
}