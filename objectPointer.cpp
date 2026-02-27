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
    Cricketer* p1 = &c1;
    cout<<(*p1).runs <<endl;
    cout<<c1.avg<<endl;
    (*p1).avg = 77.5;
    cout<<c1.avg<<endl;

}