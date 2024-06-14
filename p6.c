#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter the syntx : ");
    fgets(a,sizeof(a),stdin);
    char *p1=strchr(a,'>');
    strcpy(a,p1+1);
    int *p3=strchr(a,'<');
    strcpy(p3,"");
    printf("output : %s\n",a);
    return 0;
}