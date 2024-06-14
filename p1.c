#include  <stdio.h>
int main()
{
    int a;printf("Enter the number you want table of : ");scanf("%d",&a);
    for(i=1,i<11,i++){
        printf("%d X %d = %d",a,i,a*i);
    }
    return 0;
}