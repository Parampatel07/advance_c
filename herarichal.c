#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(const string& n, int a) : name(n), age(a) {}

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : virtual public Person {
public:
    int studentId;

    Student(const string& n, int a, int id) : Person(n, a), studentId(id) {}

    void displayStudentInfo() {
        displayInfo();
        cout << "Student ID: " << studentId << endl;
    }
};

class Teacher : virtual public Person {
public:
    string subject;

    Teacher(const string& n, int a, const string& sub) : Person(n, a), subject(sub) {}

    void displayTeacherInfo() {
        displayInfo();
        cout << "Subject: " << subject << endl;
    }
};

class TeachingAssistant : public Student, public Teacher {
public:
    TeachingAssistant(const string& n, int a, int id, const string& sub) : Person(n, a), Student(n, a, id), Teacher(n, a, sub) {}
};

void main() 
{
    TeachingAssistant ta("Alice", 25, 12345, "Mathematics");
    cout << "Teaching Assistant's Information:" << endl;
    ta.displayStudentInfo();
    ta.displayTeacherInfo();
}
