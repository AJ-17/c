#include <stdio.h>
int main()
struct class{
    char name[50];
    int class;
};
{
    typedef int i; // name changer
    typedef struct class c;
    i a; // same as int a
    int b;
    c e1={"Anshu",12};
    printf("Name : %s", e1.name);

    return 0;
}