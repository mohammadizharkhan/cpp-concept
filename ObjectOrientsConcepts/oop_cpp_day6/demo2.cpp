#include<iostream>
using namespace std;
//During inheritance, members of base class inherit into derived class.
//person ==> parent / base
class person
{
    protected: //accessible into derived
        string name;
        int age;
    public:
    person()
    {
        name="Ravi";
        age=24;
    }
    void printPerson()
    {
        cout<<"\n name="<<name<<"  age="<<age;
    }
};

//emp is-a person
//emp => child / derived
class emp : public person
{
    int empid;
    int sal; 
    public:
    emp()
    {
        empid=204;
        sal=20000;
    }
    void printEmp()
    {
        this->printPerson();
        cout<<"  empid="<<empid<<"  sal="<<sal; 
    } 
    void updateName(string newName)
    {
        name=newName;
    } 
};
int main()
{
    emp e1;
    e1.printEmp();
    //Ravi --> Ravee

    //e1.name="Raveeww";  //access of protected is not allowed in main()
    e1.updateName("Ravee");
    e1.printEmp();


    // person p1;
    // p1.printPerson();
    // cout<<"\n";
    return 0;
}