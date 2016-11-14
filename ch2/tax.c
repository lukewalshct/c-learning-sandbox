#include <stdio.h>
#define TAX 1.05f

int main(void)
{
    float amount;

    printf("Enter an amount:");
    scanf("%f", &amount);
    printf("With tax added: %.1f\n", amount * TAX);

    return 0;
}

