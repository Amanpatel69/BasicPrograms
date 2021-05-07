#include<iostream>
using namespace std;

class media
{
protected:
    char title[20],pub[20];
public:
    virtual void read()
    {
        cout<<"Enter Title: "<<endl;
        cin>>title;
        cout<<"Enter Publication Name: "<<endl;
        cin>>pub;
    }
    virtual void show()
    {
        cout<<"Title Name: "<<title<<endl<<"Publication Name: "<<pub<<endl;
    }
};

class book:public media
{
    int bno;
    char name[20];
public:
    void read()
    {
        cout<<"Enter the name of the book: "<<endl;
        cin>>name;
        cout<<"How many pages are there in the book: "<<endl;
        cin>>bno;
    }
    void show()
    {
        cout<<"Book Name: "<<name<<endl<<"Number of page: "<<bno<<endl;
    }
};

class tape:public media
{
    int tno,h,m,s;
public:
    void read()
    {
        cout<<"Enter the tape number: "<<endl;
        cin>>tno;
        cout<<"Playing time of the tape [hour:min:sec] "<<endl;
        cin>>h>>m>>s;
    }
    void show()
    {
        cout<<"Tape Number: "<<tno<<endl<<"Play Time: "<<h<<"hour"<<m<<"min"<<s<<"sec"<<endl;
    }
};

main()
{
    media m, *m1;
    book b;
    tape t;
    m1=&m;
    m1->read();
    m1->show();
    m1=&b;
    m1->read();
    m1->show();
    m1=&t;
    m1->read();
    m1->show();
}
