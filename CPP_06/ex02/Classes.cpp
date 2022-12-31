#include "Classes.hpp"

Base* generate(){
	srand(time(0));
	int x = rand() % 3;

	switch (x){
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (NULL);
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "Class A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Class B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Class C\n";
	else
		std::cout << "Unkown\n";
}

void identify(Base& p){
	A a;
	B b;
	C c;

	try{
		a = dynamic_cast<A&>(p);
		std::cout << "Class A\n";
	}
	catch (const std::exception& e){
		try{
			b = dynamic_cast<B&>(p);
			std::cout << "Class B\n";
		}
		catch (const std::exception& e){
			try{
				c = dynamic_cast<C&>(p);
				std::cout << "Class C\n";
			}
			catch (const std::exception& e){
				std::cout << "Unkown\n";
			}
		}
	}
}