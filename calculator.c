#include <stdio.h>
#include <stdlib.h>

#include "ansi_escapes.h"

int main(void) {
    printf(">>>>THE CALCULATOR<<<<\n");
    printf(">>Please enter your first name: ")

    char name[20];
    scanf("%s\n", name);

    printf(">>Welcome %s!\n", name);

    printf("Press: [1] for addition\n");
    printf("       [2] for subtraction\n");
    printf("       [3] for multiplication\n");
    printf("       [4] for division\n");
    printf("       [5] for exponentiation\n");
    printf("       [6] to stop expression\n\n");

    int operator, input;
    do {
        scanf("%i ", &n);
    } while (n != 6);
}