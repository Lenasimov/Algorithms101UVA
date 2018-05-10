/** 4. Fazer um programa para exibir na tela todos os números divisíveis por 4 que sejam menores que 200. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {

    int i = 1;

    system("cls");
    system("color 5D");

    while(i < 200) {
        if(i % 4 == 0) {
            printf("%d \n", i);
        }
        i++;
    }

    puts("FIM DO PROGRAMA! \n");

    system("pause");
}
