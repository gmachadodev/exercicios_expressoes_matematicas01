#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    int D;
    int R, S;

    printf("Digite o primeiro valor:");
    scanf("%d", &a);

    printf("Digite o segundo valor:");
    scanf("%d", &b);

    printf("Digite o terceiro valor:");
    scanf("%d", &c);

    R = (pow((a+b),2));

    S = (pow((b+c),2));

    D = (R + S) / 2;

    printf("Resultado da expressao 'R' eh: %d\n", R);
    printf("Resultado da expressao 'S' eh: %d\n", S);
    printf("Resultado da expressao 'D' eh: %d\n", D);

    return 0;
}
