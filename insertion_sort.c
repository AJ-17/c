#include <stdio.h>
int main()
{
    int a[]={8,10,12,19,5,2};
    for(int i=1;i<=sizeof(a)/sizeof(a[0]);i++){
        int j=i;
        while(j!=0){
            if(a[j]<a[j-1]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
            j--;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
} 