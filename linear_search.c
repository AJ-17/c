#include <stdio.h>
int main()
{
    int a[]={3,14,21,53,1,4};
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        if(a[i]==53){
            printf("Found at a[%d]\n",i);
            return 0;
        }
    }
    printf("NOt found\n");
    return 0;
}