#include <iostream>
#include "student.h"
using namespace std;

int main() {
    Student a("Mark Rover");

    a.addGrade(90.98);
    a.addGrade(50.79);
    a.addGrade(77.8);
    a.addGrade(60);
    a.addGrade(90.7);
    a.addGrade(100);

    a.printDetails();

    return 0;
}