#include<iostream>
using namespace std;

class Car{
    public:
        string brand;
        int speed;

    void drive(){
        cout<<"driving at "<< speed<< " k,/h\n";
        cout<<"the brand of the car is "<<brand<<endl;
    }

};

int main(){
    Car c1;
    c1.brand = "BMW";
    c1.speed = 1200;

    c1.drive();
}