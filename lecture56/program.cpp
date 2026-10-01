#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;

public:
     string name;
     string dept;
     string subject;

    //non-parameterised
    Teacher(){
        cout<<" hii i am a constructor : "<<endl;
    }

    //parameterised
    // Teacher(string n, string d , string s, double sal){
    //     name = n;
    //     dept = d;
    //     subject = s;
    //     salary = sal;
    // }
    Teacher(string name, string dept , string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
       this->salary = salary;
    }    
   

    // copy constructor 
    Teacher( const Teacher &obj){
        // obj.name = "Akhilesh";
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
       this->salary = obj.salary;
    }

    // void changeDept(string newDept) {
    //     dept = newDept;
    // }

    void getinfo(){
        cout<<"name : "<<name<<endl;
        cout<<"subject : "<<subject <<endl;
    }

    // // Setter
    // void setSalary(double s) {
    //     salary = s;
    // }

    // // Getter
    // double getSalary() {
    //     return salary;
    // }
};
int main() {
     Teacher t1("Sharadha" ,"computer Science" ,"C++",25000);  
    // t1.name = "Shradha";
    // t1.subject = "C++";
    // t1.dept = "Computer Science";
    // t1.setSalary(25000);
    // cout << t1.name << endl;
    // cout << t1.getSalary() << endl;

 // default copy constructor
    Teacher t2(t1);
     t2.getinfo();


    return 0;
}