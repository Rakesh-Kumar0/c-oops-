#include<iostream>
using namespace std;

class Loading {
    public:
    void add(int a, int b){
        cout<<a + b <<endl;
    }

    void add(int a, int b, int c){
        cout<<a+ b + c <<endl;
    }
};

int main(){
    Loading a;
    a.add(3,5);
    a.add(3,5,8);
    return 0;

}