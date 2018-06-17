/** 2) Preencher um vetor com os números pares do número 2 a 20 e exibir os resultados do vetor. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void printsArrayRange()
{
    int i = 0, arr[10] = {};


    for(i = 2; i <= 20; i++)
    {
        if(i % 2 == 0 && i <= 20)
        {
            arr[i] = i;
            printf("%d \n", arr[i]);
        }
    }
}


main()
{

    system("cls");

    printsArrayRange();

    puts("\nTHE END!\n");
    system("pause");
}
