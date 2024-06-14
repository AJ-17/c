#include <stdio.h>
int main()
{
    FILE *file = fopen("a.txt", "r");
    if (file != NULL) {
        char buffer[100];
        //fgets(starting location of characters to be stored ,number of characters,file )
    
        while (fgets(buffer, sizeof(buffer), file) != NULL) {
            printf("%s", buffer);
        }
        fclose(file);
    }
    return 0;
}