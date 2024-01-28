#include<iostream>
using namespace std;


class shape
{
    public:
    virtual void calArea()
    {
        //?
        cout<<"\n ---shape::calArea()----";
    }
    virtual void input()
    {
        //?
        cout<<"\n ---shape::input()----";
    }
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
    

    // circle c1;
    // c1.input();
    // c1.calArea();

    // rect r1;
    // r1.input();
    // r1.calArea();

    // shape sp1;
    // sp1.input();
    // sp1.calArea();

    cout<<"\n";
    return 0;
}