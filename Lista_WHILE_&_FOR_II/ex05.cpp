/** 5) Escreva um programa em C que leia valores inteiros (int), até ser lido o valor -99.
Quando isso acontecer o programa deverá exibir a soma e a média dos valores lidos. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {

    void printSumAndAvg();

    system("cls");

    printSumAndAvg();

    puts("\nTHE END!\n");

    system("pause");
}

void printSumAndAvg() {

    int num = 0, i = 0, sum = 0;
    float avg = 0, total = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    /*
    while(num != -99) {
        total++;
        sum += num;

        printf("Enter an integer number: ");
        scanf("%d", &num);
    }
    */

    for(i = 0; num != -99; i++) {
        total++;
        sum+= num;

        printf("\nEnter an integer number: ");
        scanf("%d", &num);
    }

    avg = sum / total;

    printf("\nSum: %d \nAverage: %.2f \n", sum, avg);

}
