#include <stdio.h>
#include <stdio.h>
int main()
{   
    FILE *file = fopen("a.txt", "r");
    if (file != NULL) {
        char ch = fgetc(file);//one character is stored in ch fgetc and getc are same 
        while (ch != EOF) {
            putchar(ch);//we can also use printf("%c",ch); to print a character
            ch = fgetc(file);
            }
        fclose(file);
}
    
    return 0;
}
