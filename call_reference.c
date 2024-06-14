#include <stdio.h>
int main()
{
    int a;
    int *ptr=&a;
    *ptr=10;
    printf("%d\n",a);
    //the pointer is always going to point to the location of a and if we check the data on that location by *ptr and change it then the data in a which also crosspond to the same address gets changed 
    //we can use these in call by reference in fnx's and the normal arguments of fnx are call by values
    int c=1;
    int d=0;
    //now lets make a fnx that flip the values in the input variables
    
    int fnx(int *pt1,int *pt2){
        int temp;
        temp  = *pt1;
        *pt1 = *pt2;
        *pt2=temp;
        return 0;
    }
    fnx(&c,&d);
    printf("c : %d\nd : %d\n",c,d);
    return 0;
}