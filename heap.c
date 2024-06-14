#include <stdio.h>
//malloc calloc realloc free are made in stdlib.h
#include <stdlib.h>

// to check the size of each section text bss data heap and stack we can use size ./pro
int main()
{
    //malloc will return a void pointer and then we will typecast it and store the adders in the pointer 
    int* p1 = (int*)malloc(sizeof(int)*3);
    //in these the memory reserved is first having garbage values
    //calloc(n,size of each n) n -> no of units with there size 
    int* p2 = (int*)calloc(3,sizeof(int));
    //in these the memory reserved are having value 0 by default

    //if i want to tadd some more mermory or reduce it then i can use realloc
    //realloc(oldpointer,new size)
    p1=(int*)realloc(p,2*sizeof(int));
    //if we decrease the size then the data is still there until the system use the space to enter a data 
    //if we increase it if there is not enough spcae then it just shifts to another block //ignore it 

    //if i want  a memory to get free so that comuter can  reasign it then we use free
    free(p2);//the data in it will beome garbage 

    return 0;
}



