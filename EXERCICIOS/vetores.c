#include <stdio.h>

int main() {
    float nota1[30], nota2[30], media[30];
    float mediaTurma = 0;

    for (int i = 0; i < 30; i++) {
        printf("Digite a primeira nota do aluno %d: ", i + 1);
        scanf("%f", &nota1[i]);

        printf("Digite a segunda nota do aluno %d: ", i + 1);
        scanf("%f", &nota2[i]);

        media[i] = (nota1[i] * 2 + nota2[i] * 3) / 5;

        mediaTurma += media[i];
    }

    mediaTurma = mediaTurma / 30;

    printf("\nMedia da turma: %.2f\n", mediaTurma);

    printf("\nAlunos acima da media da turma:\n");

    for (int i = 0; i < 30; i++) {
        if (media[i] > mediaTurma) {
            printf("Aluno %d - Nota 1: %.2f | Nota 2: %.2f | Media: %.2f\n",
                   i + 1, nota1[i], nota2[i], media[i]);
        }
    }

    return 0;
}