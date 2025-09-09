#include <stdio.h>

#define TAM 5       // Tamanho do tabuleiro
#define NAVIO 3     // Valor que representa uma parte do navio
#define AGUA 0      // Valor que representa água
#define TAM_NAVIO 3 // Tamanho fixo dos navios

int main() {
    int tabuleiro[TAM][TAM];
    int i, j;

    // Inicializa o tabuleiro com água
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // --- Posicionamento dos navios ---
    // Navio horizontal na linha 1, começando na coluna 0
    int linhaH = 1, colunaH = 0;
    for (j = 0; j < TAM_NAVIO; j++) {
        tabuleiro[linhaH][colunaH + j] = NAVIO;
    }

    // Navio vertical na coluna 3, começando na linha 2
    int linhaV = 2, colunaV = 3;
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = NAVIO;
    }

    // --- Exibe as coordenadas ocupadas pelos navios ---
    printf("Coordenadas do navio horizontal:\n");
    for (j = 0; j < TAM_NAVIO; j++) {
        printf("(%d, %d)\n", linhaH, colunaH + j);
    }

    printf("\nCoordenadas do navio vertical:\n");
    for (i = 0; i < TAM_NAVIO; i++) {
        printf("(%d, %d)\n", linhaV + i, colunaV);
    }

    // --- Exibe o tabuleiro completo ---
    printf("\nTabuleiro:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

