#include <stdio.h>

int main(){
    int a,b=0,c=1,temp;

    printf("Enter the number of element in fabonicsa series : ");
    scanf("%d",&a);
    printf("0 1 ");
    
    int fab(int i){
        if(i==0){
            return 0;
        }
        temp=b;
        b=c;
        c=temp+c;
        printf("%d ",c);
        i-=1;
        return fab(i);
    }
    fab(a);
    printf("\n");
}