#include <stdio.h>
int main()
{
    int a[]={8,10,12,19,5,2};
    for(int i=0;i<((sizeof(a)/sizeof(a[0]))-1);i++){
        for(int j=0;j<((sizeof(a)/sizeof(a[0]))-i-1);j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
} 