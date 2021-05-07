#include<iostream>

using namespace std;

class person
{
	protected:
		int phone;
		char name[10],address[15];
	public:
		void read()
		{
			cout<<"Enter name of the person: "<<endl;
			cin>>name;
			cout<<"Enter address of the person: "<<endl;
			cin>>address;
			cout<<"Enter phone number of the person: "<<endl;
			cin>>phone;
			
			cout<<name<<", ";
		}
};
class student:public person
{
	public:
		int roll,semester;
		char course[10];
		void read1()
		{
			cout<<"Enter roll no of the student: "<<endl;
			cin>>roll;
			cout<<"Enter course name of the student: "<<endl;
			cin>>course;
			cout<<"Enter semester number of the student: "<<endl;
			cin>>semester;
		}
		void display()
		{
			cout<<"Name = "<<name<<endl<<"Address = "<<address<<endl<<"Phone = "<<phone<<endl;
			cout<<"Roll No. = "<<roll<<endl<<"Course = "<<course<<endl<<"Semester = "<<semester<<endl;
		}
};
main()
{
	student s;
	s.read();
	s.read1();
	s.display();
}
