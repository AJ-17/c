#include <stdio.h>

int process(int (*p)(int,int),int a,int b){//we can get a fnx as a argument
    printf("Hello the answer is : %d\n",p(a,b));
    return 0;
}
int sum(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int main()
{
    int (*fptr)(int,int);
    fptr=&sum;//fptr=sum will also work
    process(fptr,2,3);
    fptr=sub;
    process(fptr,2,3);

    return 0;
}

