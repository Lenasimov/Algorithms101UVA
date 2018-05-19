/** 4) Fazer um programa para exibir:
- O total do somatório;
- A média;
- O total de valores lidos.

O programa deve fazer as leituras dos valores enquanto o usuário estiver fornecendo valores positivos.
Ou seja, o programa deve parar quando o usuário fornecer um valor negativo. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {

    void printSumAvgTotal();

    system("cls");

    printSumAvgTotal();

    puts("\nTHE END!\n");

    system("pause");
}

void printSumAvgTotal() {

    int i = 0, num = 0, total = 0;
    float sum = 0, avg = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    /*
    while(num > 0) {
        total++;
        sum += num;

        printf("\nEnter an integer number: ");
        scanf("%d", &num);
    }
    */

    for(i = 0; num > 0; i++) {
        total++;
        sum += num;

        printf("\nEnter an integer number: ");
        scanf("%d", &num);
    }

    avg = sum / total;

    printf("\nSum: %.2f \nAverage: %.2f \nTotal: %d \n", sum, avg, total);

}
