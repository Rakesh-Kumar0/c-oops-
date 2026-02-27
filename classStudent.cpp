#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rollNo;
    float gpa;
};
int main(){
    Student s1 ;
    s1.name = "Rakesh Kumar";
    s1.rollNo = 24;
    s1.gpa = 8.45;
    cout<<s1.name <<endl <<s1.rollNo <<endl <<s1.gpa <<endl;

    Student s2 ;
    s2.name = "Mukesh Kumar";
    s2.rollNo = 26;
    s2.gpa = 6.45;
    cout<<s2.name <<endl <<s2.rollNo <<endl <<s2.gpa <<endl;
}