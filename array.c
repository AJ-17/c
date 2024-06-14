#include <stdio.h>
int main()
{
    int a[3]={23,22,43};
    //array a[3] represent 3 element are there
    //int means each element of the array will be int
    for(int i=0;i<3;i++){
        printf("element a[%d] is : %d  \n",i,a[i]);
    }

    int b[]={1,2,3};
    //if we don't specify the number then it count the places itself
    b[1]=0;// we can change the values
    
    //multidimension array
    int a[3][2]={{1,2},{3,4},{4,5}};
    //in a[c][d] d is a must and c can be counted by the compiler


}