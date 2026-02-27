#include<iostream>
using namespace std;

class Cricketer {
    public:
    string name;
    int runs;

    // Cricketer(string name, int runs){ //without this Keyword it will give garbage value
    //     name = name;
    //     runs = runs;
    // }

     Cricketer(string name, int runs){ 
        this->name = name;
        this->runs = runs;
    }
};
int main(){
    Cricketer c1("Virat Kholi", 25000);
    Cricketer c2("Rohit Sharma",18000);
    cout<<c1.name <<endl <<c1.runs <<endl;
    cout<<c2.name <<endl <<c2.runs <<endl;
    return 0;
}