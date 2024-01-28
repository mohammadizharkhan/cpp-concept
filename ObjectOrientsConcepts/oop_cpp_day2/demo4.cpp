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
        this->hr=h;
        this->min=m;
        this->sec=s;
    }
    void initTime()
    {
        hr=0;
        min=0;
        sec=0;
    }
    void printTime()
    {
        printf("\n time =%d:%d:%d ",this->hr,this->min,this->sec);
    }
    void acceptTime()  //*this
    {
        printf("\n enter time");
        scanf("%d%d%d",&this->hr,&this->min,&this->sec);
    }
    void incrTimeByOneSec()
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
    time t1;   //==>Parameterless constructor is called
    t1.printTime();

    time t2;    //==>Parameterless constructor is called
    t2.printTime();

    // 8:30:45
    time t_p(8,30,45); //==>//Parameterized constructor is called
    t_p.printTime();

    // 9:15:30
    time t_s(9,15,30); //==>//Parameterized constructor is called
    t_s.printTime();

    return 0;
}