#include <stdio.h>
int main()
{
    int num;
    int index=0;    
    printf("Enter the number : ");
    scanf("%d",&num);
    //do loop
    //do{execute}while(condition);
    do{printf("HEllo %d\n",index+1);index+=1;}while (index<num);
    // but there is a problem in do that for the first execution the code inside do is runned without checking the condition in while 
    index=0;

    //while loop
    //while(condition){execute}
    while(index<num){printf("Helo %d\n",index+1);index++;}

    //i++,i+=1,i=i+1 are same

    int i;
    //for loop
    //for(expression1,expression2,expression3)
    //exp1--> initial state of variable use , to seprate,these is a optional if  we don't use it and leave blank then the real value of the variable used in next expression are used
    //exp2--> conditions use , to seprate them 
    //exp3 --> condition to apply after every loop its optional if we don't use is then the value of i may not change and loop become infinite
    for(i=0;i<num;i++){
    printf("Heno %d\n",i+1);
    }  
    for(i=0,int j=0;i<num && j<num;i+=2,j++){printf("%d,%d\n",i,j);}
    // if we use , at place of && then ,it  comma operator basically returns the value of the last expression means only (j<num only )but evaluates all of them but evaluates all of them/



    // we can use break; and continue; here
    return 0;


}