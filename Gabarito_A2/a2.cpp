/** **/

#include<stdio.h>
#include<stdlib.h>

main() {

    int i = 0, j = 0, mat[4][4] = {{}};
    float media = 0;
    float mediaDiagonalPrincipal(int mat[4][4]);

    system("cls");

    puts(": : : : Preencha a matriz abaixo : : : :\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            inicio:
                printf("\nDigite um numero para linha %d coluna %d : ", i + 1, j + 1);

                if(i == 0 && j == 0) {
                    scanf("%d", &mat[i][j]);

                    if(mat[i][j] <= 0 || mat[i][j] <= 20 || mat[i][j] > 100 || mat[i][j] % 2 != 0) {
                        printf("\nERRO!\n");
                        goto inicio;
                    }

                } else {
                    scanf("%d", &mat[i][j]);

                    if(mat[i][j] != (mat[i][j-1]-2)) {
                        printf("\nERRO! Os numeros devem ser par, devem estar em ordem decrescente e nao pode haver numeros duplicados!\n");
                        goto inicio;
                    }
                }

        }
    }

    media = mediaDiagonalPrincipal(mat);
    printf("\nMedia da Diagonal Principal: %.2f \n", media);

    puts("\nFIM DO PROGRAMA!\n");
    system("pause");
}

float mediaDiagonalPrincipal(int mat[4][4]) {

    int i = 0, j = 0, soma = 0, cont = 0;
    float media = 0;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(i == j) {
                soma += mat[i][j];
                cont++;
            }
        }
    }
    return media = soma / cont;
}

