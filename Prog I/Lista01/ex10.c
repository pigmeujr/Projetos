#include <stdio.h>

int main(){
    int horas,minutos,hora2,minuto2,diferença_hora,diferença_min;
    printf("Digite o primeiro horario: ");
    scanf("%d %d",&horas,&minutos);
    printf("Digite o segundo horario: ");
    scanf("%d %d",&hora2,&minuto2);
    diferença_hora = horas-hora2;
    diferença_min = minutos -minuto2;
    printf("O tempo entre os horários é: %02d:%02d\n", diferença_hora,diferença_min);


}