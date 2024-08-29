#pragma once
#ifndef JUNIOR_H
#define JUNIOR_H
#include "student.h"

#include <string>
#include <iostream>
#include <sstream>


class junior : public student {
public:
	int creditHours;

	junior(std::string fName, std::string lName, std::string currentUniversity, std::string currentMajor, int studentAge, int totalCreditHours)
		: student(fName, lName, currentUniversity, currentMajor, studentAge), creditHours(totalCreditHours) {}

	std::string studentGradeLevelAndInfo() const override {
		std::ostringstream output;
		output << studentFirstName << " " << studentLastName << " is a Junior." << std::endl;
		output << "Age: " << age << std::endl;
		output << "Credit Hours: " << creditHours << std::endl;
		output << studentUniversity << std::endl;
		output << studentMajor << std::endl;

		return output.str();
	}


};

#endif JUNIOR_H