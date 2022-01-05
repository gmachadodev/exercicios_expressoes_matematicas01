#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saco_far, farinha;
    float fer_q, fer_b;
    float saco_farano, far_ano, fer_qano, fer_bano;     //sacos de farinha/ano ; farinha/ano ; fermento quimico/ano ; fermento biologico/ano
    float aum_vendas;

    printf("Digite os dados necessitados:\n");

    printf("------------------------------------------------------------------------------------\n");

    printf("Quantidade de sacos de farinha utilizados no mes: ");
    scanf("%f", &saco_far);

    printf("Digite a quantidade de farinha em kg utilizados no mes: ");
    scanf("%f", &farinha);

    printf("Digite a quantidade de fermento quimico utilizado no mes: ");
    scanf("%f", &fer_q);

    printf("Digite a quantidade de fermento biologico em kg utilizado no mes: ");
    scanf("%f", &fer_b);

    printf("Digite a porcentagem do aumento de venda: ");
    scanf("%f", &aum_vendas);

    saco_farano = (saco_far * 12) * ((aum_vendas / 100) + 1);
    far_ano = (farinha * 12) * ((aum_vendas / 100) +1);

    fer_qano = (fer_q * 12) * ((aum_vendas / 100) +1);
    fer_bano = (fer_b * 12) * ((aum_vendas / 100) + 1);

    printf("------------------------------------------------------------------------------------\n");
    printf("\nQuantidade de sacos de farinha utilizados no ano com o aumento de vendas e: %.2f\n", saco_farano);
    printf("Peso total de farinha utilizada no ano com o aumento de vendas e: %.2f\n", far_ano);
    printf("Peso total de fermento quimico utilizado no ano com o aumento de vendas e: %.2f\n", fer_qano);
    printf("Peso total de fermento biologico utilizado no ano com o aumento de vendas e: %.2f\n", fer_bano);

    return 0;
}
