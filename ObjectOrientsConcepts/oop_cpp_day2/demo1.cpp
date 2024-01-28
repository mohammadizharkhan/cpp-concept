#include<stdio.h>
//struct in cpp
struct time
{
    //private: Accessible only within the struct
    private:
        int hr;
        int min;
        int sec;
    //public: Accessible within & outside struct
    public:
    void printTime()
    {
        printf("\n time =%d:%d:%d ",hr,min,sec);
    }
    void acceptTime()
    {
        printf("\n enter time");
        scanf("%d%d%d",&hr,&min,&sec);
    }
    void incrTimeByOneSec()
    {
        sec++;
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
};//end of struct
int main()
{  
    //int n1;
    //time is struct  ===> t1 is called as vari of time struct
    time t1;
    //12:35:45
    //t1.hr=12;
    //t1.min=35;
    //t1.sec=45;
   // t1.printTime();
    t1.acceptTime();
    //t1.hr=20;///
    t1.printTime();
    return 0;
}