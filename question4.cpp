/* WAP for manipulating the objects of 'Distance' class. Support member functions to find difference among distance
   members of two objects and return the output to calling object. */

   #include<iostream>
   using namespace std;

   class dist
   {
       int m,cm;
       public:
       void read()
       {
           cout<<"Enter distance in meter(m): ";
           cin>>m;
           cout<<"Enter distance in centimeter(cm): ";
           cin>>cm;
       }
       void calculation(dist d1, dist d2)
       {
           dist d3;
           d3.m = d1.m - d2.m;
           d3.cm = d1.cm - d2.cm;

           cout<<"Difference is: "<<d3.m<<"m and "<<d3.cm<<"cm"<<endl;
       }
   };
   int main()
   {
       dist d1, d2;
       d1.read();
       d2.read();
       d1.calculation(d1, d2);
       return 0;
   }