
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#define FILE_PATH "file.JSON"




FILE *fp open_file(char* path) {
    //opens the file at the defined file path
    FILE *fp = malloc(sizeof(FILE));
    if (fp == NULL) {
        printf("could not malloc file pointer\n");
        exit(0);
    }

    fp = fopen(FILE_PATH, "r");

    return fp;
}

int main(int argc, char **argv) {
    FILE *fp = open_file(FILE_PATH);

    


    return 0;
}