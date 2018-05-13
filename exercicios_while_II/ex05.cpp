/** 5. Fazer um programa que solicite 10 números ao usuário, através de um "while" e, ao final,
mostre os dois maiores números digitados pelo usuário. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    int i = 3, num = 0, maior = 0, segundoMaior = 0;

    setlocale(LC_ALL, "Portuguese");
    system("cls");
    system("color 5D");

    printf("Digite o 1º numero: ");
    scanf("%d", &maior);

    printf("Digite o 2º numero: ");
    scanf("%d", &num);

    if(maior > num) {
        segundoMaior = num;

    } else {
        maior = num;
        segundoMaior = maior;
    }

    while(i <= 10) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);

        if(num > maior) {
            maior = num;
            segundoMaior = maior;

        } else if(num > segundoMaior) {
            segundoMaior = num;
        }
        i++;
    }

    printf("\nMaior: %d \n", maior);
    printf("Segundo maior: %d \n", segundoMaior);

    puts("\nFIM DO PROGRAMA!\n");

    system("pause");
}


