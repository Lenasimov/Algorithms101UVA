/** 2) Receber um nome no teclado e imprimir quantas letras "a" ou "A" tem o nome. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main() {

    char name[30] = {};
    void countHowManyLettersA(char name[30]);

    system("cls");
    setlocale(LC_ALL, "Portuguese");

    printf("Enter a name: ");
    gets(name);

    countHowManyLettersA(name);

    puts("\nTHE END!\n");

    system("pause");
}

void countHowManyLettersA(char name[30]) {

    int i = 0, nameSize = 0, totalA = 0;

    nameSize = strlen(name);

    for(i = 0; i < nameSize; i++) {
        if(name[i] == 'a' || name[i] == 'A') {
            totalA++;
        }
    }

    printf("%s has %d letter(s) 'a' or 'A' \n", name, totalA);
}
