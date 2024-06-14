#include <stdio.h>
int main()
{
    int a[]={1,2,3};
    int fnx(int b[]){
        b[0]=11;
        b[1]=22;
        return 0;

    }
    //for a array as a input to the fnx if we change the parameters then the argument value mean the actual array also changes because array is based on pointers so it have those identities

    fnx(a);//as a acts as the base address of array and b[] acts as like a base address holder so the address are same we can also use int *ptr
    printf("%d\n",a[0]);


    return 0;
}