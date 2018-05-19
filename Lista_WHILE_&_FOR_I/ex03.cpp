/** 3) Fazer um programa para que o usuário digite um nome e exiba na tela apenas as letras que se encontram na posição par. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main() {

	int nameSize = 0;
	char name[30] = {};
	void printNameAtEvenIndexes(char name[30], int nameSize);

	system("cls");

	printf("Digite um nome: ");
	gets(name);
	nameSize = strlen(name);

	printNameAtEvenIndexes(name, nameSize);

	puts("\nTHE END!\n");

	system("pause");
}

void printNameAtEvenIndexes(char name[30], int nameSize) {

    int i = 0;

    for(i = 0; i < nameSize; i++) {
		if(i % 2 == 0) {
			printf("Letra: %c \t Indice: %d \n", name[i], i);
		}
	}

}
