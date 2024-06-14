#include <stdio.h>
int main()
{
    //when pointer have the garbage address while initialization then its a wild pointer
    int *ptr;//its a wild 
    *ptr=21;
    int a=4;
    ptr=&a; //not wild now


    return 0;
}