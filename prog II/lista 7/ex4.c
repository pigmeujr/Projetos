#include <stdio.h>

    typedef struct {
        int codigo;
        char autor[50];
        char nome_livro[50];
        char editora[50];
        int paginas;
    } cad;
    
    int main(){

        cad exatas[3],humanas[3],biomedicas[3];
        int qtd_exatas=0,qtd_humanas=0,qtd_biomedicas=0;
        cad c;
        int cod;


        for (int i = 0; i < 9; i++){
            printf("Digite o codigo do livro:");
            scanf("%d",&c.codigo);
            getchar();

            printf("Digite o nome do autor:");
            fgets(c.autor,50,stdin);

            printf("Digite o nome do livro:");
            fgets(c.nome_livro,50,stdin);

            printf("Digite a editora:");
            fgets(c.editora,50,stdin);

            printf("Digite o numero de paginas:");
            scanf("%d",&c.paginas);
            getchar();

            if (c.editora[0]=='e'){
                exatas[qtd_exatas++]=c;
            }
            if (c.editora[0]=='h'){
                humanas[qtd_humanas++]=c;
            }
            if (c.editora[0]=='b'){
                biomedicas[qtd_biomedicas++]=c;
            }
        }

        //letra b
        do{
            printf("Digite o codigo do livro:");
            scanf("%d",&cod);
            getchar();

            if (cod == -1) break;
            
            int achou=0;
            
            for (int i = 0; i < qtd_exatas; i++) {
                if (exatas[i].codigo == cod) {
                printf("\n--- LIVROS DE CIENCIAS EXATAS ---\n");
                printf("Codigo: %d\n", exatas[i].codigo);
                printf("Autor: %s", exatas[0].autor);
                printf("Nome do Livro: %s", exatas[0].nome_livro);
                printf("Area: %s", exatas[0].editora);
                printf("Paginas: %d\n", exatas[0].paginas);
                achou=1;
                break;
                }
            }

            for (int i = 0; i < qtd_humanas; i++) {
                if (humanas[i].codigo == cod) {
                printf("\n--- LIVROS DE CIENCIAS HUMANAS ---\n");
                printf("Codigo: %d\n", humanas[i].codigo);
                printf("Autor: %s", humanas[0].autor);
                printf("Nome do Livro: %s", humanas[0].nome_livro);
                printf("Area: %s", humanas[0].editora);
                printf("Paginas: %d\n", humanas[0].paginas);
                achou=1;
                break;
                }
            }

            for (int i = 0; i < qtd_biomedicas; i++) {
                if (biomedicas[i].codigo == cod) {
                printf("\n--- LIVROS DE CIENCIAS BIOMEDICAS ---\n");
                printf("Codigo: %d\n", biomedicas[i].codigo);
                printf("Autor: %s", biomedicas[0].autor);
                printf("Nome do Livro: %s", biomedicas[0].nome_livro);
                printf("Area: %s", biomedicas[0].editora);
                printf("Paginas: %d\n", biomedicas[0].paginas);
                achou=1;
                break;
                }
            }

            if (!achou){
                printf("Livro com código %d não encontrado.\n", cod);
            }
            

        
           
        } while (cod!=-1);
        

        
    }