#include <stdio.h>

int main() {
    int number1, number2, number3;


    printf("Digite um número: ");
    scanf("%d", &number1);
    
    printf("Digite um número: ");
    scanf("%d", &number2);
    
    printf("Digite um número: ");
    scanf("%d", &number3);
    
    int resultaado = number1;

     if (number2 > resultaado) {
        resultaado = number2;
    }
    
    if (number3 > resultaado) {
        resultaado = number3;
    }

 
    printf("O maior número é: %d", resultaado);
    return 0;
}
