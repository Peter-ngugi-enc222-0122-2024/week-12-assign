#include <iostream>
#include <string>
using namespace std;

// Student class
class Student {
private:
    string name;
    int regNo;

public:
    Student(string n, int r) {
        name = n;
        regNo = r;
    }

    string getName() {
        return name;
    }

    int getRegNo() {
        return regNo;
    }
};

// Course class
class Course {
private:
    string courseName;
    string courseCode;

public:
    Course(string n, string c) {
        courseName = n;
        courseCode = c;
    }

    string getCourseName() {
        return courseName;
    }

    string getCourseCode() {
        return courseCode;
    }
};

// Registration class (Dependency)
class Registration {
public:
    void registerStudent(Student& s, Course& c) {
        cout << "=== REGISTRATION DETAILS ===" << endl;
        cout << "Student Name : " << s.getName() << endl;
        cout << "Reg Number   : " << s.getRegNo() << endl;
        cout << "Course       : " << c.getCourseName() << endl;
        cout << "Course Code  : " << c.getCourseCode() << endl;
        cout << "Registration Successful!" << endl;
    }
};

// Main function
int main() {
    Student student1("Peter Ngugi", 222/2024);
    Course course1("Object Oriented Programming", "CSC210");

    Registration reg;
    reg.registerStudent(student1, course1);

    return 0;
}
