#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\n\nA nota media do aluno e: %.2f", media);

    if(media >= 6)
        printf("\n\nAluno aprovado!\n\n");
    else
        printf("\n\nAluno reprovado!\n\n");

    return 0;
}
