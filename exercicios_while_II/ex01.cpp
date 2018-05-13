/** 1.	Fazer um programa que mostre todos os números ímpares de 1 até 100.  **/

#include<stdio.h>
#include<stdlib.h>

main() {

    int i = 1;

    system("cls");
    system("color 5D");

    puts("Numeros impares de 1 ate 100, em ordem crescente: ");

    while(i <= 100) {
        if(i % 2 != 0) {
            printf("%d \n", i);
        }
        i++;
    }

    puts("\nFIM DO PROGRAMA! \n");

    system("pause");
}
