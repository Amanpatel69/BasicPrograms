/* To determine whether a year is a leap year, follow these steps:

1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
4. The year is a leap year (it has 366 days).
5. The year is not a leap year (it has 365 days).
*/

#include<iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;

    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                cout << "Leap year.\n";
            }
            else
            {
                cout << "Not a Leap Year.\n";
            }

        }
        else
        {
        cout << "Leap Year.\n";
        }
    }
    else
    {
        cout << "Not a leap year.\n";
    }
    return 0;
}