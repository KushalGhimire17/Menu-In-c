//switch case
#include <stdio.h>

int main()
{
    int num1, num2, result, choice;
    float res;

    printf("\nEnter \n1 for Addition \n2 for Subtraction \n3 for Multiplication \n4 for Division: ");
    scanf("%d", &choice);

    if(choice>0 && choice<5)
    {
        printf("\nEnter two numbers: ");
        scanf("%d%d", &num1, &num2);
    }

    switch(choice)
    {
    case 1:
        result = num1 + num2;
        printf("\nThe sum of %d and %d is %d", num1, num2, result);
        break;
    case 2:
        result = num1 - num2;
        printf("\nThe difference of %d and %d is %d", num1, num2, result);
        break;
    case 3:
        result = num1 * num2;
        printf("\nThe product of %d and %d is %d", num1, num2, result);
        break;
    case 4:
        //explicit typecasting
        res = (float)num1 / num2;
        printf("\nThe division of %d by %d is %.2f", num1, num2, res);
        break;
    default:
        printf("\nInvalid Choice...");
    }

    return 0;
}
