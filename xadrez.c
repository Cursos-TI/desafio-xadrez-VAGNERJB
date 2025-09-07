#include <stdio.h>

// Desafio de Xadrez 


int main() {
    //  Movimentação das Peças
   
    // Implementação de Movimentação do Bispo
    // Função para movimentar o Bispo (5 casas na diagonal superior direita)
// Utiliza um loop 'for'.
void moveBishopNovato() {
    printf("--- Nível Novato: Movimentação do Bispo (5 diagonais superior direita) ---\n");
    for (int i = 0; i < BISHOP_MOVES; i++) {
        // Para simular a diagonal superior direita, move-se "Cima" e "Direita" simultaneamente.
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");
}


    // Implementação de Movimentação da Torre
   // Função para movimentar a Torre (5 casas para a direita)
// Utiliza um loop 'while'.
void moveRookNovato() {
    printf("--- Nível Novato: Movimentação da Torre (5 casas para a direita) ---\n");
    int i = 0;
    while (i < ROOK_MOVES) {
        printf("Direita\n");
        i++; // Incrementa o contador para avançar no loop.
    }
    printf("\n");
}


    // Implementação de Movimentação da Rainha
   // Função para movimentar a Rainha (8 casas para a esquerda)
// Utiliza um loop 'do-while'.
void moveQueenNovato() {
    printf("--- Nível Novato: Movimentação da Rainha (8 casas para a esquerda) ---\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++; // Incrementa o contador.
    } while (i < QUEEN_MOVES); // A condição é verificada após a primeira execução.
    printf("\n");
}


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
