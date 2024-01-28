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
    //Virtual function is the function which is  called 
    //depending on type of object rather than type of pointer 
    virtual void accept()
    {
        cout<<"\n enter name and age";
        cin>>name>>age;
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
    void accept()
    {
        person::accept(); //2
        cout<<"\n enter empid and sal";
        cin>>empid>>sal;
    }
};
int main()
{
    emp e1;
    person *pptr=NULL;
    pptr=&e1;  //base class pointer can hold the object of derived
    pptr->printPerson();
    pptr->accept(); //    4=>emp
    pptr->printPerson();
    //pptr->updateName();



    // emp e1;
    // emp *eptr=NULL;
    // eptr = &e1;
    // eptr->printEmp();//4
    // eptr->accept(); //4
    // eptr->printEmp();//4



    // person p1;
    // person *pptr=NULL;
    // pptr=&p1;
    // pptr->printPerson();
    // pptr->accept();  //==>2
    // pptr->printPerson();
    

    return 0;
}