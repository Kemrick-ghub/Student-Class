#include "student.h"
#include <iomanip>

Student::Student(string studentName) {
    name = studentName;
}

void Student::addGrade(double grade) {
    grades.push_back(grade);
    
}

double Student::calculateAverage() {
    if(grades.empty()) {
        return 0.0;
    }

    double sum = 0;
    for(double grade : grades) {
        sum += grade;
    }
    
    return sum / grades.size();
}

void Student::printDetails() {
    cout << "Student Name: " << name << endl;
    double avg = calculateAverage();
    cout << "Average Grade: " << fixed << setprecision(2) << avg << endl;
}