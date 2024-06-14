#include  <stdio.h>
int d=1;
int factorial(int a)
{
    if(a==1 || a==0){
        return d;
    }
    d=d*a;
    factorial(a-1);


    
}
int main()
{   
    int b=0,c;
    printf("Enter the number : ");
    scanf("%d",&c);
    printf("Factorial of %d is %d\n",c,factorial(c));

    return 0;
}