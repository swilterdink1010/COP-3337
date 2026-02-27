#include "Student.hpp"
#include <iostream>

int main(void) {
    // Print the total number of students
    Student s1 = Student("Anna", 2.9);
    Student s2 = Student("Nick", 3.5);
    
    std::cout << "Total students: " << Student::getTotalStudents() << std::endl;

    Student::setGradReq(3);

    s1.print();
    s2.print();

    return 0;
}