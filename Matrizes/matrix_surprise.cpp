/**
Fazer um programa para trabalhar com uma matriz 2 x 4 (duas linhas e quatro colunas).
O usu�rio ir� digitar via teclado os valores inteiros respeitando o tamanho da matriz (linha x coluna).
O usu�rio s� poder� digitar 8 vezes (oito digita��es consecutivas).
O usu�rio n�o pode digitar um n�mero a mais do que foi definido para o tamanho total da matriz (linha x coluna).
O programa dever� controlar esta a��o.

Premissas:
1.	O usu�rio n�o poder� digitar um n�mero menor do que zero e nem maior que 21 para ser armazenado na matriz.
Caso seja, exibir mensagem de erro e retornar para nova digita��o;

2.	Os n�meros ser�o digitados de forma aleat�ria para serem armazenados na matriz.
N�o seguir�o uma sequ�ncia l�gica na digita��o por parte do usu�rio;

3.	� preciso checar a quantidade de n�meros digitados menores que 11 (primeira linha) e entre 11 e 21 (segunda linha),
pois a matriz deve estar toda preenchida. Caso o usu�rio j� tenha preenchido uma linha por completo,
o programa dever� verificar que a linha est� completa e n�o permitir mais o armazenamento naquela linha,
exibindo uma mensagem de erro e obrigando o usu�rio a digitar um novo n�mero;

4.	Na primeira linha s� poder�o ser armazenados n�meros, pares, menores que 11.
Na segunda linha, apenas n�meros, �mpares, entre 11 e 21;

5.	Ap�s a finaliza��o da digita��o (preenchimento da primeira matriz), criar uma nova fun��o
para colocar em uma nova matriz (segunda matriz) as informa��es da segunda linha da primeira matriz,
na primeira linha da matriz nova (segunda matriz) e a primeira linha da primeira matriz, na segunda linha
da nova matriz (segunda matriz), sendo que as informa��es dever�o ser colocadas de tr�s para frente (inverter os n�meros).

Exemplo de como deve ficar o preenchimento da matriz 2 x 4:

Primeira Matriz
2	     0    	 8  	 4
19	13	15	11

Segunda Matriz
11	15	13	19
4	     8 	 0      2


N�o ser� aceito for�ar a grava��o da informa��o na matriz atrav�s
da identifica��o direta do n�mero da linha e/ou da coluna.
A grava��o deve ser diretamente na matriz com uso dos �ndices,
onde a programadora poder� usar o incremento ou decremento nos �ndices.

Quando houver erro de digita��o por parte de usu�rio, este n�o contar� como uma entrada de dados v�lida.

**/

#include<stdio.h>
#include<stdlib.h>

main() {

	int i = 0, j = 0;

	int matrix[2][4] = {{}};

	int matrix_2[2][4] = {{}};

	void reverseMatrix(int matrix[2][4]);

	system("cls");

	for(i = 0; i < 2; i++) {
		for(j = 0; j < 4; j++) {

			matrix_row:
				printf("Enter a number for the row %d and column %d of the matrix: ", i + 1, j + 1);

				if(i == 0) {
                    scanf("%d", &matrix[i][j]);

                    if(matrix[i][j] < 0 || matrix[i][j] > 21) {
                        printf("\n[ ERROR ] : NOT ALLOWED ==> NEGATIVE NUMBERS NOR NUMBERS GREATER THAN > 21! \n\n");
                        goto matrix_row;

                    } else if(matrix[i][j] % 2 != 0 || matrix[i][j] > 11) {
                        printf("\n[ ERROR ] : ROW %d OF THE MATRIX ONLY ACCEPTS EVEN NUMBERS WITHIN THE RANGE: [0-11]! \n\n", i + 1);
                        goto matrix_row;
                    }
				}

				if(i == 1) {
                    scanf("%d", &matrix[i][j]);

                    if(matrix[i][j] < 11 || matrix[i][j] > 21 || matrix[i][j] % 2 == 0) {
                        printf("\n[ ERROR ] : ROW %d OF THE MATRIX ONLY ACCEPTS ODD NUMBERS WITHIN THE RANGE: [11-21]! \n\n", i+1);
                        goto matrix_row;

                    }
				}
		}
		printf("\nROW %d COMPLETED!\n", i + 1);
		printf("\n");
	}

    puts("\n: : : : FIRST ORIGINAL MATRIX : : : :\n");
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 4; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

    puts("\n: : : : SECOND MATRIX (FIRST MATRIX REVERSED) : : : :\n");
    reverseMatrix(matrix);

	puts("\nTHE END!\n");
	system("pause");
}

void reverseMatrix(int matrix[2][4]) {

    int new_matrix[2][4] = {{}};
    int i = 0, j = 0;

    /*
    for(i = 2; i > 0; i--) {
        for(j = 4; j > 0; j--) {
            new_matrix[i-1][j-1] = matrix[i-1][j-1];
        }
    }
    */

    for(i = 2; i > 0; i--) {
        for(j = 4; j > 0; j--) {
            new_matrix[i-1][j-1] = matrix[i-1][j-1];
            printf("%d ", new_matrix[i-1][j-1]);
        }
        printf("\n");
    }

    /*
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 4; j++) {
            new_matrix[i][j] = matrix[i][j];
        }
    }

    for(i = 2; i > 0; i--) {
        for(j = 4; j > 0; j--) {
            printf("%d ", new_matrix[i-1][j-1]);
        }
        printf("\n");
    }
    */

}
