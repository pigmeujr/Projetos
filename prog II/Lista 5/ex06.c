#include <stdio.h>

    int main(){

        int i,j,pontuacao=0,pontos[100];
        char m[100][10],v[10]={"a""b""c""d""b""c""a""d""a""c"};
        
        printf("Digite as repostas do aluno:\n");
        for (i = 0; i < 100; i++){
             pontuacao=0;
            for (j = 0; j < 10; j++){
                scanf(" %c",&m[i][j]);
                if(m[i][j]==v[j]){
                pontuacao+=1;
            }
            }
            pontos[i]=pontuacao;
        }
        for (i = 0; i < 100; i++){
            printf("Aluno %d acertou %d\n",i,pontos[i]);
        }
        
    }