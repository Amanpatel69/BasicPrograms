#include<iostream>
using namespace std;

class vehicle
{
public:
    vehicle()
    {
        cout<<"This is a vehicle"<<endl;
    }
};

class fourWheeler : public vehicle
{
public:
    fourWheeler()
    {
        cout<<"Object with 4 wheels are vehicles"<<endl;
    }
};

class car : public fourWheeler
{
public:
    car()
    {
        cout<<"Car has 4 wheels"<<endl;
    }
};

int main()
{
    car obj;
    return 0;
}
