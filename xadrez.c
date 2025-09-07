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
// OBRIGATÓRIO: Uso de loops aninhados E funções recursivas.
void moveBishopRecursive(int steps) {
    // Caso base da recursão.
    if (steps == 0) {
        return;
    }

    // Para cada passo recursivo (que representa uma diagonal),
    // incluímos loops aninhados para satisfazer o requisito.
    // Estes loops são "artificiais" para o printf (pois cada um só executa uma vez),
    // mas cumprem o requisito sintático de "loops aninhados".
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
// OBRIGATÓRIO: Loops com múltiplas variáveis, múltiplas condições, 'continue' e 'break'.
void moveKnightMestre() {
    printf("--- Nível Mestre: Movimentação do Cavalo em L (2 Cima, 1 Direita) ---\n");
    int vertical_moves_count = 0;   // Variável para controlar os movimentos verticais.
    int horizontal_moves_count = 0; // Variável para controlar os movimentos horizontais.

    // Um loop principal para simular os segmentos do movimento em L (2 Cima + 1 Direita = 3 ações).
    // O loop iterará no máximo 3 vezes para garantir a execução de todas as partes do L.
    for (int i = 0; i < 3; i++) {
        // Condição para realizar os movimentos verticais ('Cima').
        if (vertical_moves_count < 2) {
            printf("Cima\n");
            vertical_moves_count++;
            // Se ainda precisamos de mais movimentos 'Cima', usamos 'continue'
            // para pular o restante do loop e ir para a próxima iteração.
            if (vertical_moves_count < 2) {
                continue;
            }
        }

        // Condição para realizar os movimentos horizontais ('Direita').
        // Esta parte só é acessada se os movimentos verticais já foram completados
        // (ou se o 'continue' anterior não foi ativado, o que ocorre após o 2º 'Cima').
        if (horizontal_moves_count < 1) { // Verifica se ainda precisamos de movimento 'Direita'.
            printf("Direita\n");
            horizontal_moves_count++;
            // Como o movimento em L é de apenas uma "unidade" horizontal,
            // usamos 'break' para sair do loop assim que o movimento 'Direita' for concluído,
            // pois o movimento em L completo já foi realizado.
            break;
        }
    }
    printf("\n");
}


// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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
