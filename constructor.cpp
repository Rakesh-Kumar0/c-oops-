#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rollNo;
    float gpa;

    Student(){ // default constructor

    }
    Student(string n, int r, float g){ // parametrised constructor
        name = n;
        rollNo = r;
        gpa = g;
    }
};
int main(){
    Student s1("Rakesh", 24, 8.50); // this object is create by parameterize constructor
    // s1.name = "Rakesh Kumar";
    // s1.rollNo = 24;
    // s1.gpa = 8.45;
    cout<<s1.name <<endl <<s1.rollNo <<endl <<s1.gpa <<endl;

    Student s2 ; // this object is create by default constructor
    s2.name = "Mukesh Kumar";
    s2.rollNo = 26;
    s2.gpa = 6.45;
    cout<<s2.name <<endl <<s2.rollNo <<endl <<s2.gpa <<endl;
}