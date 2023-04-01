#include "PmergeMe.hpp"

std::vector<int>& merge_insert_sort(std::vector<int> &vec)
{
	
	if (vec.size() == 1)
		return vec;
	if (vec.size() == 2){
		if (vec[0] > vec[1])
			std::swap(vec[0], vec[1]);
		return vec;
	}
	if (vec.size() >= 3){
		int	half_size = vec.size() / 2;
		std::vector<int>::const_iterator it = vec.begin();
		it += half_size;
		//for (int i = 0; i < half_size; i++)
		//	it++;
		std::vector<int>::const_iterator begin = vec.begin();
		std::vector<int>::const_iterator end = vec.end();
		std::cout<< "begin: "<<*begin<<" end: "<<(*end--)<<" size: "<< vec.size()<<std::endl;
		std::vector<int> v1(begin, it);
		//std::cout << "\nv1: ";
		//for (std::vector<int>::iterator l = v1.begin(); l != v1.end(); l++){
		//	std::cout << *l << " ";
		//}
		std::vector<int> v2(it, end + 1);
		//std::cout << "\nv2: "
		//for (std::vector<int>::iterator l = v2.begin(); l != v2.end(); l++){
		//	std::cout << *l << " ";
		//}
		v1 = merge_insert_sort(v1);
		v2 = merge_insert_sort(v2);
		vec = v1;
		/*for (std::vector<int>::iterator l = v2.begin(); l != v2.end(); l++){
			for (std::vector<int>::iterator j = vec.begin(); j != vec.end(); j++){
				std::cout<<"ciaol: "<< *l << " j: "<< *j<< std::endl;
				if (*j >= *l)
					vec.insert(j, *l);
			}
		}*/
		return vec;
	}
	return vec;
}