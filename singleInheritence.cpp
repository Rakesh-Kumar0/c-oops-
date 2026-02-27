#include<iostream>
using namespace std;

class Scooty {
    public:
    int topSpeed;
    float mielage;
};

class Bike : public Scooty {
    public:
    int gear;
};
int main(){
    Bike b1;
    b1.topSpeed = 180;
    return 0;
}