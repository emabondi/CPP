#ifndef CLASSES_HPP
#define CLASSES_HPP

#include <iostream>
#include <cstdlib>
#include <time.h>

class Base {
	public:
		virtual ~Base() {}
};

class A : public Base{

};

class B : public Base{

};

class C : public Base{

};

Base* generate();
void identify(Base* p);
void identify(Base& p);

#endif