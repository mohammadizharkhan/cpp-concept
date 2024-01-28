#include<iostream>
using namespace std;

class complex
{
    int real;
    int imag;
    static int count;//shared  data member between all objects
    public:
    complex(int r=1,int i=1)
    {
        real=r;
        imag=i;
        count++; //c1=1  //c2=2  //c3=3
    }
    //class level function
    static void printCount()
    {
        //This pointer is not available in static member function
        //this->  error
        cout<<"\n value of count="<<count<<"  address of count="<<&count;
    }
    void printComplexNumber()
    {
        cout<<"\n Complex Number="<<this->real<<"+j"<<this->imag;
    }
};//end of class
int complex::count=0; //global definition of static data member
int main()
{
    complex::printCount();

   complex c1;
   cout<<"\n size of c1="<<sizeof(c1); //==>8
   c1.printCount();

   complex c2;
   c2.printCount();

   complex c3;
   c3.printCount();

   return 0;
}