#include<stdio.h>

//Function Overloading
void printValue(int n)
{
    printf("\n value of n=%d",n);
}
//Return type is not considered for function overloading.
// int printValue(int n)
// {
//     printf("\n value of n=%d",n);
// }
void printValue(char ch)
{
    printf("\n value of ch=%c",ch);
}
void printValue(int n1,int n2)
{
    printf("\n value of n1=%d  n2=%d",n1,n2);
}
void printValue(int n,char ch)
{
    printf("\n value of n=%d  ch=%c",n,ch);
}
void printValue(char ch, int n)
{
    printf("\n value of ch=%c n=%d ",ch,n);
}
int main()
{
    printValue(10);
    printValue('A');
    printValue(11,22);
    printValue(33,'Z');
    printValue('K',44);
    return 0;
}