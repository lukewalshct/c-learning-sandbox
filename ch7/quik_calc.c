#include <stdio.h>

float eval(float val, float f, char op)
{
   if (op == '+') return val + f;  
   else if (op == '-') return val - f;
   else if (op == '*') return val * f;
   else if (op == '/' && f != 0) return val / f;
   else return val;
}

int main(void)
{
    float f, val;
    char op;

    printf("Enter an expression: ");

    scanf("%f", &f);
    val = f;
    op = getchar();

    while(op != '\n')
    {
        scanf("%f", &f);
        val = eval(val, f, op);
        op = getchar();
    }
 
    printf("Value of expression: %f\n", val);

   return 0;
}

