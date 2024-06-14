#include <stdio.h>
int main()
{
    //void pointer
    void *ptr;
    int a=4;
    float b=5.3;
    ptr=&a;
    printf("Int : %d\n",*((int *)ptr));
    ptr=&b;
    printf("Float : %0.1f\n",*((float *)ptr));

    return 0;
}