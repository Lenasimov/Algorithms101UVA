/** 2) Fazer um programa para digitar um nome com mais de 5 posições.
O programa deve calcular e mostrar quantas letras o nome tem.
Para que o programa seja finalizado, basta digitar algo com menos de 4 letras. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main() {

	char name[30] = {};
	int nameSize = 0;
	void printNamesWith5OrMoreLetters(char name[30], int nameSize);

	system("cls");

	printf("Digite um nome com 5 letras ou mais: ");
	gets(name);

	nameSize = strlen(name);

	printNamesWith5OrMoreLetters(name, nameSize);

	puts("\nTHE END!\n");

	system("pause");
}

void printNamesWith5OrMoreLetters(char name[30], int nameSize) {

    int i = 0;

    printf("\nO nome %s tem %d letras. \n", name, nameSize);

    for(i = 0; nameSize > 4; i++) {
		printf("\nDigite um nome com 5 letras ou mais: ");
		gets(name);

		nameSize = strlen(name);

		printf("\nO nome %s tem %d letras. \n", name, nameSize);
	}


	/*
	while(nameSize > 4) {
		printf("Digite um nome com 5 letras ou mais: ");
		gets(name);

		nameSize = strlen(name);

		printf("O nome %s tem %d letras \n", name, nameSize);

		i++;
	}
	*/

}
