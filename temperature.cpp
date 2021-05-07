#include<iostream>
using namespace std;

class temp
{
    double temp, cel, fah;
    public:
    void celsius();
    void fahrenheit();
};

void temp :: celsius(void)
{
    cout << "\n\nPROGRAM TO CONVERT CELSIUS INTO FAHRENHEIT" << endl << endl;
    cout << "Enter temperature in Celsius: ";
    cin >> cel;

    temp = (cel * 9 / 5) + 32;
    cout << temp << endl;
}
void temp :: fahrenheit(void)
{
    cout << "\n\nPROGRAM TO CONVERT FAHRENHEIT INTO CELSIUS" << endl << endl;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fah;

    temp = (fah - 32) * 5 / 9;
    cout << temp << endl;
}

int main()
{
     string choice = "";
    do
    {
    temp obj;

    int x, y;
    cout << "\n\nMake a choice: " << endl << "0. Celsius to Fahrenheit." << endl << "1. Fahrenheit to Celsius." << endl;
    cin >> x;

    if(x==0)
    obj.celsius();
    else if(x==1)
    obj.fahrenheit();
    else
    cout << "\n\nRe-run the program and enter a valid choice!!" << endl << endl;
    cout << "Wanna Continue?? ";
    cin >> choice;
    } 
    while (choice != "n");

    return 0;
}