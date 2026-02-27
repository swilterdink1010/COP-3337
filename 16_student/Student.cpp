#include "Student.hpp"
#include <string>
#include <iostream>

// Initialize the static data member (REQUIRED)
int Student::total_students = 0;
int Student::next_id = 1000;
double Student::goodGPA = 2.0;

Student::Student(const std::string& n, const double& g) : name(n), gpa(g) {
    total_students++;
    id = "U0000" + std::to_string(next_id);
    next_id++;
}

std::string Student::getName() const {
    return name;
}
double Student::getGPA() const {
    return gpa;
}

void Student::print() const {
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "GPA: " << getGPA() << std::endl;
    std::cout << "Can graduate: " << (canGraduate() ? "Yes" : "No") << std::endl;
}
bool Student::canGraduate() const {
    return (gpa >= goodGPA) ? true : false;
}

int Student::getTotalStudents() {
    return total_students;
}
void Student::setGradReq(const double& gpa) {
    goodGPA = (gpa <= 4.0 && gpa >= 2.0) ? goodGPA = gpa : goodGPA = 2.0;
}