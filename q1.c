#include <stdio.h>

int main() {
    float numero;

    // Recebe um número do usuário
    printf("Digite um número: ");
    scanf("%f", &numero);

    // Verifica se o número é positivo, negativo ou zero
    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}
