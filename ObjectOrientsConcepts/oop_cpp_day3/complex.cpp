#include"complex.h"
#include<iostream>
using namespace std;

void complex::show()
{
    cout<<"complex="<<this->real<<"+j"<<this->imag;
}
complex::complex() 
{
	real = 6;
    imag = 4;
}
