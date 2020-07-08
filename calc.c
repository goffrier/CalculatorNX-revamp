#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    float num1 = 0.0;
    float num2 = 0.0;
    float result = 0.0;

    int menuchoice;

    printf("\nWelcome To The Ultimate CalculatorTM\n");
    printf("\nWhat is your selection for today?\n");
    printf("\nAdd\n");
    printf("\nSubstract\n");
    printf("\nMultiply\n");
    printf("\nDivide\n\n");
    scanf("%i", &menuchoice);

    switch (menuchoice)
    {
    case 1:
        printf("\nBase number:\n");
        scanf("%f" , &num1);
        printf("\nNumber to add to the base:\n");
        scanf("%f" , &num2);
        result = num1 + num2;
        printf("\nThe result is: %f\n\n" , result);
        break;

    case 2:
        printf("\nBase number:\n");
        scanf("%f" , &num1);
        printf("\nNumber to substract with the base number:\n");
        scanf("%f" , &num2);
        result = num1 - num2;
        printf("\nThe result is: %f\n\n" , result);
        break;

    case 3:
        printf("\nBase number:\n");
        scanf("%f" , &num1);
        printf("\nNumber to multiply with the base:\n");
        scanf("%f" , &num2);
        result = num1 * num2;
        printf("\nThe result is: %f\n\n" , result);
        break;
    case 4:
        printf("\nBase number:\n");
        scanf("%f" , &num1);
        printf("\nNumber to divide with the base:\n");
        scanf("%f" , &num2);
        result = num1/ num2;
        printf("\nThe result is: %f\n\n" , result);
        break;
    default:
        break;
    }
}
