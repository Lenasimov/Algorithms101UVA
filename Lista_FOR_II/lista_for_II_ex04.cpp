/** 4. Faça um programa que lê uma matriz de 3 x 3,
multiplica cada elemento por 5 e imprime o resultado. **/

#include<stdio.h>
#include<stdlib.h>

main()
{

    int i = 0, j = 0, numbers[3][3] = {{}};

    system("cls");

    puts(": : : : Fill in the matrix bellow : : : : \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter a number for the row %d column %d : ", i + 1, j + 1);
            scanf("%d", &numbers[i][j]);
        }
    }

    puts("\n: : : : Printing the original matrix[i][j] : : : : \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d \t", numbers[i][j]);
        }
        puts("\n");
    }

    puts("\n: : : : Printing the matrix[i][j] * 5 : : : :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d \t", (numbers[i][j] * 5));
        }
        puts("\n");
    }

    puts("\nTHE END!\n");
    system("pause");
}
