#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, result;

    printf("Digite primeiro valor: ");
    scanf("%f", &a);

    printf("Digite segundo valor: ");
    scanf("%f", &b);

    if(a >= b)
        result = a / b;
    else
        result = b / a;

    if(result == (int)result)
        printf("\nResultado = %.2f e numero inteiro, entao %.2f e %.2f sao multiplos!", result, a, b);
    else
        printf("\nResultado = %.2f nao e numeroa inteiro, entao %.2f e %.2f nao sao multiplos", result, a, b);

    return 0;
}
