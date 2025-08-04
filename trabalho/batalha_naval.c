#include <stdio.h>

int main() {
    // Criação do tabuleiro 5x5, inicializado com 0
    int tabuleiro[5][5] = {0};

    // Posicionando o navio vertical (coluna 1, linhas 0 a 2)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][1] = 1;
    }

    // Posicionando o navio horizontal (linha 3, colunas 2 a 4)
    for (int j = 2; j < 5; j++) {
        tabuleiro[3][j] = 2;
    }

    // Mostrando coordenadas do navio vertical
    printf("Coordenadas do navio vertical (valor 1):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    // Mostrando coordenadas do navio horizontal
    printf("\nCoordenadas do navio horizontal (valor 2):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 2) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}


NIVEL AVENTUREIRO:

#include <stdio.h>

int main() {
    // Criação do tabuleiro 10x10, preenchido com zeros
    int tabuleiro[10][10] = {0};

    // 🛳️ Navio 1 - Vertical (coluna 2, linhas 0 a 3)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][2] = 3;
    }

    // 🛳️ Navio 2 - Horizontal (linha 6, colunas 4 a 8)
    for (int j = 4; j <= 8; j++) {
        tabuleiro[6][j] = 3;
    }

    // 🛳️ Navio 3 - Diagonal principal (posição inicial: linha 0, coluna 0)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    // 🛳️ Navio 4 - Diagonal secundária (posição inicial: linha 0, coluna 9)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // 🖨️ Exibição completa do tabuleiro
    printf("🔎 Tabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

nível mestre: #include <stdio.h>

// Função para imprimir qualquer matriz 5x5
void imprimirMatriz(int matriz[5][5], const char* nome) {
    printf("\n🌀 Habilidade: %s\n", nome);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Matriz Cone
    int cone[5][5] = {0};
    cone[0][2] = 1;

    cone[1][1] = 1;
    cone[1][2] = 1;
    cone[1][3] = 1;

    for (int j = 0; j < 5; j++) {
        cone[2][j] = 1;
    }

    // Matriz Cruz
    int cruz[5][5] = {0};

    for (int j = 0; j < 5; j++) {
        cruz[1][j] = 1; // linha do meio
    }
    cruz[0][2] = 1;
    cruz[2][2] = 1;

    // Matriz Octaedro
    int octaedro[5][5] = {0};
    octaedro[0][2] = 1;
    octaedro[1][1] = 1;
    octaedro[1][2] = 1;
    octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    // Impressões
    imprimirMatriz(cone, "Cone");
    imprimirMatriz(cruz, "Cruz");
    imprimirMatriz(octaedro, "Octaedro");

    return 0;
}