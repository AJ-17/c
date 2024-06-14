#include <stdio.h>
int main()
{
    FILE *pt = fopen("a.txt","r");
    
    if(pt==NULL){
        fclose(pt);
        exit(1);
        };
    char a[100];
    char b[100];
    int cc=fscanf(pt,"%s %s",a,b);
    fclose(pt);
    printf("%s\n%s\ncc : %d\n",a,b,cc);
    return 0;
}
