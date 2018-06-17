/**
1.	Fazer um programa para trabalhar com uma matriz 2 x 4 (duas linhas e quatro colunas);

2.	O usuário digitará a quantidade de valores inteiros respeitando o tamanho da matriz (linha x coluna).
Ou seja, só poderá digitar 8 vezes (2 x 4 = 8). O usuário não pode digitar um número a mais do que foi
definido como tamanho total da matriz (linha x coluna);

3.	O usuário não poderá digitar um número menor do que zero e nem maior do que 20 para ser armazenado na matriz;

4.	Os números serão digitados de forma aleatória para serem armazenados na matriz.
Ou seja, não terão uma sequência lógica na digitação por parte do usuário;

5.	É preciso checar a quantidade de números digitados que sejam menores que 11 e entre 11 e 20,
pois a matriz deve estar toda preenchida, não pode haver linha e/ou coluna com espaço em branco,
com as oito entradas de dados que ocorrerão. Caso o usuário já tenha preenchido uma linha por completo
o programa deverá verificar que a linha está completa e não permitir mais o armazenamento naquela linha,
exibindo uma mensagem de erro e obrigando o usuário a digitar um novo número;

6.	Na primeira linha só poderão ser armazenados números menores que 11 (entre 0 e 11).
Na segunda linha, apenas números entre 11 e 20;

7.	Após a finalização da digitação, imprimir a matriz multiplicando cada valor armazenado na matriz por 2,
e imprimir o total do somatório dos números multiplicados por 2.

Exemplo de como deve ficar o preenchimento da matriz 2 x 4:

1     5     9  10
13  17  18  20

Não será aceito forçar a gravação da informação na matriz através da identificação direta do número da linha e/ou da coluna.
Não será aceito gravar a informação em vetor. A gravação deve ser diretamente na matriz.

 **/

#include<stdio.h>
#include<stdlib.h>

main()
{

    int i = 0, j = 0, matrix[2][4] = {{}};
    int doubleOriginalMatrix(int matrix[2][4]);

    system("cls");

    puts(": : : : Fill in the matrix bellow : : : :");
    for(i = 0; i <= 1; i++)
    {
        for(j = 0; j <= 3; j++)
        {
            row_init:
            printf("\nEnter a number for row %d column %d : ", i+1, j+1);

            if(i == 0)
            {
                scanf("%d", &matrix[i][j]);

                if(matrix[i][j] < 0 || matrix[i][j] > 20)
                {
                    printf("\n[ ERROR ] : All numbers should be in the range [0-20]! \n");
                    goto row_init;

                } else if(matrix[i][j] > 11)
                {
                    printf("\n[ ERROR ] :  Numbers of the row %d should be within the range [0-11]! \n", i + 1);
                    goto row_init;
                }

            }

            if(i == 1)
            {
                scanf("%d", &matrix[i][j]);

                if(matrix[i][j] < 11 || matrix[i][j] > 20)
                {
                    printf("\n[ ERROR ] : Numbers of the row %d should be within the range [11-20]! \n", i + 1);
                    goto row_init;
                }
            }

        }
        printf("\nRow %d completed! \n", i+1);
        printf("\n");
    }

    puts("\n: : : : Printing original matrix : : : : \n");
    for(i = 0; i <= 1; i++)
    {
        for(j = 0; j <= 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    doubleOriginalMatrix(matrix);

    puts("\nTHE END!\n");
    system("pause");
}

int doubleOriginalMatrix(int matrix[2][4])
{
    int i = 0, j = 0, new_matrix[2][4] = {{}}, sum = 0;

    puts("\n: : : : Printing original matrix[i][j] * 2 : : : : \n");
    for(i = 0; i <= 1; i++)
    {
        for(j = 0; j <= 3; j++)
        {
            sum += matrix[i][j];
            new_matrix[i][j] = matrix[i][j] * 2;
            printf("%d\t", new_matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all numbers of the matrix: %d \n", sum);
    printf("\nSum of all numbers of the matrix * 2: %d \n", sum * 2);

}
