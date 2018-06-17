/** 4) Preencher um vetor com os números 10 a 20.
Mostrar os elementos pares do vetor de trás para frente.
Mostrar os números ímpares. **/

#include<stdio.h>
#include<stdlib.h>

main()
{

    int i = 0, arr[11] = {}, t = 10;

    system("cls");

    puts(": : : : ORIGINAL ARRAY - RANGE [10-20] : : : :");
    for(i = 0; i < 11; i++)
    {
        arr[i] = t;
        printf("%d ", arr[i]);
        t ++;
    }

    puts("\n\n");

    puts(": : : : EVEN NUMBERS BACKWARDS : : : :");
    for(i = 10; i >= 0; i = i - 2)
    {
        printf("%d ", arr[i]);
    }

    puts("\n\n");

    puts(": : : : ODD NUMBERS, FORWARD : : : :");
    for(i = 1; i < 11; i = i + 2)
    {
        printf("%d ", arr[i]);
    }

    puts("\nTHE END!\n");
    system("pause");
}
