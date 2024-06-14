#include <stdio.h>
int fnx()
{
    static int a=zero;  // if we don't use =0 still by default value of static variable will be 0
    //static variable declaration line is only readed once when for the first time a fnx is called
    //the value of a can't be a return value of fnx or variable it will be a constant 
    printf("Value of a is %d\n",a);
    a++;
    return 0;
}
int main()
{
    fnx();//static variable got declared as 0
    fnx();//static var declaration line got ignored when the fnx is recalled and the privous value is taken like after a++ it will be 1
    fnx();
    fnx();
    fnx();
    fnx();
    fnx();
    fnx();

/*
Output

Value of a is 0
Value of a is 1
Value of a is 2
Value of a is 3
Value of a is 4
Value of a is 5
Value of a is 6
Value of a is 7


*/
    return 0;
}