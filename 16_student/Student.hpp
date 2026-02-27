#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student { 
public:
    Student(const std::string& n, const double& g);
    
    std::string getName() const;
    double getGPA() const;
    
    void print() const;
    bool canGraduate() const;

    static int getTotalStudents();
    static void setGradReq(const double& gpa);

private:
    std::string name;
    double gpa;
    std::string id;

    static int total_students;
    static int next_id;
    static double goodGPA;
};

#endif