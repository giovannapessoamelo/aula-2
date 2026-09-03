#include <stdio.h>

#define TAM 15

main() {
    int vetor1 [TAM];
    int vetor2 [TAM];
    int vetor3 [TAM];

    int i, j;
    int numero = 102
    int primo;

    for (i = 0; i < TAM; i++) {
        vetor1[i] = numero;
        numero+= 2;
    }
    numero = 2;
    for(i = 0; i < TAM; i++); {
            while (1) {
                primo = 1;

                for (j = 0; j < i; j++) {
                    if(numero % vetor2[j] == 0) {
                        primo  = 0;
                        break;
                    }
                }        
                if primo {
                    vetor2[i] = numero;
                    break;
                }
                numero++;
                }
            numero++;
    }

    for(i = 0; i < TAM; i++) {
        vetor3[i] = vetor1[i] + vetor2[TAM - 1 -i];
    }

    printf("Vetor 1:\n");
    for(i = 0; i < TAM; i++) {
        printf("%d ",vetor1 )
    }

}
