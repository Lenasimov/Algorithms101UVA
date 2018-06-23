/**
Fazer um programa para trabalhar com uma matriz 4 x 4 (quatro linhas e quatro colunas).
O usu�rio ir� digitar via teclado os valores inteiros respeitando o tamanho da matriz (linha x coluna).
O usu�rio s� poder� digitar 16 vezes (4 x 4 = 16 digita��es consecutivas) e apenas n�meros �mpares.

A digita��o dos valores dever� ser crescente, ou seja, do menor para  maior
(se o usu�rio digitar o n�mero 1 como primeiro n�mero, o segundo dever� ser 3, depois 5, depois 7,
 depois 9 e assim por diante).

O programa dever� obedecer esta sequ�ncia crescente.
Caso o usu�rio comece pelo n�mero 63, o programa n�o dever� aceitar,
pois n�o ser� poss�vel digitar 16 n�meros �mpares.
O programa dever� controlar esta informa��o inicial - primeira digita��o do usu�rio.

Premissas:

1. O usu�rio n�o pode digitar um n�mero par e nem a mais do que foi definido para o tamanho
total da matriz (linha x coluna). O programa dever� controlar esta a��o;

2. O usu�rio n�o poder� digitar um n�mero menor do que 1 e nem maior que 99 para ser armazenado
na matriz. Caso seja, exibir mensagem de erro e retornar para uma nova digita��o;

3. N�o ser� permitida a grava��o de n�mero duplicados. Caso aconte�a, exibir mensagem de erro e retornar
para uma nova entrada de dados;

4. Ap�s a finaliza��o da digita��o (preenchimento total da matriz), dever� ser exibida a m�dia dos n�meros
que fazem parte da diagonal principal (da esquerda para a direita) (somat�rio dos n�meros / quantidade de n�meros da diagonal principal).

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
