#include <stdio.h>

union class{
    int class;
    int roll_no;

};
int main()
//union is same as structrure but we can only store the last value for a particular 

{
    union class e1;
    e1.class=1;
    e1.roll_no=12;
    //e1.class value will get corrupted 
    return 0;
}