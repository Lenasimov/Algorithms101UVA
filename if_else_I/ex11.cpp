/** 11) Fazer um programa para que o usu�rio digite uma idade. O programa dever� verificar:

idade < 16, �N�o Eleitor�;
idade >= 19 e <= 63, �Eleitor obrigat�rio�;
idade <= 18 ou >= 64, �Eleitor facultativo�. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 57");
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if(idade < 16) {
        printf("N�o eleitor! \n");

    } else if(idade <=18 || idade >= 64) {
        printf("Eleitor facultativo! \n");

    } else {
        printf("Eleitor obrigat�rio! \n");
    }

    system("pause");
}
