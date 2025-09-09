#include <stdio.h>

// Desafio de Xadrez 


int main() {
    //  Movimentação das Peças
   
    // Implementação de Movimentação do Bispo
    void moveBishopNovato() {
    printf("5 diagonais superior direita) ---\n");
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
       
    } while (i < QUEEN_MOVES); 
    printf("\n");
}


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


    // Funções Recursivas e Loops Aninhados
   // - Peças simples (Torre, Rainha) com funções recursivas.
// - Bispo: 5 casas diagonal direita para cima (loops aninhados E funções recursivas).
// - Cavalo: 1 vez em L (para cima à direita), usando loops com múltiplas variáveis/condições, continue e break.

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

    
    for (int i = 0; i < 3; i++) {
       
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




int main() {
    printf("Bem-vindo ao Desafio de Programação MateCheck!\n\n");

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // (JÁ FEITO com #define no início do arquivo)

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    moveBishopNovato();

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    moveRookNovato();

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    moveQueenNovato();

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    moveKnightAventureiro();

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

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
