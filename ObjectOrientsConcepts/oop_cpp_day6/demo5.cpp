#include<iostream>
using namespace std;
//person ==> parent / base
class person
{
    protected:
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
    person *pptr=NULL;
    pptr=&e1;  //base class pointer can hold the object of derived
    pptr->printPerson();



    // emp e1;
    // emp *eptr=NULL;
    // eptr = &e1;
    // eptr->printPerson();
    // eptr->updateName("Ravee");
    // eptr->printEmp();



    // person p1;
    // person *pptr=NULL;
    // pptr=&p1;
    // pptr->printPerson();
    

    return 0;
}