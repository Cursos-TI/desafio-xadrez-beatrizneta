#include <stdio.h>

// Constantes para número de casas
#define PASSOS_BISPO 5
#define PASSOS_TORRE 5
#define PASSOS_RAINHA 8

int main() {
    // Ponto de partida padrão (não usado diretamente aqui, mas pode ser expandido)
    const int posX = 4, posY = 4;

    // ================================
    // Movimentação da TORRE para a direita
    // ================================
    printf("Movimento da TORRE:\n");
    // Usando estrutura FOR
    for (int i = 0; i < PASSOS_TORRE; i++) {
        printf("Direita\n");
    }

    // ================================
    // Movimentação da RAINHA para a esquerda
    // ================================
    printf("\nMovimento da RAINHA:\n");
    // Usando estrutura WHILE
    int j = 0;
    while (j < PASSOS_RAINHA) {
        printf("Esquerda\n");
        j++;
    }

    // ================================
    // Movimentação do BISPO: Diagonal superior direita
    // ================================
    // BISPO se move diagonalmente, ou seja, combinação de "Cima" e "Direita"
    printf("\nMovimento do BISPO:\n");
    // Usando estrutura DO-WHILE
    int k = 0;
    do {
        printf("Cima\n");
        printf("Direita\n");
        k++;
    } while (k < PASSOS_BISPO);

    return 0;
}
