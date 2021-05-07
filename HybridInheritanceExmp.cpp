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

class fare
{
public:
    fare()
    {
        cout<<"Fare of vehicle"<<endl;
    }
};

class car : public vehicle
{
};

class bus : public vehicle, public fare
{
};

int main()
{
    bus obj2;
    return 0;
}
