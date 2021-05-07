#include<iostream>

using namespace std;

class person
{
protected:
    string phone;
    char name[15],address[20];
public:
    void read()
    {
        cout<<"---------------------------------"<<endl<<endl;
        cout<<"Enter your Name: ";
        cin>>name;
        cout<<"\nEnter your Address: ";
        cin>>address;
        cout<<"\nEnter your Phone Number: ";
        cin>>phone;

        cout<<"\n\n"<<name<<", ";
    }
};
class student:public person
{
public:
    int roll, semester;
    char course[10];
    void read1()
    {
        cout<<"Enter your Roll Number: ";
        cin>>roll;
        cout<<"\nEnter your Semseter: ";
        cin>>semester;
        cout<<"\nEnter your Course: ";
        cin>>course;
    }
    void display()
    {
        cout<<"\n\n-------------------------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Phone Number: "<<phone<<endl;
        cout<<"Roll Number: "<<roll<<endl;
        cout<<"Semester: "<<semester<<endl;
        cout<<"Course: "<<course<<endl;
    }
};
main()
{
    student s;
    s.read();
    s.read1();
    s.display();
    cout<<"--------------------------------------";
}
