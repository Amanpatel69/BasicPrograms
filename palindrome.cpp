#include<iostream>
using namespace std;

int main()
{
	int a,b,c=0,temp;
	cout<<"Program to check whether a given no. is Palindrome or not!";
	cout<<"\n\nEnter a number: ";
	cin>>a;
	temp=a;
	while(a!=0)
	{
		b=a%10;
		c=(c*10)+b;
		a=a/10;
	}
	if(c==temp)
	{
	cout<<"\n\nThe given no. "<<temp<<" is Palindrome!";
 	}
	else
	{
	cout<<"\n\nThe given no. "<<temp<<" is not Palindrome!";
	}
	return 0;
	
}
