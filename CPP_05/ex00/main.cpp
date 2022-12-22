#include "Bureaucrat.hpp"

int main (){
	try{
		Bureaucrat zio("Mizio", 151) ;
	}
	catch (std::exception const &e){
		Bureaucrat zio("Mizio", 150) ;
	}

	Bureaucrat a("Malus", 2);
	try {
		std::cout<<"Provo ad incrementare il grado\n";
		a.incrementGrade();
		std::cout << a << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
		a.incrementGrade();
	}
	catch (std::exception const &e) {
		std::cout << "Il grado è troppo alto\n";
	}
	
	//std::cout << a << std::endl;
}