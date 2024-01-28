#include<iostream>
using namespace std;
//call By Reference
 void mySwap(int& a1,int& b1)
 {
     int temp = a1; 
     a1=b1; 
     b1=temp;
 }

int main()
{
    int a=11,b=99;
    cout<<"\n before swap a="<<a<<"  b="<<b;
    mySwap(a,b);
    cout<<"\n after swap a="<<a<<"  b="<<b;
    cout<<"\n";
    return 0;
}