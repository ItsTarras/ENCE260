#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>

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
        printf("Input file can't be opened\n");
        return NULL;
    }
    return file;
}

FILE* openOutputFile(char* filename) 
{
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Output file can't be opened\n");
        return NULL;
    }
    return file;
}

int main() 
{
    char filename[81]; //#Maximum file size of 80, so make it 81
    char outFile[81];


    readString(filename, sizeof(filename));
    readString(outFile, sizeof(outFile));

    //Read the input file, and try to open it.
    FILE* inputFile = openInputFile(filename);
    FILE* outputFile = openOutputFile(outFile);


    if (inputFile == NULL && outputFile != NULL) {
        fclose(outputFile);
        exit(1);
    }

    else if (inputFile == NULL && outputFile == NULL) {
        // Exit the program
        exit(1);
    }

    else if (inputFile != NULL && outputFile == NULL) {
        fclose(inputFile);
        exit(1);
    }

    //Initialise variables.
    int c;
    bool space = true;
    bool firstLetter = true;


    while ((c = fgetc(inputFile)) != EOF) {
        //If we are on a whitespace.
        if ((c == ' ') || c == '\n') {
            space = true;
        }

        //if we aren't on a whitespace, but our last letter was a space.
        else if (space || firstLetter) {
            c = toupper(c);
            space = false;
            firstLetter = false;

        }

        else {
            c = tolower(c);
        }

        fputc(c, outputFile);
    }

    //Print the output file.

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
