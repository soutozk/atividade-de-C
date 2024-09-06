#include <stdio.h>

int main() {
    float notalab, notaavaliacao, notaexame, mediaponderada;

    printf("Digite a nota do trabalho de laboratório: ");
    scanf("%f", &notalab);
    printf("Digite a nota da avaliação semestral: ");
    scanf("%f", &notaavaliacao);
    printf("Digite a nota do exame final: ");
    scanf("%f", &notaexame);

    mediaponderada = (notalab * 2 + notaavaliacao * 3 + notaexame * 5) / 10;

    printf("Média Ponderada: %.2f\n", mediaponderada);

    if (mediaponderada >= 8.0) {
        printf("Conceito: A\n");
    } else if (mediaponderada >= 7.0) {
        printf("Conceito: B\n");
    } else if (mediaponderada >= 6.0) {
        printf("Conceito: C\n");
    } else if (mediaponderada >= 5.0) {
        printf("Conceito: D\n");
    } else {
        printf("Conceito: E\n");
    }

    return 0;
}
