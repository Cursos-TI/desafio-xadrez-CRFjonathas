#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void bispo(int casas){
    if (casas > 0){
        printf("Cima\n");
        printf("Direita\n");
        bispo(casas - 1);
    }
}

void torre(int casas){
        if(casas > 0){
        printf("Direita\n");
        torre(casas - 1);
        }
}

void rainha(int casas){
        if(casas > 0){
        printf("Esquerda\n");
        rainha(casas - 1);
        }
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int bispo_2 = 1;
    int cavalo = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
     printf("BISPO:\n\n");

    bispo(5);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nTORRE:\n\n");

    torre(5);
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nRAINHA:\n\n");
    
    rainha(8);
        
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nCAVALO:\n\n");

    while (cavalo--){
        for(int i = 0; i < 3; i++){
            if (i == 2){
                printf("Direita\n");
                break;
            }

            if ( i < 2){
                printf("Cima\n");
                continue;
            }
        }
    }
    
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    printf("\nBISPO: \n\n");

    while (bispo_2--){
        for(int i = 0; i < 5; i++){
            printf("Cima\n");
            printf("Direita\n");
        }  
    }

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
