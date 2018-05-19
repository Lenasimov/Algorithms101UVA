/** 4) Fazer um programa para exibir:
- O total do somat�rio;
- A m�dia;
- O total de valores lidos.

O programa deve fazer as leituras dos valores enquanto o usu�rio estiver fornecendo valores positivos.
Ou seja, o programa deve parar quando o usu�rio fornecer um valor negativo. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {

    void printSumAvgTotal();

    system("cls");

    printSumAvgTotal();

    system("pause");
}

void printSumAvgTotal() {

    int i = 0, num = 0, sum = 0;
    float avg = 0, total = 0;

    printf("Enter a integer number: ");
    fflush(stdin);
    scanf("%d", &num);

    if(num <= 0) {
        puts("\nNegative numbers and zero are not allowed! \nTHE END!\n");

    } else {
        sum += num;
        total++;
        avg = sum / total;
    }

    for(i = 0; num > 0 ; i++) {
        printf("Enter a integer number: ");
        fflush(stdin);
        scanf("%d", &num);

        if(num <= 0) {
        puts("\nNegative numbers and zero are not allowed! \nTHE END!\n");

        } else {
            sum += num;
            total++;
            avg = sum / total;
        }
    }

    printf("Sum: %d \nAverage: %.2f \nTotal: %.1f \n", sum, avg, total);
}
