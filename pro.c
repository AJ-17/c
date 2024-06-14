#include <stdio.h>
char a[200];
int d;
int random(int c){
    unsigned int ui = c;
    if(ui%100<92){
        return 33+(ui%100);
    }
    else{
        return 33+(ui%100);
    }
}
int mixer(int b){
    for(int i=0;i<d;i++){
        if((i%2)==0){
            if(i!=0){

                a[i+b]=a[i]+(d/i)-d;
                if(a[i+b]<32 || a[i]>126){
                    a[i+b]=random(a[i+b]);
                }
                }
            
            else{
                a[i+b]=a[i]+(d*i)-d;
                if(a[i+b]<32 || a[i]>126){

                    a[i+b]=random(a[i+b]);
                }
            }
        }
        
        else{
            a[i+b]=a[i]-(d/i)+d;
            if(a[i+b]<32 || a[i]>126){

                a[i+b]=random(a[i+b]);
            }
        }

    
}
}

int main()
{

    printf("Enter the website main_domain@key@username : ");
    fgets(a,sizeof(a),stdin);
    *strchr(a,'\n')='\0';
    
    for(int i=0;i<100;i++){
        if(a[i]=='\0'){
            d=i;
            break;
        }
    }
    mixer(d);
    d=((d)*2);
    mixer(0);


    a[d]='\0';
    printf(">>> ");
    int len=0;
    if(d>15){
        for(int i=(d/2)-5;i<(d/2)+8;i++){
            if(a[i]<32 || a[i]>126){
                printf("%d",a[i]);
                len++;
            }
            else{
                printf("%c",a[i]);
                len++;
            }
        }
    }
    else{
        for(int i=0;i<d;i++){
            if(a[i]<32 || a[i]>126){
                printf("%d",a[i]);
                len++;
            }
            else{
                printf("%c",a[i]);
                len++;
            }
        }
    }


    printf("\n");
    printf("Length : %d\n",len);
    return 0;
}