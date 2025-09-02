#include <stdio.h>

int main() {
    
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};

    //TABULEIRO 10 POR 10
    int tabuleiro[10][10];

    //INICIAR COMO 0 AS CASAS
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //TAMANHO DO NAVIO
    int tamanhoNavio = 3;

    //COORDENADAS NAVIO HORIZONTAL
    int linhaH = 2;  
    int colunaH = 4; 

    for (int j = 0; j < tamanhoNavio; j++) {
        tabuleiro[linhaH][colunaH + j] = 3;
    }

    //COORDENADAS NAVIO VERTICAL
    int linhaV = 5;
    int colunaV = 7;

    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    //CABEÇALHO COLUNA
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%2d", j);
    }
    printf("\n");
    
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
        for (int j = 0; j < 10; j++) {
            printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
