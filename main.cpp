#include <iostream>

#define MAX_SPECIALITIES 10
#define MAX_STUDENTS 450

using std::string;
using std::move;
using std::copy;

class Person {
private:
    string fullname;
    int age;
    int money;
};

class Speciality {
private:
    int faculty_num;
    int number;
    string title;
    int budget_places;
    int contract_places;
};

class Student: public Person {
private:
    Speciality speciality;
    int entrance_year;
    int left_year;
    double average_mark;
};

class Faculty {
private:
    Person dean;
    Person deputy_dean;
    Speciality specialities[MAX_SPECIALITIES];
    Student students[MAX_STUDENTS];
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
