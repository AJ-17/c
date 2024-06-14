#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc,const char* argv[])
{
    if(strcmp(argv[1],"add")==0){
        printf(">>%f\n",atof(argv[2])+atof(argv[3]));
        
    }
    else if(strcmp(argv[1],"sub")==0){
        printf(">>%f\n",atof(argv[2])-atof(argv[3]));
        
    }
    else if(strcmp(argv[1],"mul")==0){
        printf(">>%f\n",atof(argv[2])*atof(argv[3]));
        
    }
    else if(strcmp(argv[1],"div")==0){
        printf(">>%f\n",atof(argv[2])/atof(argv[3]));
        
    }
    return 0;
}
/*
*/