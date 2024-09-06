#include <stdio.h>

int main() {
    int number;


    printf("Digite um número: ");
    scanf("%d", &number);
    

    
    if(number %2 == 0 ){
         printf("Este numero é par: %d", number);
    } else {
        printf("Este numero é impar: %d", number);
    }

 

    return 0;
}
