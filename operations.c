//operators
#include <stdio.h>
int main()
{
    int a,b;
    printf("size : %ld , addr :c %p",sizeof(a),&a);
    printf("{ Binary operator }\n");
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("a + b : %d\n", a+b);
    printf("a - b : %d\n", a-b);
    printf("a * b : %d\n", a*b);
    printf("a / b : %d\n\n", a/b);// if both are integer then result will be integer and even if one is flot then the result will be flot
   // printf("a % b : %d\n", a%b);
    
    printf("{ Relational operator }\n");
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    // 1 means true 0 means false  note null values ,0, false are 0
    printf("a == b : %d\n", a==b);
    printf("a >= b : %d\n", a>=b);
    printf("a <= b : %d\n", a<=b);
    printf("a > b : %d\n", a>b);
    printf("a < b : %d\n", a<b);
    printf("a != b : %d\n", a!=b);

    printf("{ Logical operator }\n");
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    
    printf("a && b : %d\n", a && b );
    printf("a || b : %d\n", a || b);
    printf("!a,!b : %d, %d\n",!a,!b);
    printf("a^b : %d\n\n",a^b);//xor
    
    printf("{ Bitwise operator }\n");
    printf("Enter the value of a in binary: ");
    scanf("%d",&a);
    printf("Enter the value of b in binary: ");
    scanf("%d",&b);

    printf("a << b : %d\n", a<<b);// 101 <<1 = 1010 same as  shl in these lsb become 0 and msb goes to cf
    printf("a >> b : %d\n", a>>b);// 101 >>2 = 001  same as shr in these lsb goes to cf and msb become 0 
    printf("~a,~b : %d,%d\n\n",~a,~b);//bitflip
    
    printf("{ Assignment operators }");
    printf("you know them =,+=,-=,*=,/= right?");


    //miscellaneous operators
    //sizeof(a) for calculating the size of the variable in int on the arch
    // & is for getting the addres sof a variable i.g &a return the address of a 
    // *a is for pointing a 
    // : will study futhur in conditios
    
    return 0;


}