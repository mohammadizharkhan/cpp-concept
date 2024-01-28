#include<iostream>
using namespace std;
//Dependant Object : Car Object
//Dependency Object : Engine Object

//car has-a engine
class engine
{
    int cc;
    int fuel;
    public:
    void printEngine()
    {
        cout<<"\n engine cc="<<cc<<" fuel="<<fuel;
    }
    void acceptEngine()
    {
        cout<<"\n enter engine cc and fuel";
        cin>>cc>>fuel;
    }
};
class car
{
    int price;
    engine e; //e is object of engine //Association
    public:
    void printCarInfo()
    {
        cout<<"car price="<<price;
        e.printEngine();   
    }
    void acceptCar()
    {
        cout<<"\n enter car price";
        cin>>price;
        e.acceptEngine();
    }
};

int main()
{

    car c1;
    c1.acceptCar();
    c1.printCarInfo();


    // engine e1;
    // e1.acceptEngine();
    // e1.printEngine();

    cout<<"\n";
    return 0;
}