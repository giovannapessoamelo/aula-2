#include <stdio.h>

int main() {
    float nota1[30], nota2[30], media[30];
    float somaMedias = 0, mediaTurma;
    int i;

    // Entrada das notas e cálculo das médias individuais
    for (i = 0; i < 30; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1[i]);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2[i]);

        media[i] = (nota1[i] * 2 + nota2[i] * 3) / 5.0;

        somaMedias += media[i];
    }

    // Cálculo da média da turma
    mediaTurma = somaMedias / 30.0;

    printf("\n====================================");
    printf("\nMedia da turma: %.2f\n", mediaTurma);
    printf("====================================\n");

    // Exibição dos alunos acima da média da turma
    printf("\nAlunos acima da media da turma:\n");

    for (i = 0; i < 30; i++) {
        if (media[i] > mediaTurma) {
            printf("\nAluno %d", i + 1);
            printf("\nNota 1: %.2f", nota1[i]);
            printf("\nNota 2: %.2f", nota2[i]);
            printf("\nMedia: %.2f\n", media[i]);
        }
    }

    return 0;
}
