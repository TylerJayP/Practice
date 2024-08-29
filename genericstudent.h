#ifndef GENERICSTUDENT_H
#define GENERICSTUDENT_H

#include <string>
#include <iostream>
#include <sstream>
#include "student.h"


class genericstudent : public student {
public:
	genericstudent(std::string fName, std::string lName, std::string currentUniversity, std::string currentMajor, int studentAge)
		: student(fName, lName, currentUniversity, currentMajor, studentAge) {}
	
	std::string studentGradeLevelAndInfo() const override {
		std::ostringstream output;
		output << studentFirstName << " " << studentLastName << std::endl;
		output << "Age: " << std::to_string(age) << std::endl;
		output << studentUniversity << std::endl;
		output << studentMajor << std::endl;

		return output.str();
	}

};

#endif GENERICSTUDENT_H

