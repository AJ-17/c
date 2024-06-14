#include <stdio.h>
int main() {
    int a = 76;
    int *ptr = &a;
    printf("Address of a : %p or %p\nValue of a  : %d or %d\nAddress of ptr  : %p\n",ptr,&a,*ptr,a,&ptr);
    //*ptr store the value at address ptr or &a 
    return 0;
}
