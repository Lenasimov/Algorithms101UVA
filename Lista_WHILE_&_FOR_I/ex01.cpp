/** 1) Fazer um programa para que o usuário possa digitar seu nome na tela 10 vezes. Um nome por linha. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

	void printNameXTimes();

	system("cls");
	system("color 0D");
	setlocale(LC_ALL, "Portuguese");

	printNameXTimes();

	puts("\nTHE END!\n");

	system("pause");
}

void printNameXTimes() {

    int i = 0;
    char name[30] = {};

    printf("Digite seu nome 10 vezes... \n");

	for(i = 0; i < 10; i++) {
		printf("Digite a %dª vez: ", i+1);
		gets(name);
	}

	for(i = 0; i < 10; i++) {
		printf("Indice: %d \t Nome: %s \n", i,name);
	}

}
