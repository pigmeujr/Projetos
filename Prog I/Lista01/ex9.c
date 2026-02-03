#include <stdio.h>
int main () {
    int hora,minuto,mins;
    printf("Digite o numero de horas e o numero de minutos: ");
    scanf("%d %d",&hora,&minuto);
    mins = (hora*60)+minuto;
    printf("Tempo decorrido %d",mins);
}