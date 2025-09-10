#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída

// Definição das constantes para o movimento das peças (AJUSTE OS VALORES CONFORME SEU DESEJO)
#define BISHOP_MOVES 5 // Exemplo: Bispo se move 5 casas
#define ROOK_MOVES   5 // Exemplo: Torre se move 5 casas
#define QUEEN_MOVES  8 // Exemplo: Rainha se move 8 casas

// --- Nível Novato ---

// Implementação de Movimentação do Bispo
void moveBishopNovato(){
    printf("5 diagonais superior direita)---\n");
    for (int i = 0; i < BISHOP_MOVES; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");
}

// Implementação de Movimentação da Torre
void moveRookNovato() {
    printf("5 casas para a direita) ---\n");
    int i = 0;
    while (i < ROOK_MOVES) {
        printf("Direita\n");
        i++;
    }
    printf("\n");
}

// Implementação de Movimentação da Rainha
void moveQueenNovato() {
    printf("--- Nível Novato: Movimentação da Rainha (8 casas para a esquerda) ---\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++; // Adicionei 'i++' aqui, caso contrário seria um loop infinito se QUEEN_MOVES > 0
    } while (i < QUEEN_MOVES);
    printf("\n");
}

// --- Nível Aventureiro ---

// Movimentação do Cavalo
void moveKnightAventureiro() {
    printf("--- Nível Aventureiro: Movimentação do Cavalo em L (2 Baixo, 1 Esquerda) ---\n");
    // O movimento em L do cavalo é composto por duas partes:
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n"); // Move uma casa para baixo.
        if (i == 1) { // Após o segundo "Baixo" (índice 1 para 0-indexado)
            int j = 0;
            while (j < 1) { // Este loop executa exatamente uma vez.
                printf("Esquerda\n"); // Move uma casa para a esquerda.
                j++;
            }
        }
    }
    printf("\n");
}

// --- Nível Mestre ---

// Função recursiva para movimentar a Torre (5 casas para a direita)
void moveRookRecursive(int steps) {
    // Caso base: se não houver mais passos, a recursão termina.
    if (steps == 0) {
        return;
    }
    printf("Direita\n"); // Imprime o movimento.
    moveRookRecursive(steps - 1); // Chama a função recursivamente para o próximo passo.
}

// Função recursiva para movimentar a Rainha (8 casas para a esquerda)
void moveQueenRecursive(int steps) {
    // Caso base: se não houver mais passos, a recursão termina.
    if (steps == 0) {
        return;
    }
    printf("Esquerda\n"); // Imprime o movimento.
    moveQueenRecursive(steps - 1); // Chama a função recursivamente para o próximo passo.
}

// Função recursiva para movimentar o Bispo (5 casas na diagonal direita para cima)
void moveBishopRecursive(int steps) {
    if (steps == 0) {
        return;
    }

    // Para cada passo recursivo (que representa uma diagonal),
    for (int i = 0; i < 1; i++) { // Loop externo para a direção "Cima" (executa 1 vez)
        printf("Cima\n");
        for (int j = 0; j < 1; j++) { // Loop interno para a direção "Direita" (executa 1 vez)
            printf("Direita\n");
        }
    }
    // Chama a função recursivamente para os passos restantes.
    moveBishopRecursive(steps - 1);
}

// Função para movimentar o Cavalo em L (1 vez: 2 para cima, 1 para a direita)
void moveKnightMestre() {
    printf("2 Cima, 1 Direita) ---\n");
    int vertical_moves_count = 0;
    int horizontal_moves_count = 0; // Variável para controlar os movimentos horizontais.

    for (int i = 0; i < 3; i++) { // Este loop de 3 iterações parece ter uma lógica complexa
        if (vertical_moves_count < 2) {
            printf("Cima\n");
            vertical_moves_count++;
            if (vertical_moves_count < 2) {
                continue;
            }
        }

        if (horizontal_moves_count < 1) {
            printf("Direita\n");
            horizontal_moves_count++;
            break;
        }
    }
    printf("\n");
}


// Função principal onde o programa começa a execução
int main() {
    printf("Bem-vindo ao Desafio de Programação MateCheck!\n\n");

    // Nível Novato - Movimentação das Peças
    printf("--- Nível Novato: Movimentação do Bispo ---\n"); 
    moveBishopNovato();

    printf("--- Nível Novato: Movimentação da Torre ---\n"); 
    moveRookNovato();

    printf("--- Nível Novato: Movimentação da Rainha ---\n"); 
    moveQueenNovato();

    // Nível Aventureiro - Movimentação do Cavalo
    moveKnightAventureiro();

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    printf("--- Nível Mestre: Movimentação da Torre (recursiva) ---\n");
    moveRookRecursive(ROOK_MOVES);
    printf("\n");

    printf("--- Nível Mestre: Movimentação da Rainha (recursiva) ---\n");
    moveQueenRecursive(QUEEN_MOVES);
    printf("\n");

    printf("--- Nível Mestre: Movimentação do Bispo (recursiva com loops aninhados) ---\n");
    moveBishopRecursive(BISHOP_MOVES);
    printf("\n");

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    moveKnightMestre(); // Chamada para o Cavalo do Nível Mestre

    printf("Desafio concluído! Boa sorte na avaliação!\n");

    return 0; 
}