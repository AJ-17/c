/*
pre-defined macros
__DATE__ in mmm dd yyyy
__TIME__ in HH:MM:SS
__FILE__ current filename as a string 
__LINE__ current line number as a decimal constant
__STDC__  if 1 then it is follwing ASCI 


*/
#include <stdio.h>
int main()
{
    printf("Date : %s\nTime : %s\nFileName : %s\nLine : %d\nSTDC : %d\n",__DATE__,__TIME__,__FILE__,__LINE__,__STDC__);
    return 0;
}