#include <stdio.h>
void fnx2(int *pt1,int *pt2)
{
    int temp;
    printf("I : %d,%d\n",*pt1,*pt2);
    temp  = *pt1;
    *pt1 = *pt2;
    *pt2=temp;
    printf("O : %d,%d\n",*pt1,*pt2);
}
int fnx1(int ar[],int br){   
    for(int i=0;i<(br/8);i++)
    {
        fnx2(ar+i,ar+(br/4)-i-1);
    }
        
        
    return 0;
}

int main()
{
    int a[]={1,2,3,4,5,6,7};
    int b=sizeof(a);
    printf("%d\n",sizeof(a));
    fnx1(a,b);
    for(int i=0;i<((sizeof(a)/4));i++){
        printf("%d ",a[i]);
    }
    return 0;
} 