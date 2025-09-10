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

    //NAVIO VERTICAL
    int linhaV = 5;
    int colunaV = 7;

    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    //NAVIO DIAGONAL PRINCIPAL 
    int linhaD1 = 0;
    int colunaD1 = 0;

    for (int k = 0; k < tamanhoNavio; k++) {
        tabuleiro[linhaD1 + k][colunaD1 + k] = 3;
    }

    //DIAGONAL SECUNDÁRIA
    int linhaD2 = 0;
    int colunaD2 = 9;

    for (int k = 0; k < tamanhoNavio; k++) {
        tabuleiro[linhaD2 + k][colunaD2 - k] = 3;
    }

    //CABEÇALHO DA COLUNA
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
