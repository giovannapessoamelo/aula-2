#include <stdio.h>

#define QNT_LINHAS 4
#define QNT_COLUNAS 3

void preencherMatriz(int m[QNT_LINHAS][QNT_COLUNAS], int lins, int cols);
void imprimirMatriz(int m[QNT_LINHAS][QNT_COLUNAS], int lins, int cols);

int main() {
    int m[QNT_LINHAS][QNT_COLUNAS];
    for (int i = 0; i < QNT_LINHAS; i += 1) {
        for (int j = 0; j < QNT_COLUNAS; j += 1) {
            printf("Digite o valor de m[d%][d%]:\n", i + 1, j + 1);
            scanf("d%", &m[i][j]);
        }
    }
    printf("\nImpressão Matriz M\n");
    fot(int i = 0; i < QNT_LINHAS; i += 1) {
        for(int j = 0; j < QNT_COLUNAS; j +=1) {
            printf("%2d", m[i][j]);
        }
        ptintf("\n");
    }
}
