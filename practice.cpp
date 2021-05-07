// Write a program to find max of 3 no. using concept of class constructor.

#include<iostream>
using namespace std;

class max
{
	int a,b,c,maximum;
	public:
		max()
		{
			a=0;
			b=0;
			c=0;
	    }
		void input()
		{
			cout<<"Enter the values: ";
			cin>>a>>b>>c;
		}
		void logic()
		{
			if(a>b)
			{
				if(a>c)
				maximum = a;
				else
				maximum = c;
			}
			else
			{
				if(b>c)
				maximum=b;
			}
			cout<<"\n\nThe greater number is: "<<maximum;
		}
};

int main()
{
	max m;
	m.input();
	m.logic();
	
	return 0;
}
