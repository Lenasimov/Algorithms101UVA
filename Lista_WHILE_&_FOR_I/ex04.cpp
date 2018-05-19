/** 4) Fazer um programa para digitar um nome e exibí-lo tantas vezes quantos forem seus caracteres.
Exemplo: um nome com 8 letras, terá a aparição do nome 8 vezes na tela. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main() {

	int nameSize = 0;
	char name[30] = {};
	void printNameXTimes(char name[30], int nameSize);

	system("cls");
	setlocale(LC_ALL, "Portuguese");

	printf("Enter a name: ");
	gets(name);

	nameSize = strlen(name);

	printNameXTimes(name, nameSize);

	puts("\nTHE END!\n");

	system("pause");
}

void printNameXTimes(char name[30], int nameSize) {

    int i;

    for(i = 0; i < nameSize; i++) {
		printf("%dª %s \n", i+1 , name);
	}

}
