#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


void movimentoTorre(int n){
    if (n > 0){        
        movimentoTorre(n - 1);
        printf("Torre %d casa direita.\n", n);
    }
}

void movimentoBispo(int n){
   
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < 2; j++)
            {
                printf("Bispo %d casa Cima, Direita.\n", i);
            }
            
        }

    }


void movimentoRainha (int n){
    if (n > 0){        
        movimentoRainha(n - 1);
        printf("Rainha %d casa Esquerda.\n", n);
    }
}
       
void movimentoCavalo (int n){

        for (int i = 1; i < 3; i++)
        {
            printf("Cavalo %d casa cima\n", i);
        }
        for (int i = 1; i < 2; i++)
        {
            printf("Cavalo %d casa direita\n", i);
        }

}




int main() {   
    
    printf("Torre: Move-se em linha reta horizontalmente ou verticalmente. Mover a Torre cinco casas para a direita.\n");   
    
    movimentoTorre(5); 
    printf("\n");  

    printf("Bispo: Move-se na diagonal. Mover o Bispo cinco casas na diagonal para cima e à direita.\n");
    movimentoBispo(5);
    printf("\n");  

    printf("Rainha: Move-se em todas as direções. Mover a Rainha oito casas para a esquerda.\n");
    movimentoRainha(8);
    printf("\n");  

    printf("Cavalo se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um L.\n");
    printf("Mover o Cavalo duas casas para cima e uma à direita.\n");
    movimentoCavalo(5);

   
    return 0;
}



