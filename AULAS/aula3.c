#include <stdio.h>

/*int main() {
    int idade;
    do { 
        printf("Digite a sua idade: ");
        scanf("%d" , &idade);
    
    } while(idade < 0 || idade > 130);
    printf("Você tem %d anos e nasceu em %d\n", idade, 2026 - idade);
    return 0;
}*/

/*int main() {
    for (int i = 2; i <= 50; i += 2) {
        printf("%d", i);
        if (i < 50) {
            printf(", ");
            }
    
    }
    return 0;
}*/

#define VALOR_INICIAL 1
#define VALOR_MAXIMO 50
#define VALOR_INCREMENTO 1
int main() {
    for (int i = VALOR_INICIAL; i <= VALOR_MAXIMO; i += VALOR_INCREMENTO) {
        printf("%d", i);
        if (i < VALOR_MAXIMO) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}


