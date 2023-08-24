#include <stdio.h>
#include <stdlib.h>

size_t readString(char* string, size_t maxStringLength) 
{
    size_t i;
    //Start reading the string:
    int c;

    for (i = 0; i < maxStringLength - 1; i++) {
        c = getchar();

        if (c != '\n' && c != EOF) {
            string[i] = c;
        } else {
            string[i] = '\0';
            return i;
        }
    }

    return i;
}

FILE* openInputFile(char* filename) 
{
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Input file can't be opened");
        exit(1);
    }
    return file;
}

int main() 
{
    char filename[81]; //#Maximum file size of 80, so make it 81
    char targetChar;

    readString(filename, sizeof(filename));

    //Output the character scan to the targetChar variable.
    targetChar = getchar();

    //Read the input file, and try to open it.
    FILE* inputFile = openInputFile(filename);

    //Initialise variables.
    int count = 0;
    int c;


    while ((c = fgetc(inputFile)) != EOF) {
        if (c == targetChar) {
            count++;
        }
    }

    //Print the total after counting.
    printf("%d\n", count);

    fclose(inputFile);

    return 0;
}
