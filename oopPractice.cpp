#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "student.h"
#include "genericstudent.h"
#include "junior.h"
#include "sophmore.h"


using namespace std;

int main() {
    //vector<char>userDirections;
    //string direction = "LDLLULUURRRDDR";
    //int posX = 0;
    //int posY = 0;


    //for(auto& directions : direction) {
    //    userDirections.push_back(directions);
    //}
    //
    //cout << "Looping Through Vector:" << endl;

    //for (int i = 0; i < userDirections.size(); ++i) {
    //    if (userDirections[i] == 'L') {
    //        posX += -1;
    //        posY += 0;
    //        cout << "You're in L" << endl;
    //    }else if (userDirections[i] == 'R') {
    //        posX += 1;
    //        posY += 0;
    //        cout << "You're in R" << endl;
    //    }else if (userDirections[i] == 'U') {
    //        posX += 0;
    //        posY += 1;
    //        cout << "You're in U" << endl;
    //    }else if (userDirections[i] == 'D') {
    //        posX += 0;
    //        posY += -1;
    //        cout << "You're in D" << endl;
    //    }
    //    else {
    //        cout << "This direction doesn't exist!" << endl;
    //    }
    //    cout << "posX: " << posX << endl;
    //    cout << "posY: " << posY << endl;
    //    cout << endl;
    //}

    //if ((posX == 0) && (posY == 0)) {
    //    cout << "You're at the starting position" << endl;
    //}
    //else {
    //    cout << "Not at the starting position." << endl;
    //}

    string fName;
    string lName;
    string uni;
    string major;
    int age;
    int gradeLevel;
    int creditHours = 0;

    cout << "First Name: ";
    getline(cin, fName);   

    cout << "Last Name: ";
    getline(cin, lName);

    cout << "Age: ";
    cin >> age;
    cin.ignore();

    cout << "University: ";
    getline(cin, uni);

    cout << "Major: ";
    getline(cin, major);

    cout << "Grade Level (1, 2, 3, 4): ";
    cin >> gradeLevel;

    student* studentPtr = nullptr;
    cout << endl;

    if (gradeLevel == 3) {
        creditHours = 60 + (rand() % 30);
        studentPtr = new junior(fName, lName, uni, major, age, creditHours);
     }
     else if (gradeLevel == 2) {
        creditHours = 40 + (rand() % 20);
        studentPtr = new sophmore(fName, lName, uni, major, age, creditHours);
     }
     else {
        cout << "That number hasn't been implmented yet. Sorry" << endl;
        cout << "Here's the student info you entered:" << endl;
        studentPtr = new genericstudent(fName, lName, uni, major, age);
        cout << studentPtr->studentGradeLevelAndInfo();
    }

    if (studentPtr) {
        cout << studentPtr->studentGradeLevelAndInfo();
        delete studentPtr;
    }
    return 0;
}

