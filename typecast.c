#include <stdio.h>
int main(){
    int a=12.98;
    printf("%d\n",a);//output 12
    float b=12/5;
    // as any operation between two integr will always result in integer so 12/5 will be 2.000000
    printf("%f\n",b);
    //so 12/5 is a int 
    //to make it a float we can use type conversion
    float c=(float)12/5;
    printf("%f\n",c);//2.400000
    printf("%d\n",(12/5)*7);//output 14
    printf("%f",((float)12/5)*7);//output 16.800001
     
}