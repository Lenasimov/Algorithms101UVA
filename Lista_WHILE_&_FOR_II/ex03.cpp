/** 3) Apresentar todos os números divisíveis por 4 que sejam menores que 200. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main() {

    void printNumbersSmallerThan200();

    system("cls");
    setlocale(LC_ALL, "Portuguese");

    printNumbersSmallerThan200();

    system("pause");
}


void printNumbersSmallerThan200() {

    int i;

    for(i = 0; i < 200; i++) {
        if(i % 4 == 0) {
            printf("%d \n", i);
        }
    }

}
