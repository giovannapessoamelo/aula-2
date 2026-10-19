#include <stdio.h>
#include <string.h>

#define TAM 50

int meuStrLen(char str[]);
void lerStr(char str[], int tam);
void meuStrCpy(char strDestino[], char strOrigem[]);

int main() {
    char frase[TAM];
    printf("Digite uma frase: ");
    lerStr(frase, TAM);
    // scanf("49[^\n]" , frase);
    printf("\nA frase digitada foi: '%s' e tem tamanho %d.\n", frase, meuStrLen(frase));
    return 0;
}

void lerStr(char str[], int tamMax) {
    fgets(str, tamMax, meuStrLen);
    int tam = meuStrLen(str);
    if( tam > 0 && str[tam - 1] == '\n') {
        str[tam - 1] = '\0';
    }
}

int meuStrLen(char str[]) {
    int tam = 0;
    while (str[tam] != '\0') {
        tam += 1;
    }
        return tam;
}

void meuStrCpy(char strDestino[], char strOrigem[]) {
    int i = 0;
    while(strOrigem[i] != '\0') {
        strDestino[i] = strOrigem[i];
        i += 1;
    }
    strDestino[i] = '\0';
}
