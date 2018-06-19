/**
Fazer um programa para trabalhar com uma matriz 2 x 4.
O usu�rio ir� digitar via teclado os valores inteiros respeitando o tamanho da matriz.
O usu�rio s� poder� digitar 8 vezes (oito digita��es consecutivas).
O usu�rio n�o pode digitar um n�mero a mais do que foi definido para o tamanho total da matriz.
O programa dever� controlar esta a��o.

Premissas:
1. O usu�rio n�o poder� digitar um n�mero menor do que zero e nem maior que 21 para ser armazenado na matriz.
Caso seja, exibir mensagem de erro e retornar para nova digita��o.

2. Os n�meros ser�o digitados de forma aleat�ria para serem armazenados na matriz.
N�o seguir�o uma sequ�ncia l�gica na digita��o por parte do usu�rio.

3. � preciso checar a quantidade de n�meros digitados menores que 11 (primeira linha)
e entre 11 e 21 (segunda linha), pois a matriz deve estar toda preenchida.
Caso o usu�rio j� tenha preenchido uma linha por completo, o programa dever� verificar
que a linha est� completa e n�o permitir mais o armazenamento naquela linha,
exibindo uma mensagem de erro e obrigando o usu�rio a digitar um novo n�mero;

4. Na primeira linha s� poder�o ser armazenados n�meros, pares, menores que 11.
Na segunda linha, apenas n�meros, �mpares, entre 11 e 21.

5. Ap�s a finaliza��o da digita��o (preenchimento da primeira matriz),
criar uma nova fun��o para colocar em uma nova matriz (segunda matriz)
as informa��es da segunda linha da primeira matriz, na primeira linha da matriz nova (segunda matriz)
e a primeira linha da primeira matriz na segunda linha da nova matriz (segunda matriz),
sendo que as informa��es dever�o ser colocadas de tr�s para frente (inverter os n�meros).

Exemplo da matriz 2 x 4:
Primeira Matriz
2       0       8       4
19    13    15     11

Segunda Matriz
11  15  13  19
4     8    0     2

**/

#include<stdio.h>
#include<stdlib.h>

main() {

    int i = 0, j = 0, num = 0, countUnder11 = 0, countOver11 = 0, matrix[2][4] = {{}};
    int reverseMatrix(int mat[2][4]);

    system("cls");

    puts("\n: : : : Fill in the matrix bellow : : : :\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 4; j++) {

            if(i == 0) {
                row_0:
                    printf("\nEnter an integer number for row %d column %d : ", i + 1, j + 1);
                    scanf("%d", &num);
                    if(num < 0 || num > 11 || num > 21 || num % 2 != 0) {
                        printf("\n[ ERROR ] : Row %d only accepts even numbers within the range [0-11]! \n", i + 1);
                        goto row_0;
                    } else {
                        matrix[i][j] = num;
                        countUnder11++;
                    }
            }

            if(i == 1) {
                row_1:
                    printf("\nEnter an integer number for row %d column %d :", i + 1, j + 1);
                    scanf("%d", &num);
                    if(num < 0 || num < 11 || num > 21 || num % 2 == 0) {
                        printf("\n[ ERROR ] : Row %d only accepts odd numbers within the range [11-21]! \n", i + 1);
                        goto row_1;
                    } else {
                        matrix[i][j] = num;
                        countOver11++;
                    }
            }

        }

         if(i == 0 && countUnder11 > 0) {
            printf("\nRow %d completed! Numbers smaller than 11 completed! \n", i + 1);

        } else if(i == 1 && countOver11 > 0) {
            printf("\nRow %d completed! Numbers greater than 11 completed! \n", i + 1);
        }
        puts("\n");

    }

    puts("\n: : : : Printing original matrix : : : :\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d \t", matrix[i][j]);
        }
        puts("\n");
    }

    reverseMatrix(matrix);

    puts("\nTHE END!\n");
    system("pause");
}

int reverseMatrix(int matrix[2][4]) {

    int i = 0, j = 0;

    puts("\n: : : : Printing reversed matrix : : : :\n");
    for(i = 2; i > 0; i--) {
        for(j = 4; j > 0; j--) {
            printf("%d \t", matrix[i-1][j-1]);
        }
        puts("\n");
    }

}
