#include<stdio.h>

//class in cpp
class time
{
    private:
        int hr; //4
        int min; //4
        int sec; //4
    public:
    //constructor overloading
    time() //Parameterless constructor
    {
        printf("\n -----time()----");
        hr=0;
        min=0;
        sec=0;
    }
    time(int h, int m, int s)//Parameterized constructor
    {
        printf("\n -----time(int,int,int)----");
        hr=h;
        this->min=m;
        this->sec=s;
    }
    void printTime()//Facilitator
    {
        printf("\n time=%d:%d:%d ",this->hr,this->min,this->sec);
    }
    void acceptTime()  //Facilitator
    {
        printf("\n enter time");
        scanf("%d%d%d",&this->hr,&this->min,&this->sec);
    }
    //min=15;
    //Mutators / setter : modify state of object
    void setMin(int min)
    {
        this->min=min;
    }
    void setHr(int hr)
    {
        this->hr=hr;
    }
    void setSec(int sec)
    {
        this->sec=sec;
    }
    //inspector/getter : read the data member 
    int getSec()
    {
        return this->sec;
    }
    int getHr()
    {
        return this->hr;
    }
    int getMin()
    {
        return this->min;
    }
    void incrTimeByOneSec()//Facilitator
    {
        this->sec++;
        if(sec>=60) 
        {
            min++;
            sec=0;
        }
        if(min>=60)
        {
            hr++;
            min=0;
        }
        if(hr>=24)
            hr=0;
            
    }
    ~time()//Destructor : used to release the resources
    {
        printf("\n ----- ~time()----");
    }
};//end of class
int main()
{  
    // 8:30:45
    time t_p(8,30,45); //==>//Parameterized constructor is called
    t_p.printTime();
    // t_p.min=15;
    t_p.setMin(15); //Mutators / setter function called
    t_p.printTime();
   // int s=t_p.sec;
    int s=t_p.getSec();//inspector/getter function called 
    printf("\n sec=%d",s);




    return 0;
}