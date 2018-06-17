/**
Fazer um programa para trabalhar com uma matriz 4x4 (quatro linhas x quatro colunas).

1. Os números devem ser maiores que 0 && menores que 15.
Caso contrário, exibir mensagem de erro e retornar para nova digitação.

2. Os números devem ser digitados em ordem crescente.
Caso contrário, exibir mensagem de erro e retornar para nova digitação.

3. Na primeira linha só poderão ser armazenados números pares menores que 7.
Na segunda linha, apenas números ímpares menores que 9.
Na terceira linha, apenas números pares entre 8 e 14.
Na quarta linha, apenas números ímpares entre 9 e 15.

4. Após a finalização da digitação, deverá ser exibida a média dos números que fazem parte da diagonal principal.
(somatório dos números / quantidade total de números)

Exemplo de como deve ficar o preenchimento da Matriz:

0   2       4       6
1   3       5       7
8   10     12   14
9   11     13   15

A diagonal principal é 0, 3, 12, 15.
mat[0][0]
mat[1][1]
mat[2][2]
mat[3][3]

 **/

#include<stdio.h>
#include<stdlib.h>
main()
{

    int num = 0, i = 0, j = 0, matrix[4][4] = {{}};
    int sortMatrix(int mat[4][4]);
    int sumOfMatrix(int mat[4][4]);

    system("cls");

    puts(": : : Fill in the matrix bellow : : : :");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {

            if(i == 0)
            {

                row_0:
                    printf("\nEnter a number for the row %d column %d : ", i + 1, j + 1);
                    scanf("%d", &num);

                    if(num < 0 || num >15)
                    {
                        printf("\n[ ERROR ] : The Matrix only allows numbers within the range [0-15]! \n");
                        goto row_0;

                    } else if (num % 2 != 0 || num > 7)
                    {
                        printf("\n[ ERROR ] : On row %d, the Matrix only allows even numbers within the range [0-7]! \n", i + 1);
                        goto row_0;

                    } else
                    {
                        matrix[i][j] = num;
                    }
            }

            if(i == 1)
            {
                row_1:
                    printf("\nEnter a number for the row %d column %d : ", i + 1, j + 1);
                    scanf("%d", &num);

                     if(num < 0 || num >15)
                    {
                        printf("\n[ ERROR ] : The Matrix only allows numbers within the range [0-15]! \n");
                        goto row_1;

                    } else if(num % 2 == 0  || num > 9)
                    {
                        printf("\n[ ERROR ] : On row %d, the matrix only allows odd numbers within the range [0-9]! \n", i + 1);
                        goto row_1;

                    } else
                    {
                        matrix[i][j] = num;
                    }
            }

            if(i == 2)
            {
                row_2:
                    printf("\nEnter a number for the row %d column %d : ", i + 1, j + 1);
                    scanf("%d", &num);

                     if(num < 0 || num >15)
                    {
                        printf("\n[ ERROR ] : The Matrix only allows numbers within the range [0-15]! \n");
                        goto row_2;

                    } else if(num % 2 != 0 || num < 8 || num > 14)
                    {
                        printf("\n[ ERROR ] : On row %d, the matrix only allows even numbers within the range [8-14]! \n", i + 1);
                        goto row_2;

                    } else
                    {
                        matrix[i][j] = num;
                    }
            }

            if(i == 3)
            {
                row_3:
                    printf("\nEnter a number for the row %d column %d : ", i + 1, j + 1);
                    scanf("%d", &num);

                     if(num < 0 || num >15)
                    {
                        printf("\n[ ERROR ] : The Matrix only allows numbers within the range [0-15]! \n");
                        goto row_3;

                    } else if(num % 2 == 0 || num < 9 || num > 15)
                    {
                        printf("\n[ ERROR ] : On row %d, the matrix only allows odd numbers within the range [9-15]! \n", i + 1);
                        goto row_3;

                    } else
                    {
                        matrix[i][j] = num;
                    }
            }

        }
    }

    sortMatrix(matrix);

    sumOfMatrix(matrix);

    puts("\nTHE END!\n");
    system("pause");
}

int sortMatrix(int matrix[4][4])
{
    int num = 0, i = 0, j = 0, k = 0, l = 0, temp = 0, sorted_matrix[4][4] = {{}};

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            for(l = i; l < 4; l++)
            {
                if(l == i)
                {
                    for(k = (j+1); k < 4; k++)
                    {
                        if(matrix[i][j] > matrix[l][k])
                        {
                            sorted_matrix[i][j] = matrix[i][j];
                            matrix[i][j] = matrix[l][k];
                            matrix[l][k] = sorted_matrix[i][j];
                        }
                    }

                } else if(l > i)
                {
                    for(k = 0; k < 4; k++)
                    {
                        if(matrix[i][j] > matrix[l][k])
                        {
                            sorted_matrix[i][j] = matrix[i][j];
                            matrix[i][j] = matrix[l][k];
                            matrix[l][k] = sorted_matrix[i][j];
                        }
                    }
                }


            }
        }
    }

    puts("\n: : : : The Matrix : : : :\n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        puts("\n");
    }

}

int sumOfMatrix(int matrix[4][4])
{
    int i = 0, j = 0, diagonalCount = 0, diagonalSum = 0;
    float diagonalAvg = 0;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(j > i)
            {
                diagonalSum += matrix[i][j];
                diagonalCount++;
            }
        }
    }

    diagonalAvg = diagonalSum / diagonalCount;

    printf("\nMain diagonal total numbers: %d \n", diagonalCount);
    printf("\nMain diagonal sum: %d \n", diagonalSum);
    printf("\nMain diagonal average: %.2f \n", diagonalAvg);

}
