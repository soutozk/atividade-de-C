#include <stdio.h>

int main() {
    float salarioAtual, aumento, novoSalario, auxilioEscola1 = 100.00, auxilioEscola2 = 150, salarioF ;

    printf("Digite o salário atual do funcionário: R$ ");
    scanf("%f", &salarioAtual);
    
    if (salarioAtual <= 500.00 ){
        aumento = salarioAtual * 0.50 ;
        novoSalario = salarioAtual + aumento;
        printf("O aumeto e de: R$ %f\n", aumento);
        printf("O novo salario e de: R$ %f", novoSalario);
    }else if (salarioAtual >= 500.01 && salarioAtual <= 1200.00  ){
        aumento = salarioAtual * 0.12;
        novoSalario = salarioAtual + aumento;
        printf("O aumeto e de: R$ %f\n", aumento);
        printf("O novo salario e de: R$ %f", novoSalario);
    }else if (salarioAtual >= 1200.00){
        printf("Sem beneficio");
        
    } 
    if (salarioAtual <= 600.00) {
        salarioF = novoSalario + auxilioEscola1;  
        printf("Com auxílio-escola de R$ %.2f, o novo salário é de: R$ %.2f\n", auxilioEscola1, salarioF);
    }else if (salarioAtual >= 600.00) {
        salarioF = novoSalario + auxilioEscola2;
        printf("Com auxílio-escola de R$ %.2f, o novo salário é de: R$ %.2f\n", auxilioEscola2, salarioF);
    }
    return 0;
    }
