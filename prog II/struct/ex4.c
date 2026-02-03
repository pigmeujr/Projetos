#include <stdio.h>
#include <string.h>

#define QTD 2

typedef struct {
    int codigo;
    char autor[50];
    char titulo[50];
    char editora[50];
    int paginas;
} Livro;

int main() {

    Livro exatas[QTD], humanas[QTD], biomedicas[QTD];

    /* ================== CADASTRO ================== */
    for (int i = 0; i < QTD; i++) {
        printf("\nCadastro Livro %d - Ciencias Exatas\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &exatas[i].codigo);
        getchar();

        printf("Autor: ");
        fgets(exatas[i].autor, 50, stdin);

        printf("Titulo: ");
        fgets(exatas[i].titulo, 50, stdin);

        printf("Editora: ");
        fgets(exatas[i].editora, 50, stdin);

        printf("Numero de paginas: ");
        scanf("%d", &exatas[i].paginas);
        getchar();
    }

    for (int i = 0; i < QTD; i++) {
        printf("\nCadastro Livro %d - Ciencias Humanas\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &humanas[i].codigo);
        getchar();

        printf("Autor: ");
        fgets(humanas[i].autor, 50, stdin);

        printf("Titulo: ");
        fgets(humanas[i].titulo, 50, stdin);

        printf("Editora: ");
        fgets(humanas[i].editora, 50, stdin);

        printf("Numero de paginas: ");
        scanf("%d", &humanas[i].paginas);
        getchar();
    }

    for (int i = 0; i < QTD; i++) {
        printf("\nCadastro Livro %d - Ciencias Biomedicas\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &biomedicas[i].codigo);
        getchar();

        printf("Autor: ");
        fgets(biomedicas[i].autor, 50, stdin);

        printf("Titulo: ");
        fgets(biomedicas[i].titulo, 50, stdin);

        printf("Editora: ");
        fgets(biomedicas[i].editora, 50, stdin);

        printf("Numero de paginas: ");
        scanf("%d", &biomedicas[i].paginas);
        getchar();
    }

    /* ================== CONSULTA POR CODIGO ================== */
    int codigo;

    while (1) {
        printf("\nDigite o codigo do livro (-1 para sair): ");
        scanf("%d", &codigo);

        if (codigo == -1) {
            break;
        }

        int achou = 0;

        for (int i = 0; i < QTD; i++) {
            if (exatas[i].codigo == codigo) {
                printf("\nCiencias Exatas\nAutor: %sTitulo: %sEditora: %sPaginas: %d\n",
                       exatas[i].autor, exatas[i].titulo,
                       exatas[i].editora, exatas[i].paginas);
                achou = 1;
            }
        }

        for (int i = 0; i < QTD; i++) {
            if (humanas[i].codigo == codigo) {
                printf("\nCiencias Humanas\nAutor: %sTitulo: %sEditora: %sPaginas: %d\n",
                       humanas[i].autor, humanas[i].titulo,
                       humanas[i].editora, humanas[i].paginas);
                achou = 1;
            }
        }

        for (int i = 0; i < QTD; i++) {
            if (biomedicas[i].codigo == codigo) {
                printf("\nCiencias Biomedicas\nAutor: %sTitulo: %sEditora: %sPaginas: %d\n",
                       biomedicas[i].autor, biomedicas[i].titulo,
                       biomedicas[i].editora, biomedicas[i].paginas);
                achou = 1;
            }
        }

        if (achou == 0) {
            printf("Livro nao encontrado!\n");
        }
    }

    /* ================== CONSULTA POR NOME E AREA ================== */
    char tituloBusca[50];
    int area;

    getchar();
    printf("\nDigite o nome do livro: ");
    fgets(tituloBusca, 50, stdin);

    printf("Area (1-Exatas | 2-Humanas | 3-Biomedicas): ");
    scanf("%d", &area);

    int encontrado = 0;

    if (area == 1) {
        for (int i = 0; i < QTD; i++) {
            if (strcmp(exatas[i].titulo, tituloBusca) == 0) {
                printf("Livro encontrado em Ciencias Exatas\n");
                encontrado = 1;
            }
        }
    } else if (area == 2) {
        for (int i = 0; i < QTD; i++) {
            if (strcmp(humanas[i].titulo, tituloBusca) == 0) {
                printf("Livro encontrado em Ciencias Humanas\n");
                encontrado = 1;
            }
        }
    } else if (area == 3) {
        for (int i = 0; i < QTD; i++) {
            if (strcmp(biomedicas[i].titulo, tituloBusca) == 0) {
                printf("Livro encontrado em Ciencias Biomedicas\n");
                encontrado = 1;
            }
        }
    }

    if (encontrado == 0) {
        printf("Livro nao encontrado!\n");
    }

    /* ================== LIVROS DE UM AUTOR (100 A 300 PAGINAS) ================== */
    char autorBusca[50];
    int achouAutor = 0;

    getchar();
    printf("\nDigite o nome do autor: ");
    fgets(autorBusca, 50, stdin);

    for (int i = 0; i < QTD; i++) {
        if (strcmp(exatas[i].autor, autorBusca) == 0 &&
            exatas[i].paginas >= 100 && exatas[i].paginas <= 300) {

            printf("Exatas: %s", exatas[i].titulo);
            achouAutor = 1;
        }
    }

    for (int i = 0; i < QTD; i++) {
        if (strcmp(humanas[i].autor, autorBusca) == 0 &&
            humanas[i].paginas >= 100 && humanas[i].paginas <= 300) {

            printf("Humanas: %s", humanas[i].titulo);
            achouAutor = 1;
        }
    }

    for (int i = 0; i < QTD; i++) {
        if (strcmp(biomedicas[i].autor, autorBusca) == 0 &&
            biomedicas[i].paginas >= 100 && biomedicas[i].paginas <= 300) {

            printf("Biomedicas: %s", biomedicas[i].titulo);
            achouAutor = 1;
        }
    }

    if (achouAutor == 0) {
        printf("Nenhuma obra encontrada nesse criterio\n");
    }

    return 0;
}
