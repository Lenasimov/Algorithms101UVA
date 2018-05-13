/** 2. Fazer um programa que mostre todos os números pares de 1 até 100 em ordem decrescente. **/

#include<stdio.h>
#include<stdlib.h>

main() {

    int i = 100;

    system("cls");
    system("color 5D");

    puts("Numeros pares de 1 ate 100, em ordem descrescente: ");

    while(i >= 1) {
        if(i % 2 == 0) {
            printf("%d \n", i);
        }
        i--;
    }

    puts("\nFIM DO PROGRAMA!\n");

    system("pause");
}
