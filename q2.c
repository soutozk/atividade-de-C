#include <stdio.h>

int main() {
    int number1, number2;


    printf("Digite um número: ");
    scanf("%d", &number1);
    
    printf("Digite um número: ");
    scanf("%d", &number2);

    if (number1 > number2) {
        printf("O número %d é maior", number1);
    } else{
         printf("O número %d é maior", number2);
    }

    return 0;
}
