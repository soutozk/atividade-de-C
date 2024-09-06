#include <stdio.h>

int main() {
    float ld1, lado2, ld3;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &ld1);
    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &ld2);
    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &ld3);

    if (ld1 + ld2 > ld3 && ld1 + ld3 > ld2 && ld2 + ld3 > ld1) {
        if (ld1 == ld2 && ld2 == ld3) {
            printf("O triângulo é equilátero.\n");
        } else if (ld1 == ld2 || ld1 == ld3 || ld2 == ld3) {
            printf("O triângulo é isósceles.\n");
        } else {
            printf("O triângulo é escaleno.\n");
        }
    } else {
        printf("Os lados informados não formam um triângulo válido.\n");
    }

    return 0;
}
