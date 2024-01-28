
#include<stdio.h>

class empty
{

};
int main()
{
    empty e1 ,e2;
    printf("\n size of empty class object=%d",sizeof(e1)); //==1 byte
    printf("\n");
    return 0;
}