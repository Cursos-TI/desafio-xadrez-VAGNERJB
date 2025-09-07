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


    // Movimentação do Cavalo
   // Função para movimentar o Cavalo em L (2 para baixo, 1 para a esquerda)
// Utiliza loops aninhados ('for' aninhado com 'while').
void moveKnightAventureiro() {
    printf("--- Nível Aventureiro: Movimentação do Cavalo em L (2 Baixo, 1 Esquerda) ---\n");
    // O movimento em L do cavalo é composto por duas partes:
    // 1. Duas casas em uma direção (ex: para baixo).
    // 2. Uma casa em uma direção perpendicular (ex: para a esquerda).
    // Para cumprir o requisito de loops aninhados, o loop externo 'for' controla
    // a parte vertical e o loop interno 'while' controla a parte horizontal,
    // ativado na etapa correta do movimento L.

    // Loop 'for' para os 2 movimentos 'Baixo'.
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n"); // Move uma casa para baixo.

        // Se for a última iteração do movimento vertical (após o 2º 'Baixo'),
        // ativamos o loop para o movimento perpendicular ('Esquerda').
        if (i == 1) { // Após o segundo "Baixo" (índice 1 para 0-indexado)
            int j = 0;
            // Loop 'while' para o 1 movimento 'Esquerda'.
            while (j < 1) { // Este loop executa exatamente uma vez.
                printf("Esquerda\n"); // Move uma casa para a esquerda.
                j++;
            }
        }
    }
    printf("\n");
}


    // Funções Recursivas e Loops Aninhados
   

    return 0;
}
