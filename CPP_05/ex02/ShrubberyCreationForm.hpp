#ifndef SCF_HPP
#define SCF_HPP
#include <iostream>
#include <string>
#include "Form.hpp"

class SCF : public Form{
	public:
		SCF(std::string target);
		void execute(Bureaucrat const & executor) const;
		~SCF();

	private:
		//SCF() {};
		//SCF(const SCF &SCF) {};
		//SCF& operator = (const SCF& f) {};

};

#endif