/*#include <stdio.h>

int main() {
    int numeros[10];
    int i;

    for (i = 0; i<10; i++) {
        scanf("%d\n", &numeros[i]);
    }
    for (i=0; i < 10; i++) {
        printf("%d, ", numeros[i]);
    }

    return 0;
}*/
#include <stdio.h>

void digitacaoVetor(int V[], int n) {
    for(int i = 0; i < n; i +=1) {
        printf("Digite %d numero: ", i+1);
        scanf("%d", &V[i]);
    }
}
void impressaoVetor(int V[], int n) {
    if (n>0) {
        printf(" %d", V[0]);
        for(int i=1; i<n; i +=1){
            printf(", %d", V[i]);
        
        }
    }
}

#define QNT 10

void digitacaoVetor(int V[], int n);
void impressaoVetor(int V[], int n);

int main() {
    int numeros[QNT];
    digitacaoVetor(numeros, QNT);
    impressaoVetor(numeros, QNT);
    return 0;
}