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

class FourWheeler
{
public:
    FourWheeler()
    {
        cout<<"This is a 4 Wheeler"<<endl;
    }
};

class car : public vehicle, public FourWheeler
{
};

int main()
{
    car obj;
    return 0;
}
