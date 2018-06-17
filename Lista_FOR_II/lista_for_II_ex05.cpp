/** 5. Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos.
Em seguida, o programa deve fazer a multiplicação do vetor pelas colunas da matriz. **/

#include<stdio.h>
#include<stdlib.h>

main()
{

    int i = 0, j = 0, arr[3] = {}, matrix[3][3] = {{}};

    system("cls");

    puts(": : : : Fill in the array bellow : : : : \n");
    for(i = 0; i < 3; i++)
    {
        printf("\n%d - Enter an integer number for the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    puts("\n: : : : Fill in the matrix bellow : : : :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("\nEnter an integer number for row %d column %d : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    puts("\n: : : : Printing the original array : : : : \n");
    for(i = 0; i < 3; i++)
    {
        printf("%d \t", arr[i]);
    }

    puts("\n: : : : Printing orginal matrix : : : :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d \t", matrix[i][j]);
        }
        puts("\n");
    }

    puts("\n: : : : Printing array[i] * matrix[i][j] : : : :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d \t", (arr[i] * matrix[i][j]) );
        }
        puts("\n");
    }

    puts("\nTHE END!\n");
    system("pause");
}
