#include <stdio.h>

float aumento(float x, float y) {
    return x + (x * y / 100);
}

int main() {
    float k, salario;
    int matricula;
    char nome[50];
    
    printf("Digite o valor de K (percentual de aumento): ");
    scanf("%f", &k);
    
    while(1) {
        printf("\nDigite a matricula do funcionario (0 para sair): ");
        scanf("%d", &matricula);
        
        if(matricula == 0) {
            printf("Fim do programa.\n");
            break;
        }
        
        printf("Digite o nome do funcionario: ");
        scanf("%s", nome);
        
        printf("Digite o salario do funcionario: ");
        scanf("%f", &salario);
        
        float salario_aumentado = aumento(salario, k);
        printf("O salario aumentado de %s e: R$ %.2f\n", nome, salario_aumentado);
    }
    
    return 0;
}