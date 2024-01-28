#include<iostream>
using namespace std;

class complex
{
    int* ptrReal;
    int imag;
    public:
    complex(int r=1,int i=1)
    {
        cout<<"\n ---------complex(int,int)--------";
        this->ptrReal=new int; //real
        *this->ptrReal=r;
        this->imag=i;
    }
    complex(const complex& c1)  //Deep Copy copy constructor 
    {
        cout<<"\n ---------complex(complex)--------";
        ptrReal=new int;
        *ptrReal=*c1.ptrReal;
        imag=c1.imag;
    }
    void printComplexNumber()
    {
        cout<<"\n Complex Number="<<*this->ptrReal<<"+j"<<this->imag;
    }
    ~complex()  
    {
        cout<<"\n ---------~complex()--------";
        if(this->ptrReal!=NULL)
        {
            delete this->ptrReal;
            this->ptrReal=NULL;
        }
    }
};
int main()
{
    complex c1(7,6);
    c1.printComplexNumber();

    complex cc(c1);
    cc.printComplexNumber();
    
    return 0;
}