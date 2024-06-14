#include <stdio.h>
#define PI 3.14  // these can be used as like constant 
int main()
{
    int a=8;
    float b=5.3442;
    printf("Hello\n");
    printf("%2.4f",b);//%a.bfloat mean accuracy of b after '.' and a mean space to be given before the varible b and if a is -ve then space after the  variable

    //imp
    /*
        %c character
        %d integer
        %f float
        %l long
        %lf double
        %Lf long double
    */
    //diclaring a variable as constant as like 1,'a' are constant and there value can't be changed 
    const int c=1;

    //then c=2; will give error as c is a const

    // escape sequences in c
    printf("new line \n");
    printf("\ttab");
    printf("hea\bllo");
    /*
    many more are thre like 

    \a  alarm or beep
    \b  backspace
    \f  formfeed
    \n  new line
    \r  cariage return
    \t  horizontal tab
    \v  vertical tab
    \\  backslash
    \'  single quote
    \"  double quote
    \nnn    octal number
    \xhh    hexadecimal number
    \0  null
    "
    */
    return 0;
}
