#include<iostream>
using namespace std;
//If we want to write generic program in C++, then we should use template

class complex
{
    int real;
    int imag;
    public:
    complex(int r=1,int i=1)
    {
        this->real=r;
        this->imag=i;
    }
    void printComplexNumber()
    {
        cout<<"  "<<this->real<<"+j"<<this->imag;
    } 
};


template<class T>
 void mySwap(T& a1,T& b1)
 {
     T temp = a1; 
     a1=b1; 
     b1=temp;
 }

 

int main()
{

    complex a(11,22), b(88,99);
    cout<<"\n---------before swap--------";
    cout<<"\n a=";
    a.printComplexNumber();
    cout<<"\n b=";
    b.printComplexNumber();
    mySwap(a,b);
    cout<<"\n---------after swap--------";
    cout<<"\n a=";
    a.printComplexNumber();
    cout<<"\n b=";
    b.printComplexNumber();

    // char a1='A',b1='z';
    // cout<<"\n before swap a1="<<a1<<"  b1="<<b1;
    // mySwap(a1,b1);
    // cout<<"\n after swap a1="<<a1<<"  b1="<<b1;


    // int a=11,b=99;
    // cout<<"\n before swap a="<<a<<"  b="<<b;
    // mySwap(a,b);
    // cout<<"\n after swap a="<<a<<"  b="<<b;
    // cout<<"\n";


    return 0;
}