/** 6) Preencher um vetor com n�meros inteiros (8 unidades).
Solicitar ao usu�rio que digite um n�mero.
Pesquisar se esse n�mero existe no vetor.
Se existir, imprimir em qual posi��o do vetor e qual a ordem foi digitada.
Se n�o existir, imprimir mensagem que n�o existe. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main() {

    int i = 0, num = 0, arrIntegers[8] = {};
    void arraySearch(int arrIntegers[8], int num);

    system("cls");
    setlocale(LC_ALL, "Portuguese");

    puts("Fill in an array with integer numbers, and then search for random numbers within the array.");

    for(i = 0; i < 8; i++) {
        printf("\nEnter %d� number: ", i+1);
        scanf("%d", &arrIntegers[i]);
    }

    printf("\nEnter a number to be searched within the array: ");
    scanf("%d", &num);

    arraySearch(arrIntegers, num);

    puts("\nTHE END!\n");

    system("pause");
}

void arraySearch(int arrIntegers[8], int num) {

    int i = 0, found = 0, pos = 0, numberFound = 0;

    for(i = 0; i < 8; i++) {

        if(arrIntegers[i] == num) {
            found = 1;
            pos = i;
            numberFound = arrIntegers[i];
            break;

        } else {
            found = 0;
        }

    }

    if(found == 1)
        printf("Number: %d \tIndex/Position: %d \n", numberFound, pos);

    else
        printf("[ ERROR ] : Number not found! \n");

}
