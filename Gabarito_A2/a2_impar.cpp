/**
Fazer um programa para trabalhar com uma matriz 4 x 4 (quatro linhas e quatro colunas).
O usuário irá digitar via teclado os valores inteiros respeitando o tamanho da matriz (linha x coluna).
O usuário só poderá digitar 16 vezes (4 x 4 = 16 digitações consecutivas) e apenas números ímpares.

A digitação dos valores deverá ser crescente, ou seja, do menor para  maior
(se o usuário digitar o número 1 como primeiro número, o segundo deverá ser 3, depois 5, depois 7,
 depois 9 e assim por diante).

O programa deverá obedecer esta sequência crescente.
Caso o usuário comece pelo número 63, o programa não deverá aceitar,
pois não será possível digitar 16 números ímpares.
O programa deverá controlar esta informação inicial - primeira digitação do usuário.

Premissas:

1. O usuário não pode digitar um número par e nem a mais do que foi definido para o tamanho
total da matriz (linha x coluna). O programa deverá controlar esta ação;

2. O usuário não poderá digitar um número menor do que 1 e nem maior que 99 para ser armazenado
na matriz. Caso seja, exibir mensagem de erro e retornar para uma nova digitação;

3. Não será permitida a gravação de número duplicados. Caso aconteça, exibir mensagem de erro e retornar
para uma nova entrada de dados;

4. Após a finalização da digitação (preenchimento total da matriz), deverá ser exibida a média dos números
que fazem parte da diagonal principal (da esquerda para a direita) (somatório dos números / quantidade de números da diagonal principal).

Exemplo da matriz 4 x 4 :

1       3        5      7
9       11     13    15
17     19     21    23
25     27     29    31

  **/

#include<stdio.h>
#include<stdlib.h>

main() {

    int i = 0, j = 0, mat[4][4] = {{}};
    float media = 0;
    float mediaDiagonal(int mat[4][4]);

    system("cls");

    puts(": : : : Preencha a matriz abaixo : : : : \n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            inicio:
                printf("\nDigite um numero para linha %d coluna %d : ", i + 1, j + 1);

                if(i == 0 && j == 0) {
                    scanf("%d", &mat[i][j]);

                    if(mat[i][j] < 1 || mat[i][j] > 99 || mat[i][j] >= 63 || mat[i][j] % 2 == 0) {
                        printf("\n[ ERRO ] :  O primeiro numero nao pode ser igual nem maior que 63! Os numeros devem ser impares entre [1-61], e devem estar em ordem crescente! \n");
                        goto inicio;
                    }

                } else {
                    scanf("%d", &mat[i][j]);

                    if(mat[i][j] != (mat[i][j-1]+2) || mat[i][j] < 1 || mat[i][j] > 99 || mat[i][j] >= 63 || mat[i][j] % 2 == 0) {
                        printf("\n[ ERRO ] : Os numeros devem ser impares entre [1-61], e devem estar em ordem crescente! \n");
                        goto inicio;
                    }
                }
        }
    }

    puts("\n: : : : Printando a matriz : : : : \n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j< 4; j++) {
            printf("%d \t", mat[i][j]);
        }
        puts("\n");
    }

    media = mediaDiagonal(mat);
    printf("\nMedia da Diagonal Principal (da esquerda para a direita): %.2f", media);

    puts("\nFIM DO PROGRAMA!\n");
    system("pause");
}

float mediaDiagonal(int mat[4][4]) {

    int i = 0, j = 0, soma = 0, cont = 0;
    float media = 0;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(i + j == 3) {
                soma += mat[i][j];
                cont++;
            }
        }
    }
    return media = soma / cont;
}
