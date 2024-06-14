#include <stdio.h>
int main()
{
    char a='a';
    char *ptr=&a;
    printf("%d\n",ptr);//eg 123
    printf("%d\n",ptr+1);// 124  increment of +1 depend on size of datatype if its int then it will become 127
    // we can use 4 operation on pointer +,-,++(ptr=ptr+1),--(ptr=ptr-1)
    
    //array
    //int ar[]=1,2,3;
    //ar represent the address of ar[0] and *ar will represent ar[0] if it was a int then *(ar+1) will represent ar[1] and so on

    int ar[]={2,4,6};
    printf("Address of ar first element : %d or %d\n",ar,&ar[0]);
    printf("Value of ar first element : %d or %d\n",*ar,ar[0]);
    printf("Address of ar second element : %d or %d\n",ar+1,&ar[1]);
    printf("Value of ar second element : %d or %d\n",*(ar+1),ar[1]);
    //on array we can only use two operation +,- and ++,-- are invalid
    // *ar = ar[0] and *(ar+i)= ar[i]
    return 0;

}