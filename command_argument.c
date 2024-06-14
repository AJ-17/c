#include <stdio.h>
int main(int argc, char const *argv[])//argv is pointers array
{
    printf("The value of argc is %d\n",argc);
    for(int i=0;i<argc;i++){
        printf("This argument number %d has value of %s \n",i,argv[i]);
    }
    return 0;
}