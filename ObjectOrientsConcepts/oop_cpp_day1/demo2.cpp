#include<stdio.h>

//Function declaration / Prototype / Function Signature
//void printMessage();

//Function Definition
inline void printMessage() //inline ensures faster execution of function.
{
    //function body 
    printf("\n Good morning ....");
    printf("\n Hello .. OM46 ... :)");
}

int main()
{
    //--
    //--
    //---
    printMessage();//Function Call
    //--
    //--
    printMessage();
    //--
    printMessage();
    printMessage();
    printMessage();
    return 0;
}

