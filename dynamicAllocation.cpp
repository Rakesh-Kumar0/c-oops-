#include<iostream>
using namespace std;

class Cricketer {
    public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};
int main(){
    Cricketer c1("Virat Kholi", 25000, 55.5);
    Cricketer* c2 = new Cricketer("Rohit Sharma", 18000, 45.26);
    cout<<c1.name<<endl;
    cout<<c2->name<<endl;
    

}