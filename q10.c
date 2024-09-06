#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media, nota_exame;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Média: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aprovado!\n");
    } else if (media >= 3.0 && media < 2.99) {
        printf("Exame!\n");

        nota_exame = (6.0 * 2) - media;
        printf("Você precisa tirar no exame pelo menos: %.2f\n", nota_exame);
    } else {
        printf("Reprovado!\n");
    }

    return 0;
}
