#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("\aEnter the number of rows in * triangle : ");
    scanf("%d",&a);
    printf("Do you want reverse pattern? 1/0 : ");
    scanf("%d",&b);
    if(b==0){
        for(int i=1;i<a+1;i++){
            for(int j=0;j<i;j++){
                printf("*");
            }
            printf("\n");
        }
    }
    else if (b==1){
        for(int i=a;i>0;i--){
            for(int j=0;j<i;j++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}