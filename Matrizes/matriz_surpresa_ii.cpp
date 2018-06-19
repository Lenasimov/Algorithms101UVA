/**
1. Fazer um programa para trabalhar com uma matriz 2 x 4;

2. O usu�rio dever� digitar a quantidade de valores inteiros respeitando o tamanho da matriz (linha x coluna).
Ou seja, s� poder� digitar 8 vezes. O usu�rio n�o pode digitar um n�mero a mais do que foi definido como
tamanho total da matriz (linha x coluna);

3. O usu�rio n�o poder� digitar um n�mero menor do que zero e nem maior do que 20 para ser armazenado na matriz;

4. Os n�meros ser�o digitados de forma aleat�ria para serem armazenados na matriz.
Ou seja, n�o ter�o uma sequ�ncia l�gica na digita��o por parte do usu�rio;

5. � preciso checar a quantidade de n�meros digitados que sejam menores que 11 e entre 11 e 20,
pois a matriz deve estar toda preenchida, n�o pode haver linha e/ou coluna com espa�o em branco.
 Caso o usu�rio j� tenha preenchido uma linha por completo ,o programa dever� verificar que a linha
 est� completa e n�o permitir mais o armazenamento naquela linha, exibindo uma mensagem de erro
 e obrigando o usu�rio a digitar um novo n�mero na linha seguinte;

6. Na primeira linha s� poder�o ser armazenados n�meros menores que 11.
Na segunda linha, apenas n�meros entre 11 e 20;

7. Ap�s a finaliza��o da digita��o, imprimir a matriz multiplicando cada valor dela por 2,
e imprimir o total do somat�rio dos n�meros multiplicados por 2.

Exemplo da matriz 2 x 4:

1       5       9       10
13    17    18      20

**/


#include<stdio.h>
#include<stdlib.h>

main() {

    int i = 0, j = 0, num = 0, countUnder11 = 0, countOver11 = 0, matrix[2][4] = {{}};
    int doubleMatrix(int matrix[2][4]);

    system("cls");

    puts("\n: : : : Fill in the matrix bellow : : : :\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 4; j++) {

            if(i == 0) {
                row_0:
                    printf("\nEnter an integer number for row %d column %d : ", i + 1, j + 1);
                    scanf("%d", &num);

                    if(num < 0 || num > 20) {
                        printf("\n[ ERROR ] : Only numbers within the range [0-20] are allowed! \n");
                        goto row_0;

                    } else if(num > 11) {
                        printf("\n[ ERROR ] : Row %d only allows numbers within the range [0-11]! \n", i + 1);
                        goto row_0;

                    } else {
                        matrix[i][j] = num;
                        countUnder11++;
                    }
            }

            if(i == 1) {
                row_1:
                    printf("\nEnter an integer number for row %d column %d : ", i + 1, j + 1);
                    scanf("%d", &num);

                    if(num < 0 || num > 20) {
                        printf("\n[ ERROR ] : Only numbers within the range [0-20] are allowed! \n");
                        goto row_1;

                    } else if(num < 11) {
                        printf("\n[ ERROR ] : Row %d only allows numbers within the range [11-20]! \n", i + 1);
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

    doubleMatrix(matrix);

    puts("\nTHE END!\n");
    system("pause");
}

int doubleMatrix(int matrix[2][4]) {

    int i  = 0, j = 0, sum = 0, new_matrix[2][4] = {{}};

    puts("\n: : : : Printing matrix[i][j] * 2 : : : :\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 4; j++) {
                new_matrix[i][j] = (matrix[i][j]*2);
                printf("%d \t", new_matrix[i][j]);
                sum += new_matrix[i][j];
        }
        puts("\n");
    }

    printf("\nSum of matrix[i][j] * 2 : %d \n", sum);
}
