#include<stdio.h>
int main(){
    double b;
    int a;
    printf(">>>[1]Km to miles                      [2]Inches to foot\n   [3]cm to inches                      [4]Pounds to Kg\n   [5]inches to meter                        [6]exit\n\n");
    printf(">>>");
    scanf("%d",&a);
    if (a!=6 && a!=7){
        printf(">>>Enter the number to be converted  : ");
        scanf("%lf",&b);
    }
    switch (a){

        case 1:
            printf("--> %lf miles\n",b*0.621371);
            break;
        case 2:
            printf("--> %lf foot\n",b/12);
            break;
        case 3:
            printf("--> %lf inches\n",b/(2.54));
            break;
        case 4:
            printf("--> %lf Kg\n",b*0.453592);
            break;
        case 5:
            printf("--> %lf meter\n",b/39.37);
            break;
        case 6:
            goto t;
        default:
            printf("!!! Enter a valid choice\n");

    }
    main();
    t:
        printf("Exit\n");
        exit(0);
}
