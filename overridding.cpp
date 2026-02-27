#include<iostream>
using namespace std;

class Scooty {
    public:
    int topSpeed;
    float mielage;

   virtual void sound(){ // without virturl keyword it will consider this not bike wala sound
        cout<<"vroom vroom" <<endl;
    }

    private:
    int bootspace;
};

class Bike : public Scooty {
    public:
    int gear;
    void sound(){
        cout<<"dhroom dhroom"<<endl;
    }
};
int main(){
    Scooty* b = new Bike();
    b->sound();
    return 0;
}