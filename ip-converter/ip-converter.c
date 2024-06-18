#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[15];
    int b[4];
    printf("Enter the IP in format a:b:c:d  : ");
    scanf("%s",a);
    char *pa=&a;
    char *p;
    int i=0;
    int rem;
    while(i<4){
        
        if(i==3){
            b[3]=atoi(pa);
            break;
        }
        p=strchr(a,':');
        *p='\0';
        rem=(p-pa+1)%4;
        switch(rem){
            case 0:
                b[i]=atoi(pa);
                pa=pa+4;
                break;
            case 1:
                printf("Invalid IP\n");
                goto n;
            case 2:
                b[i]=atoi(pa);
                pa=pa+2;
                break;
            case 3:
                b[i]=atoi(pa);
                pa=pa+3;
                break;
    }
        i++;
        *p=',';

    
    }
    if(b[0]>255 | b[1]>255 | b[2]>255 | b[3]>255 ){
        printf("Invalid IPv4\n");
        goto n;
    }
    printf("Binary IP : %b:%b:%b:%b\n",b[0],b[1],b[2],b[3]);
    return 0;
    n:  
        return 0;
    }
    
