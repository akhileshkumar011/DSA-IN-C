// shallow copy constructor,deep copy constructor , 

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    // double cgpa;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        // this->cgpa = cgpa;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Shallow Copy Constructor
    Student(Student &obj) {
        this->name = obj.name;
        // this->cgpa = obj.cgpa;
        cgpaPtr = new double;
        //this->cgpaPtr = obj.cgpaPtr;
        *cgpaPtr = *(obj.cgpaPtr);
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

    //s1.getInfo();
    //*s2.cgpaPtr = 9.5; // Modifying the cgpa of s2
   // s1.getInfo(); // This will show the modified cgpa of s1 as well due to shallow copy

   s1.getInfo();
   *(s2.cgpaPtr) = 9.5; // Modifying the cgpa of s2
    s1.getInfo(); // This will show the modified cgpa of s1 as well
    s2.name = "Akhilesh"; // Modifying the name of s2
    s2.getInfo(); // This will show the modified name of s2 as well
}