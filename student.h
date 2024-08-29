#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>


class student {
public:
	std::string studentFirstName; 
	std::string studentLastName;
	std::string studentUniversity;
	std::string studentMajor;
	int age;

	student(std::string fName, std::string lName, std::string currentUniversity, std::string currentMajor, int studentAge) {
		studentFirstName = fName;
		studentLastName = lName;
		studentUniversity = currentUniversity;
		studentMajor = currentMajor;
		age = studentAge;
	}

	virtual ~student() {}

	virtual std::string studentGradeLevelAndInfo() const = 0;
};

#endif STUDENT_H

