/** 11) Fazer um programa para que o usuário digite uma idade. O programa deverá verificar:

idade < 16, “Não Eleitor”;
idade >= 19 e <= 63, “Eleitor obrigatório”;
idade <= 18 ou >= 64, “Eleitor facultativo”. **/

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
        printf("Não eleitor! \n");

    } else if(idade <=18 || idade >= 64) {
        printf("Eleitor facultativo! \n");

    } else {
        printf("Eleitor obrigatório! \n");
    }

    system("pause");
}
