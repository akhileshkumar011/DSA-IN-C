#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Shallow Copy Constructor
    Student(Student &obj) {
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("rahul kumar", 8.9);

    // Shallow Copy Constructor
    Student s2(s1); 
}