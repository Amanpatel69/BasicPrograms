#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);
    cout<<"Sin (100) = "<<sin(100.00)<<"\n";        //Computing sine value.
    cout<<"Cos (100) = "<<cos(100.00)<<endl;        //Computing cosine value.
    cout<<"Tan (100) = "<<tan(100.00)<<endl;        //Computing tangent value.
    cout<<"7 to the power of 6 = "<<pow(7.0,6.0)<<"\n";    //Computing power of one value raised to the other.
    cout<<"Log10 (10) = "<<log10(10.00)<<endl;  //Computing log to the base of 10 value.
    cout<<"Sqrt (2) = "<<sqrt(2.00)<<endl;      //Computing the square root of a value.

    return 0;
}
