#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    printf("These is  a stone paper Sizor game 3 rounds if you win atleast 2 then you will win :) \n");
    //a=[loop,choice_one,choice_two,score_1,score_2]
    int a[5]={0,0,0,0,0};
    char b[]="Stone\0Paper\0Sizor";
    printf("%s,%s,%s\n",b,(b+6),(b+12));
    while(a[0]<3){
        printf("Enter your choice : \n  [1]Stone  [2]Paper  [3]Sizor \n-->: ");
        scanf("%d",&(a[1]));
        srand(time(NULL));
        a[2]=(rand()%3)+1;
        printf("Computer choosed %s \n",(b+((a[2]-1))*6));
        switch (a[1]-a[2]){
            case 0:
                printf("Tie :o\n");
                break;
            case -1:
                printf("Computer won :(\n");
                a[4]++;
                break;
            case -2:
                printf("You won :)\n");
                a[3]++;
                break;
            default:
                printf("You won :)\n");
                a[3]++;
                break;

        }
        a[0]++;

    }
    if(a[3]>a[4]){
        printf("\nYou won with socer u:%d c:%d\n",a[3],a[4]);
        goto l;
    }
    else if(a[3]==a[4]){
        printf("\nTie  with socer u:%d c:%d\n",a[3],a[4]);
        goto l;
    }
    else{
        printf("\nYou lose with socer u:%d c:%d\n",a[3],a[4]);
        goto l;
    }
    l:
    return 0;
}