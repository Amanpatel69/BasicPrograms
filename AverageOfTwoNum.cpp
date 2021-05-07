#include<iostream>

using namespace std;

int main()
{
    int num1, num2, sum, average;
    cout << "Enter any two number: ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    average = sum/2;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}