/**
1. Fa�a um programa para que o usu�rio digite 8 n�meros sequenciais, iniciando do 0 at� 7.

2. A entrada de dados n�o pode passar do n�mero 7 (o programa n�o pode aceitar n�meros
menores que 0 e nem maiores de 7). Caso o n�mero digitado n�o tenha obedecido � sequ�ncia
de digita��o, o programa dever� exibir uma mensagem de erro e retornar para uma nova digita��o.

3. Esses n�meros dever�o ser armazenados em uma matriz 2x4 (duas linhas e quatro colunas),
da seguinte forma:
* Os n�meros pares, obrigatoriamente, na primeira linha;
* Os n�meros �mpares, obrigatoriamente, na segunda linha;

4. Ap�s este preenchimento de informa��es na matriz, o programa
dever� imprimir para o usu�rio:
* O somat�rio de todos os n�meros pares da primeira linha;
* O somat�rio de todos os n�meros �mpares da segunda linha;
* O somat�rio de todos os n�meros da primeira, segunda, terceira e quarta colunas.

Exemplo da matriz 2 x 4:

0 2 4 6
1 3 5 7

N�o ser� aceito for�ar a grava��o da informa��o na matriz atrav�s
da identifica��o direta do n�mero da linha e/ou da coluna.

 **/

 // sum of all the numbers of all the 4 columns = sum of all numbers in the matrix

 #include<stdio.h>
 #include<stdlib.h>

 main()
{
    int i = 0, j = 0, num = 0, matrix[2][4] = {{}};
    int printMatrixSum(int matrix[2][4]);

    system("cls");

    puts(": : : : Fill in the matrix bellow : : : :");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 4; j++)
        {
            matrix_row:
                printf("\nEnter a number for the row %d column %d : ", i + 1, j + 1);
                scanf("%d", &num);

                if(i == 0)
                {
                    if(num < 0 || num > 7 || num % 2 != 0)
                    {
                        printf("\n[ ERROR ] : %d row only allows even numbers within the range [0-7]! \n", i + 1);
                        goto matrix_row;

                    } else
                    {
                        matrix[i][j] = num;
                    }

                } else if(i == 1)
                {
                    if(num < 0 || num > 7 || num % 2 == 0)
                    {
                        printf("\n[ ERROR ] : %d row only allows odd numbers within the range [0-7]! \n", i + 1);
                        goto matrix_row;

                    } else
                    {
                        matrix[i][j] = num;
                    }
                }
        }
        printf("\nRow %d completed! \n", i + 1);
    }

    puts("\n: : : : THE MATRIX : : : :\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printMatrixSum(matrix);

    puts("\nTHE END!\n");
    system("pause");
}

int printMatrixSum(int matrix[2][4])
{
    int i = 0, j = 0, sumOfEven = 0, sumOfOdds = 0, totalSumOfMatrix = 0;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(matrix[i][j] % 2 == 0)
            {
                sumOfEven += matrix[i][j];

            } else if(matrix[i][j] % 2 != 0)
            {
                sumOfOdds += matrix[i][j];
            }
            totalSumOfMatrix += matrix[i][j];
        }
    }

    printf("\nSum of all the even numbers: %d \n", sumOfEven);
    printf("\nSum of all the odd numbers: %d \n", sumOfOdds);
    printf("\nTotal sum of the matrix: %d \n", totalSumOfMatrix);

}
