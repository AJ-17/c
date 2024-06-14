#include <stdio.h>
#include <string.h>
int main()
{
    /*
    strcpy(dest, src); to copt src to dest
    strncpy(dest, src, n); to copy n character of src to dest
    strcat(dest, src); to concatinate dest and src and stroe them at src
    strncat(dest, src, n); to concatinate n character of src to dest
    strcmp(str1, str2); if str1 first chracter is > str2 first character in ascii then it give a +ve value else -ve if equal string then zero
    strncmp(str1, str2, n); conmpare n string like above
    strchr(str, ch);  we get the location of the ch charater in the string str
    strstr(str1, str2); search the string
    strtok(str, delim);
    */
    char a[]="Anshu";
    char b[]="Gahlyan";
    char c[20];

    printf("value of a : %s\n",a);
    printf("Lenght a : %d \n ",strlen(a),&a);
    printf("Address of a : %d\n\n",&a);
    printf("value of b : %s\n",b);
    printf("Lenght b : %d \n ",strlen(b),&b);
    printf("Address of b : %d\n\n",&b);

    printf("concatinate a,b :%s\n",strcat(a,b));// concatinate a,b and stores a,b in a;
    printf("value of a : %s\n",a);
    printf("Lenght a : %d \n ",strlen(a),&a);
    printf("Address of a : %d\n\n",&a);
    printf("value of b : %s\n",b);
    printf("Lenght b : %d \n ",strlen(b),&b);
    printf("Address of b : %d\n\n",&b);
    //data overflow examples a overwrited b :
    /*
    ---OUTPUT---

    value of a : Anshu
    Lenght a : 5 
     Address of a : -2143771066

    value of b : Gahlyan
    Lenght b : 7 
     Address of b : -2143771060

    concatinate a,b :AnshuGahlyan
    value of a : AnshuGahlyan
    Lenght a : 12 
     Address of a : -2143771066

    value of b : ahlyan
    Lenght b : 6 
     Address of b : -2143771060

    
    */
    strncpy(c,a,5);
    printf("c : %s\n",c);
    /*
    a[5]='\0';
    printf("Value of a : %s\n",a);
    */
    strcpy(c,b);
    printf("c : %s\n",c);
    char d='l';

    int *p1=strchr(c,d);
    printf("Address of  c : %d\nAddress of d in c : %d\n",&c,p1);

    char dd[]="yan";
    int *p2=strstr(c,dd);
    printf("Address of  c : %d\nAddress of dd in c : %d\n",&c,p2);

    return 0;
}