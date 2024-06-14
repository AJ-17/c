#include <stdio.h>
#include <stdlib.h>
int main()
{
    int data[3];
    printf("{Matrix A}\n\nEnter the Number of Rows : ");
    scanf("%d",&(data[0]));
    printf("Enter the number of column : ");
    scanf("%d",&(data[1]));
    int a[data[0]][data[1]];
    for(int i=0;i<(data[0]);i++){
        for(int j=0;j<data[1];j++){
            printf("Enter the element no at (%d,%d) : ",i+1,j+1);
            scanf("%d",&(a[i][j]));
        }
    }

    printf("{Matric B}\n\nEnter the number of column : ");
    scanf("%d",&(data[2]));
    int b[data[1]][data[2]];
    for(int i=0;i<(data[1]);i++){
        for(int j=0;j<data[2];j++){
            printf("Enter the element no at (%d,%d) : ",i+1,j+1);
            scanf("%d",&(b[i][j]));
        }
    }
    printf("\nA X B : \n\n");

    for(int i=0;i<data[0];i++){
        printf("    ");
        for(int k=0;k<data[2];k++){
            int d=0;
            for(int j=0;j<data[1];j++){
                d=d+(a[i][j])*(b[j][k]);
            }
            printf("    %d",d);
        }
        printf("\n");
    }




    return 0;
}