#include <stdio.h>
typedef struct drivers{
    char name[100];
    long int drli;
    char route[100];
    int km;
} c;
int main()
{
    int n;
    printf("Enter the number of Drivers : ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        c e;
        printf("Enter the Name : ");
        gets(e.name);
        printf("Enter Driving ID : ");
        scanf("%ld",&e.drli);
        printf("Enter the Destination : ")?;
        gets(e.route);
        printf("Enter the Kilometer : ");
        scanf("%d",&e.km);
        printf("\n%s with id %ld is going to %s %d km away\n\n",e.name,e.drli,e.route,e.km);
    }
    return 0;
}