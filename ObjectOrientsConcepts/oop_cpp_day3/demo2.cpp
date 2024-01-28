#include<stdio.h>
//Namespace is designed to avoid name ambiguity and grouping the code.


int g=10; // global members. 

namespace ns1
{
    int connector=3307;
    namespace nns   //Nested Namespace	
    {
        int value=22;
    }
}
namespace ns2
{
    int connector=2091;
    int num1=11;
    int num2=22;
    int num3=23;
    int num4=24;
    int num5=25;
}

int main()
{
    printf("\n g=%d",g);//access global members.
    printf("\n g=%d",::g);//access global members.
    printf("\n ns1::connector=%d", ns1::connector);
    printf("\n ns2::connector=%d", ns2::connector);
    printf("\n ns1::nns::value=%d",ns1::nns::value);
    printf("\n ns2::num3=%d",ns2::num3);

    //If we want to access members of namespace frequently
    //then we should use “using” directive.

    using namespace ns2;
    printf("\n num1=%d",num1);
    printf("\n num4=%d",num4);


    return 0;
}
