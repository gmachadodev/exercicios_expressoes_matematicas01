#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, media_ponderada;

    printf("Digite a primeira nota de peso 2: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota de peso 2: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota de peso 6: ");
    scanf("%f", &n3);

    media_ponderada = (20*n1 + 20*n2 + 60*n3) / 100;

    printf("A media ponderada do aluno e: %.2f", media_ponderada);

    return 0;
}
