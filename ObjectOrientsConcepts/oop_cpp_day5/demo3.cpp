#include<iostream>
using namespace std;
//Operator Overloading
//If we want to use operator with objects of user defined type then we should overload operator
class complex
{
    int real;
    int imag;
    public:
    complex(int r=1,int i=1)
    {
        real=r;
        imag=i;
    }
    void printComplexNumber()
    {
        cout<<"\n Complex Number="<<this->real<<"+j"<<this->imag;
    }
    //c3=c1.operator+(c2);
    complex operator+(complex& c2) //member function
    {
        complex c3;
        c3.real=this->real+c2.real;
        c3.imag=this->imag+c2.imag;
        return c3;
    }
    complex sum(complex& c2)  //sum of two Complex Numbers
    {
        complex c3;
        c3.real=this->real+c2.real;
        c3.imag=this->imag+c2.imag;
        return c3;
    }
    friend complex operator-(complex& c1,complex& c2);
};
//c4=operator-(c1,c2);

complex operator-(complex& c1,complex& c2)
{
    complex c4;
    c4.real=c1.real-c2.real;
    c4.imag=c1.imag-c2.imag;
    return c4;
}

int main()
{
   complex c1(7,6);
   c1.printComplexNumber();

   complex c2(3,2);
   c2.printComplexNumber();

    complex c3,c4;
    //c3=c1.sum(c2); 
    c3=c1+c2;    //==> c3=c1.operator+(c2);
    c3.printComplexNumber();

    c4=c1-c2;  // ==>  c4=operator-(c1,c2);
    c4.printComplexNumber();


   return 0;
}