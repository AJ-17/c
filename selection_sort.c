#include <stdio.h>
int main()
{
    int a[]={8,10,12,19,5,2};
    int b=0;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
            int min=a[i];
            int var;
            for(int j=i+1;j<sizeof(a)/sizeof(a[0]);j++){
                if(min>a[j]){
                    min=a[j];
                    var=j;
                }
            }

            a[var]=a[i];
            a[i]=min;
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
} 