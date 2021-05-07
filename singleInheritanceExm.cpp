#include<iostream>
using namespace std;

class vehicles
{
public:
    vehicles()
    {
        cout<<"This is vehicle"<<endl;
    }
};

class car : public vehicles
{

};

int main()
{
    car obj;
    return 0;
}
