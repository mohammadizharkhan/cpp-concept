#include<stdio.h>
//wchar_t :- it can store 16 bit character. It takes 2 bytes in memory.
int main()
{
    wchar_t wch='65';
    printf("\n vlaue of wch=%c  sizeof wch=%d",wch,sizeof(wch));
    return 0;
}