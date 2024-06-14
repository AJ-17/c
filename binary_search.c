#include <stdio.h>
int main()
{
    //for binary search only sorted array will work
    //0 1 2 3 4 5 6 7
    int a[]={10,15,20,100,123,199,530,780,999};

    int min=0;
    int max=(sizeof(a)/sizeof(a[0]))-1;
    int mid=max/2;
    int f=101;//number to find
    while(1){
        if(min==max || mid==max || mid ==min){
            break;
        }
        if(a[max]==f){
            printf("Position is a[%d]\n",max);
            break;
        }
        else if(a[min]==f){
            printf("Position is a[%d]\n",min);
            break;
        }
        else if(a[mid]==f){
            printf("Position is a[%d]\n",mid);
            break;
        }
        else{
            if(f>a[mid]){
                min=mid;
                mid=(max+min)/2;
                continue;
            }
            else{
                max=mid;
                mid=(max+min)/2;
                continue;
            }
        }
    }
    printf("Not found\n");
    return 0;
}