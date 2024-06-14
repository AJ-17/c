#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter the nunber to check if its a Paladrone : ");
    fgets(a, sizeof(a), stdin);
    char *p1 = strchr(a,'\n');

    for(int i=0;i<((p1-a)/2);i++){
        if(a[i]!=a[(p1-a-1)-i]){
            goto l;
        }
    }
    printf("Its a paledrom :)\n");
    return 0;

    l:
        printf("Its not a Paledron\n");
        return 0;
}