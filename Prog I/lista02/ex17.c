#include <stdio.h>

int main() {
    float salario,aumento;
    int codigo;
    printf("Digite seu salario:");
    scanf("%f",&salario);
    printf("Digite o codigo do seu cargo:");
    scanf("%d",&codigo);
    if (codigo==101){
        aumento = salario;
        printf("Cargo: Gerente \nNovo salario: %f",aumento);
    }
    else{
        if (codigo==102){
            aumento = (salario*100.5)/100;
            printf("Cargo: Analista \nNovo salario: %f",aumento);
        }
        if (codigo==103){
            aumento = (salario*101.5)/100;
            printf("Cargo: Progamador \nNovo salario: %f",aumento);
        }
        if (codigo==104){
            aumento = (salario*103)/100;
            printf("Cargo: Designer \nNovo salario: %f",aumento);
        }else{
            aumento = (salario*140)/100;
            printf("Cargo: Cargo desconhecido \nNovo salario: %f",aumento);
        }
        }
    }