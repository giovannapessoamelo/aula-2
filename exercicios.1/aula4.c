#include <stdio.h>
#define QNT_MAX_VALORES 5

int main() {
    int num, soma = 0, qnt = 0;
    int numeros[QNT_MAX_VALORES];
    double media;
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &num);
    while(num > 0) {
        numeros[qnt] = num;
        qnt += 1;
        soma += num;
        if (qnt >= QNT_MAX_VALORES) {
            printf("Quantidade maxima de valores atingida!");
            break;
        }
        printf("Digite um valor inteiro positivo (<= 0 para finalizar): ");
        scanf("%d", &num);
    }
    if (qnt > 0) {
        media = (double) soma / (double) qnt;
        printf("Foram digitados %d números e a média é %lf.\n", qnt, media);
    } else {
        printf("Nenhum numero valido foi digitado\n");
    }
    for(int i = 0; i < QNT_MAX_VALORES; i += 1){
        printf("numeros[%d] = %d\n, i + 1, numeros[i]");
    }
    return 0;
}
