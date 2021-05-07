//Write a program to read a matrix of size m*n from the keyboard and display the same on the screen using function.

#include<iostream>
#include<iomanip>
using namespace std;


void matrix(int m, int n)
{
    int i;
    float **p,s;
    p=new float*[m];
    for(int i=0;i<m;i++)
    {
        p[i]=new float[n];
    }
    cout<<"Enter "<<m<<" by "<<n<<" matrix elements one by one "<<endl;
    for(i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            float value;
            cin>>value;
            p[i][j]=value;
        }
    }
    cout<<"The given matrix is: "<<endl;
    for(i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int r,c;
    cout<<"Enter the size of matrix: ";
    cin>>r>>c;
    matrix(r,c);
    return 0;
}
