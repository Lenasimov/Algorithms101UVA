/**
1. Faça um programa para que o usuário digite 8 números sequenciais, iniciando do 0 até 7.

2. A entrada de dados não pode passar do número 7 (o programa não pode aceitar números
menores que 0 e nem maiores de 7). Caso o número digitado não tenha obedecido à sequência
de digitação, o programa deverá exibir uma mensagem de erro e retornar para uma nova digitação.

3. Esses números deverão ser armazenados em uma matriz 2x4 (duas linhas e quatro colunas),
da seguinte forma:
* Os números pares, obrigatoriamente, na primeira linha;
* Os números ímpares, obrigatoriamente, na segunda linha;

4. Após este preenchimento de informações na matriz, o programa
deverá imprimir para o usuário:
* O somatório de todos os números pares da primeira linha;
* O somatório de todos os números ímpares da segunda linha;
* O somatório de todos os números da primeira, segunda, terceira e quarta colunas.

Exemplo da matriz 2 x 4:

0 2 4 6
1 3 5 7

Não será aceito forçar a gravação da informação na matriz através
da identificação direta do número da linha e/ou da coluna.

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
