#include <stdio.h>
int main()
{
    long int a;
    printf("Enter the number: ");
    scanf("%ld",&a);
    if (a>=18)
    {
        printf("Your are eligible for driving\n");
    }
    else if(a>10){
        printf("you are b/w 10-18 so you can walk ");
    }
    else{
        printf("Underage\n");
    }
    //switch is used only for int and char (eg no float  or other)
    switch (a){
        case 1:
            printf("You are 1 year");
            break;
        case 2:
            printf("You are 2 year");
            break;
            
        case 3:
            printf("You are 3 year");
            break;

        case 4:
            printf("You are 4 year");
            break;

        case 5:
            printf("You are 5 year");
            break;

        default:
            printf("you are > 5 ");
            break;
    /*
    IMP

    if you use switch and any case matches then if break is not applied then all the furthur case will be executed means runned without checking any condition 
    
    
    default will run when no breaks are applied or no case matches 
    */



    }
}