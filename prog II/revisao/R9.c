#include <stdio.h>

    int main(){

        int cod,qtd1=0,qtd2=0,qtd3=0,qtd4=0,nulo=0,branco=0;

        do{
            printf("Digite seu voto:");
            scanf("%d",&cod);
            if(cod==1){
                qtd1+=1;
            } if(cod==2){
                qtd2+=1;
            } if(cod==3){
                qtd3+=1;
            } if(cod==4){
                qtd4+=1;
            } 
            if(cod==5){
                nulo+=1;
            } if(cod==6){
                branco+=1;
            }
            


        } while (cod>0);
        printf("Total de votos para candidato 1: %d\n candidato 2: %d\n candidato 3: %d\n candidato 4: %d",qtd1,qtd2,qtd3,qtd4);
            printf("\nVotos nulos %d",nulo);
            printf("\nVoto em branco %d",branco);
        
    }