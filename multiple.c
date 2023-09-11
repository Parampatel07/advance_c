#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int studentId;

    void displayStudentInfo() {
        displayInfo();
        cout << "Student ID: " << studentId << endl;
    }
};

class Teacher : public Person {
public:
    string subject;

    void displayTeacherInfo() {
        displayInfo();
        cout << "Subject: " << subject << endl;
    }
};

void main() {
    Student student;
    student.name = "Bob";
    student.age = 20;
    student.studentId = 12345;

    Teacher teacher;
    teacher.name = "Ms. Smith";
    teacher.age = 30;
    teacher.subject = "Mathematics";

    cout << "Student Information:" << endl;
    student.displayStudentInfo();
    
    cout << "\nTeacher Information:" << endl;
    teacher.displayTeacherInfo();
}
