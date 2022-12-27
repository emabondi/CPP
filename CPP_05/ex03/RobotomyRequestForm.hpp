#ifndef RRF_HPP
#define RRF_HPP
#include <iostream>
#include <string>
#include "Form.hpp"

class RRF : public Form{
	public:
		RRF(std::string target);
		void execute(Bureaucrat const & executor) const;
		~RRF();

	private:
		//RRF() {};
		//RRF(const RRF &RRF) {};
		//RRF& operator = (const RRF& f) {};

};

#endif