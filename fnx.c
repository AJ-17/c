#include<stdio.h>

//although we write a fnx before calling them but we can just declare the fnx then write it even after writing it
// we can create a fnx inside main() as well there is no problem

int fnx(int a,int b); //we just declared the fnx
int main(){
    printf("%d",fnx(1,2));
    return 0;
}
int fnx(int a,int b){

    return a+b;
    // to return nothing but we need to change the int fnx to void fnx
}