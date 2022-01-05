#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tam_arq, vel_intr, vel_down;

    printf("Digite o tamanho do arquivo em bits: ");
    scanf("%f", &tam_arq);

    printf("Digite a velocidade da conexao da internet em bits por segundo: ");
    scanf("%f", &vel_intr);

    vel_down = tam_arq / vel_intr;

    printf("\nA velocidade do download eh: %.2f s\n", vel_down);

    return 0;
}
