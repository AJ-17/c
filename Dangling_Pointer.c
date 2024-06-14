#include <stdio.h>
int main()
{
    int *ptr;
    {
        int a=0;
        ptr=&a;
    }
    //anything inside {} will end after the execution of it once 
    //now coming outside the {} ptr will be a Dangling pointer

    //or if we free a space then the pointer there beome Dangling
    //to avoid bugs in program we should set the value of ptr to null to avoid the bugs
    ptr=NULL;
    
    return 0;
}