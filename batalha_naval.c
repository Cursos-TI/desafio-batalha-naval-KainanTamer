#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int navio_h_linha = 2, navio_h_col = 3;  
    int navio_v_linha = 5, navio_v_col = 7;  

    if(navio_h_col + 3 > 10 || navio_v_linha + 3 > 10) {
        printf("Erro: Navio fora do tabuleiro!\n");
        return 1;
    }

    for(int i = 0; i < 3; i++) {
        tabuleiro[navio_h_linha][navio_h_col + i] = 3;
    }

    for(int i = 0; i < 3; i++) {
        tabuleiro[navio_v_linha + i][navio_v_col] = 3;
    }

    printf("Tabuleiro de Batalha Naval:\n");
    printf("  0 1 2 3 4 5 6 7 8 9\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", i);
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}