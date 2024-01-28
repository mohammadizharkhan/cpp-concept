#include<iostream>
using namespace std;
//Reference alias or another name given to the existing memory location / object.

int main()
{

    int n1;
    n1=5;
    n1=10;

    int& ref=n1;
    ref=15;
    cout<<"\n value of n1="<<n1<<"  address of n1="<<&n1;
    cout<<"\n value of ref="<<ref<<"  address of ref="<<&ref;
    
    cout<<"\n";
    return 0;
}