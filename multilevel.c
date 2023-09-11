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

class TeachingAssistant : public Student, public Teacher {
public:
    void displayAssistantInfo() {
        displayStudentInfo();
        displayTeacherInfo();
    }
};

int main() {
    TeachingAssistant ta;
    ta.name = "Alice";
    ta.age = 25;
    ta.studentId = 12345;
    ta.subject = "Mathematics";

    cout << "Teaching Assistant's Information:" << endl;
    ta.displayAssistantInfo();

    return 0;
}
