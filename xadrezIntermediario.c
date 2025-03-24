#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   
    int i = 1;

    printf("Torre: Move-se em linha reta horizontalmente ou verticalmente. Mover a Torre cinco casas para a direita.\n");   
    for (i = 1; i <= 5; i++)
    {
    printf("Torre %d casa direita.\n", i);
    }
    printf("\n");


    int j = 1;
    printf("Bispo: Move-se na diagonal. Mover o Bispo cinco casas na diagonal para cima e à direita.\n");
    do
    {
    printf("Bispo %d casa Cima, Direita.\n", j);
    j++;
    } while (j <= 5);
    printf("\n");


    int z = 1;
    printf("Rainha: Move-se em todas as direções. Mover a Rainha oito casas para a esquerda.\n");
    while (z <= 8)
    {
    printf("Rainha %d casa Esquerda.\n", z);
    z++;
    }
    printf("\n");
 

    
    int movimentoCavalo = 1;  
    printf("Cavalo se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um L.\n");
    printf("Mover o Cavalo duas casas para baixo e uma à esquerda.\n"); 

    while (movimentoCavalo--)
    {
        for (int i = 1; i < 3; i++)
        {
            printf("Cavalo %d casa baixo\n", i);
        }
        for (int i = 1; i < 2; i++)
        {
            printf("Cavalo %d casa esquerda\n", i);
        }
        
    }
    
   
    return 0;
}
