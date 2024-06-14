#include <stdio.h>
int main()
{
    char a[]={'a','n','s','h','u','\0'};
    //we can store strings as array because there is not datatype for string 
    // to represent the end of string we use \0

    //if instead of {} we use "" then automaticly a \0 will be there

    // we can create a fnx that can once by one print element of the array and end at \0
    printf("%s\n",a);
    // but we also use a %s to specify a string 

    char b[7];

    // we can take input of string as
    //gets(b); these is a old method and is unsafe can lead to data overflow if the input size> array size

    fgets(b,sizeof(b),stdin);
    //in these if our data size is <6 then  a \n\0 is used at the end and if its = 6 then only \0 is used and if it's = 7 then the last character is ignored and replaced by \0
    
    //another way is
    char x[10];
    printf("Type : ");
    scanf("%s",x);

    /*. It reads characters from the input stream until a whitespace
     character is encountered (space, newline, tab, etc.)
    */
    //gets and scanf don't force us to leave the space for the \0 and can lead to unexpected things while printitng themm

    printf("hello : %s",x);
    //%s prints until it finds a \n or \0;

    //these method will also give error if there is a overflow
    /*
    but we can fix these by
    //if limit is 100 use 99
    scanf("%99s", str); // Note the 99 to prevent buffer overflow
    */


    //as \n was unwanted to remove it we can do these
    b[sizeof(b)-2] = '\0';

    //sizeof(b) will give 7 byte which is the size of all array eg size of 1 char =1 byte 7 character = 7 byte
     

    printf("You entered %s ,size : %d",b,sizeof(b));
    puts(b); // it prints the content in b sting 
    return 0;
    puts(b);
}