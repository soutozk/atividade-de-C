#include <stdio.h>

int main() {
    int codigo1= 1, codigo2 = 2, codigo3 = 3, codigo4 = 4, codigo5 = 5,codigoF;
    float salarioAtual, aumento, novoSalario;
    char cargo[20];
    
    printf("Digite o código do cargo do funcionário: ");
    scanf("%d", &codigoF);

    printf("Digite o salário atual do funcionário: R$ ");
    scanf("%f", &salarioAtual);
    
    if (codigoF == codigo1){
        aumento = salarioAtual * 0.50;
        novoSalario = salarioAtual + aumento;
        printf("O aumeto e de: R$ %f\n", aumento);
        printf("O novo salario e de: R$ %f", novoSalario);
    }else if (codigoF == codigo2){
        aumento = salarioAtual * 0.35;
        novoSalario = salarioAtual + aumento;
        printf("O aumeto e de: R$ %f\n", aumento);
        printf("O novo salario e de: R$ %f", novoSalario);
    }else if (codigoF == codigo3){
        aumento = salarioAtual * 0.20;
        novoSalario = salarioAtual + aumento;
        printf("O aumeto e de: R$ %f\n", aumento);
        printf("O novo salario e de: R$ %f", novoSalario);
    }else if (codigoF == codigo4){
        aumento = salarioAtual * 0.10;
        novoSalario = salarioAtual + aumento;
        printf("O aumeto e de: R$ %f\n", aumento);
        printf("O novo salario e de: R$ %f", novoSalario);
    }else if (codigoF == codigo5){
        printf("Não tem aumento");
    }else
    
    return 0;
}