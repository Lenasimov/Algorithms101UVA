/** 1) Receber do teclado um nome e imprimir tantas vezes quantos forem seus caracteres. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main() {

    char name[30] = {};
    void printName(char name[30]);

    system("cls");
    setlocale(LC_ALL, "Portuguese");

    printf("Enter a name: ");
    gets(name);

    printName(name);

    puts("\nTHE END!\n");

    system("pause");
}

void printName(char name[30]) {

    int i = 0, nameSize = 0;

    nameSize = strlen(name);

    for(i = 0; i < nameSize; i++) {
        printf("%dº: %s \n", i+1, name);
    }
}
