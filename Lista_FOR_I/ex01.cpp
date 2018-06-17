/** 1) Preencher um vetor com n�meros inteiros (8 unidades); solicitar um n�mero do teclado.
Pesquisar se esse n�mero existe no vetor. Se existir, imprimir em qual posi��o do vetor.
Se n�o existir, imprimir MSG que n�o existe. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void searchNumberWithinArray(int arr[8], int n)
{
    int i = 0, found = 0, arrPos = 0, numberFound = 0;

    for(i = 0; i < 8; i++)
    {
        if(n == arr[i])
        {
            found = 1;
            numberFound = arr[i];
            arrPos = i;
        }
    }

    if(found == 1)
    {
        printf("NUMBER FOUND: %d \tARRAY INDEX / POS: %d ", numberFound, arrPos);
    }
    else
    {
        printf("NUMBER NOT FOUND! %d DOES NOT EXIST IN THE ARRAY! \n", n);
    }

}

void fillAnArray()
{
    int arr[8] = {}, i = 0, n = 0;

    for(i = 0; i < 8; i++)
    {
        printf("ENTER %d� NUMBER OF THE ARRAY: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("SEARCH FOR A RANDOM NUMBER WITHIN THE ARRAY: ");
    scanf("%d", &n);

    searchNumberWithinArray(arr, n);

}

main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    fillAnArray();

    puts("\nTHE END!\n");
    system("pause");
}
