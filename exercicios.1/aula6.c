#include <stdio.h>

#define TAM 20

void preemcherVetorDigitacao(int v[], int n);
void imprimirVetor(int v[], int n);
void imprimirVetor(int v[], int n);
int buscaSequencial(int v[], int n, int x);
int removerValor(int v[], int n, int x);

int main() {
    int va[TAM], vb[TAM];
    printf("=== Preenchimento do Vetor A ===\n");
    preencherVetorDigitacao(vb, TAM);
    printf("=== Preenchimento do Vetor B ===\n");
    preencherVetorDigitacao(vb, TAM);
    do {
        printf("MENU\n");
        printf("1 - Imprimir os dois vetores\n");
        printf("2 - Buscar um valor nos dois vetores\n");
        printf("3 - Achar o maior elemento dos dois vetores\n");
        printf("4 - Remover um valor do vetor A\n");
        printf("5 - Remover um valor do vetor B\n");
        printf("Digite sua opção (0 para sair): \n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
            printf
        }
    } while (opção != 0);
    printf("Vetor A = ");
    imprimirVetor(va, TAM);
    printf("Vetor B = ");
    imprimirVetor(vb, TAM);
    return 0;

}

void preemcherVetorDigitacao(int v[], int n) {
    for(int i = 0; i < n; i += 1){
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &v[i]);
    
    }
}

void imprimirVetor(int v[], int n) {
    printf("{");
    if(n > 0) {
        printf(" %d", v[0]);
        for(int i = 1; i < n; i += 1) {
            printf(", %d", v[i]);
        }
    }
    printf(" }\n");
}

int buscaSequencial(int v[], int n, int x){
    for (int i = 0; i<n; i+=1){
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}
// exemplo: { 4, 5, 7, 2, 3 } ==> {4, 5, 2, 3 }
// função que remove um valor, deslocando para a esquerda todos os valores posteriores e retorna 1 se removeu, e 0 caso contrario
int removerValor(int v[], int n, int x) {
    int pos = buscaSequencial(v, n, x);
    if (pos == -1){
        return 0;
    }
    for (int i = pos + 1; i < n; i += 1)
}