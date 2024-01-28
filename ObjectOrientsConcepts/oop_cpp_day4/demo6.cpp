#include<iostream>
using namespace std;

class complex
{
    int real;
    int imag;
    public:
    complex(int r=1,int i=1)
    {
        cout<<"\n ---------complex(int,int)--------";
        real=r;
        imag=i;
    }
    void printComplexNumber()
    {
        cout<<"\n Complex Number="<<this->real<<"+j"<<this->imag;
    }
    ~complex()
    {
        cout<<"\n ---------~complex()--------";
    }
};
int main()
{
    complex *cptr=new complex(7,6); //Heap Based object 
    cptr->printComplexNumber();
    delete cptr;
    cptr=NULL;
    return 0;
}