#include<iostream>
using namespace std;

class complex
{
    int real;
    int imag;
    public:
    complex(int r=1,int i=1)
    {
        cout<<"\n -----complex(int,int)-----";
        real=r;
        imag=i;
    }
    complex(const complex& refc1)  //Copy constructor 
    {
        cout<<"\n -----complex(complex&)-----";
        real=refc1.real;
        imag=refc1.imag;
        //refc1.real=88;
    }
    void printComplexNumber()
    {
        cout<<"\n Complex Number="<<this->real<<"+j"<<this->imag;
    }
};
int main()
{
   complex c1(7,6);
   cout<<"\n  c1->";
   c1.printComplexNumber();
    
   complex cc(c1);  //complex cc=c1;  //call to Copy constructor 
   cout<<"\n  cc->";
   cc.printComplexNumber();
   return 0;
}