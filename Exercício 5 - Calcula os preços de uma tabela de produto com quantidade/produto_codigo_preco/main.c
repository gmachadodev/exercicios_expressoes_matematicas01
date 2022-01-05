#include <stdio.h>
#include <stdlib.h>

int main()
{
    float custo;
    int codigo = 0, qtd;
    char sn;

    printf("Tabela de produtos\n\n");
    printf("Produto 0001 = R$ 2,50\n");
    printf("Produto 0002 = R$ 3,00\n");
    printf("Produto 0003 = R$ 5,00\n");
    printf("Produto 0004 = R$ 10,00\n\n");

    novo_produto:
    do
    {
    printf("\nDigite o codigo do produto: ");
    scanf("%d", &codigo);

    switch(codigo)
    {
        case 0001:
            printf("Digite a quantidade: ");
            scanf("%d", &qtd);
            custo = custo + (qtd * 2.50);
            scanf("%c", &sn);
            break;

        case 0002:
            printf("Digite a quantidade: ");
            scanf("%d", &qtd);
            custo = custo + (qtd * 3);
            //printf("Adicionar outro produto? s/n\n");
            scanf("%c", &sn);
            break;

        case 0003:
            printf("Digite a quantidade: ");
            scanf("%d", &qtd);
            custo = custo + (qtd * 5);
            //printf("Adicionar outro produto? s/n\n");
            scanf("%c", &sn);
            break;

        case 0004:
            printf("Digite a quantidade: ");
            scanf("%d", &qtd);
            custo = custo + (qtd * 10);
            //printf("Adicionar outro produto? s/n\n");
            scanf("%c", &sn);
            break;
    }
    printf("Adicionar outro produto? s/n\n");
    //printf("%c\n", sn);                         // Não roda scanf se nao tiver dois scanf no codigo, um depois
    scanf("%c", &sn);                           // da chave do while e um em cada case.
    //printf("%c\n", sn);                         // exemplo case 1 sem scanf e outros case's com scanf.
    }while(sn=='s');

    printf("O preco total da sua compra e: R$ %.2f", custo);

    return 0;
}
