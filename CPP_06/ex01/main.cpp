#include "Serialization.hpp"

int	main(){
	Data a;
	a.x = 42;
	Data *b;

	std::cout << "Struct value: "<< a.x << std::endl;
	std::cout << "Serialize value is: " << serialize(&a) << std::endl;
	b = deserialize(serialize(&a));
	std::cout << "Deserialized struct value: "<< b->x << std::endl;
	return (0);
}