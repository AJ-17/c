#include <stdio.h>
#include <string.h>
struct class{
    int roll_no;
    char name[50];
    float marks;
}e3={1232,"gagan",600},e4;


int main(){
    struct class e1={6092,"Anshu",500},e2;
    e2.roll_no=54;
    e2.marks=600;
    strcpy(e2.name,"tanish");
    printf("E1 : Name: %s\n",e1.name);
    printf("E3 name : %s",e3.name );


    return 0;
} 