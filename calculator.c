#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf(">>>>  THE CALCULATOR  <<<<\n");
    printf(">  Please enter your first name: ");

    char name[20];
    scanf("%[^\n]%*c", name);

    printf(">  Welcome %s!\n\n", name);

    


    printf(">  Press: [1] for addition\n");
    printf("          [2] for subtraction\n");
    printf("          [3] for multiplication\n");
    printf("          [4] for division\n");
    printf("          [5] for exponentiation\n");
    printf("          [6] to stop expression\n\n");


    int num1, num2, operator;
    do {
        int calc, holder;
        printf(">  Enter the numbers: ");
        scanf("%i  %i\n", &num1, &num2);

        printf(">  Enter your desired operation: ");
        scanf("%i ", &operator);

        switch (operator) {
            case 1:
                calc = num1 + num2;
            case 2:
                calc = num1 - num2;
            case 3:
                calc = num1 * num2;
            case 4:
                calc = num1 / num2;
            case 5:
                for (int i = 0; i < num2; i++) {
                    holder *= num1;
                }
                calc = holder;
        }

        printf("%i\n", calc);
    } while (operator != 6);
}