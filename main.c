/**
 * author: Gabriele Schiavo
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 120
int main () {
    char *input = (char*)malloc(MAX_LENGTH * sizeof(char));
    FILE *file;

    fgets(input, MAX_LENGTH, stdin);
    printf("%s", input);
    
    input[strlen(input) - 1] = '\0';

    if((file = fopen(input, "w+")) == NULL) {
        fprintf(stderr, "Error occurred while opening the file\n");
        return EXIT_FAILURE;
    }
    
    fprintf(file, "File opened");
    fflush(file);

    

    return EXIT_SUCCESS;
}

// int main () {
// 
//     char* inputString = (char*)malloc(sizeof(char));
//     //char** fileName = (char**)malloc((MAX_LENGTH + 1) * sizeof(char*));
//     char fileName[MAX_LENGTH];
//     FILE newFile;
// 
//     printf("Insert the absolute path of the file:\n");
//     fgets(fileName, MAX_LENGTH, stdin);
// 
//     printf("Is the file path correct \"%s\"? [Y/n]", fileName);
//     while (tolower(getc(stdin)) != (int)'y') {
//         printf("Insert the absolute path of the file:\n");
//         fgets(fileName, MAX_LENGTH, stdin);
//         printf("Is the file path correct \"%s\"? [Y/n]", fileName);
//     }
// 
//     return 0;    
// }

