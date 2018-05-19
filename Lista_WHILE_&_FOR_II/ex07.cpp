/** 7) Escrever um nome e exibí-lo na tela de trás pra frente. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main() {

    char name[30] = {};
    int nameSize = 0;
    void printNameBackwards(char name[30], int nameSize);

    system("cls");
    setlocale(LC_ALL, "Portuguese");

    printf("Enter a name: ");
    gets(name);

    nameSize = strlen(name);

    printNameBackwards(name, nameSize);

    puts("\nTHE END!\n");

    system("pause");
}

void printNameBackwards(char name[30], int nameSize) {

    int i;

    for(i = nameSize; i >= 0; i--) {
        printf("%c", name[i]);
    }

}
