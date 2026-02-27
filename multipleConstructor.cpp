#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rollNo;
    float gpa;

    Student(){ // default constructor

    }
    Student(string n){ //with one parameter
        name = n;
    }
    Student(string n, int r){ //  with two parametrised constructor
        name = n;
        rollNo = r;
    }

    Student(string n, int r, float g){ // with three parametrised constructor
        name = n;
        rollNo = r;
        gpa = g;
    }
};
int main(){

    Student s1 ; // this object is create by default constructor
    s1.name = "Mukesh Kumar";
    s1.rollNo = 26;
    s1.gpa = 6.45;
    cout<<s1.name <<endl <<s1.rollNo <<endl <<s1.gpa <<endl;

    Student s2("Ankita");  // this object is created by one parametersized constructor
    s2.rollNo = 42;
    s2.gpa = 7.25;
    cout<<s2.name <<endl <<s2.rollNo <<endl <<s2.gpa <<endl;

    Student s3("Rakesh", 24); // this object is create by  two parameterize constructor
    s3.gpa = 8.45;
    cout<<s3.name <<endl <<s3.rollNo <<endl <<s3.gpa <<endl;

   

    Student s4("Suraj",29,5.25); // this object is created by three parameter constructor
     cout<<s4.name <<endl <<s4.rollNo <<endl <<s4.gpa <<endl;
}