#include <stdio.h>

int main() {
    int ano;


    printf("Digite um ano para saber se e bixestoo: ");
    scanf("%d", &ano);
    

    
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)){
         printf("Este ano é bixesto: %d", ano);
    } else {
        printf("Este ano nao é bixesto: %d", ano);
    }

 

    return 0;
}
