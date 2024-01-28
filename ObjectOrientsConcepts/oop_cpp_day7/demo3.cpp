#include<iostream>
using namespace std;

//Abstract class
class shape
{
    public:
    virtual void calArea()=0; //Pure virtual function
    virtual void input()=0; //Pure virtual function
};

class square: public shape
{
    int s;


};
//rect is a shape
class rect: public shape
{
    int l,b;
    public:
    void calArea()
    {
       int a;
       a=l*b;
       cout<<"\n area of rect ="<<a;
    }
    void input()
    {
       cout<<"\n enter l and b for rect";
       cin>>l>>b;
    }
};
class circle:public shape
{
    int r;
    public:
    void calArea()
    {
        int a;
        a=3.14*r*r;
        cout<<"\n area of circle ="<<a;
    }
    void input()
    {
        cout<<"\n enter radius";
        cin>>r;
    }
};

int main()
{

    // object of abstract class type "shape" is not allowed: 
    // -- function "shape::calArea" is a pure virtual function 
    // -- function "shape::input" is a pure virtual function
    //shape sp1; //object is not allowed

    //object of abstract class type "square" is not allowed: 
    //-- pure virtual function "shape::calArea" has no overrider 
    //-- pure virtual function "shape::input" has no overrider
   // square sq1;




    int ch;
    shape *sptr=NULL;
    circle c1;
    rect r1;
    do
    {
        cout<<"\n 1:rect 2:circle  0:exit";
        cin>>ch;
        switch (ch)
        {
            case 1://rect
             sptr=&r1;  //base class pointer can hold the object of derived
             break;
            case 2://circle
             sptr=&c1;  //base class pointer can hold the object of derived
            break;
        }
        if(sptr!=NULL)
        {
            sptr->input();
            sptr->calArea();
        }
        sptr=NULL;
    } while (ch!=0);

    cout<<"\n";
    return 0;
}