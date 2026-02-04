#include <stdio.h>
#include <stdlib.h>

    int main(){

        int *vet,cap=5,qtd=0,opcao,valor,*tmp;

        vet = malloc(cap * sizeof(int));
        if (vet == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }

        do{
            printf("Escolha uma opcao:\n1. Inserir novo numero\n2. Exibir todos os numeros\n3. Sair\n");
            scanf("%d",&opcao);
            if (opcao<0){
                break;
            }
            

            switch (opcao){
            case 1 : 
                if (qtd==cap){
                    cap*=2;
                    tmp = realloc(vet, cap * sizeof(int));
                    if (tmp == NULL){
                        printf("Erro ao alocar memoria\n");
                        return 1;
                    }
                    vet=tmp;
                }
                printf("Digite os valores:");
                scanf("%d",&valor);
                vet[qtd]=valor;
                qtd++;
                
                break;
            
            case 2:
                if (qtd==0){
                    printf("Vetor vazio");
                    break;
                }else{
                    for (int i = 0; i < qtd; i++){
                        printf("%d \n",*(vet+i));
                    }
                    
                }

                
                break;

            case 3:
                printf("Saindo...");
                return(0);
            }
            
        } while (opcao>=0);
        free(vet);
        
        return(0);
        
    }