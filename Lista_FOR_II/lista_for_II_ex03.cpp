/** 3. Faça um programa que cria um vetor com 5 elementos inteiros,
lê 5 números do teclado, armazena os números no vetor e imprime
o vetor na ordem inversa. **/

#include<stdio.h>
#include<stdlib.h>

main()
{

    int i = 0, arr[5] = {};

    system("cls");

    puts(": : : : Fill in the array bellow : : : : \n");
    for(i = 0; i < 5; i++)
    {
        printf("\n%d - Enter an integer number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    puts("\n: : : : Printing the array in decreasing order : : : : \n");
    for(i = 4; i >= 0; i--)
    {
        printf("%d \n", arr[i]);
    }

    puts("\nTHE END!\n");
    system("pause");
}
