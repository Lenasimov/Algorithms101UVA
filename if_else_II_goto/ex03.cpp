/**
3) Fazer um programa para que o usuário digite dois números. Fazer a média destes dois números.
O programa deverá verificar se a média dos números está entre o intervalo de valores de 15 e 37.
Exibir mensagem "Valor válido" caso o número esteja de acordo. Caso negativo, exibir a mensagem:
"Número inválido". Exibir mensagem de erro se os números forem negativos e retornar para nova
digitação do número errôneo. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 57");
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, media;

    error_negative_numbers:
        printf("Digite dois números válidos para calcular a média: ");
        fflush(stdin);
        scanf("%f %f", &n1, &n2);

    if(n1 < 0 || n2 < 0) {
        printf("Números negativos não são permitidos!\n");
        goto error_negative_numbers;

    } else {
        media = (n1 + n2) / 2;

        if(media >= 15 && media <= 37) {
            printf("Valor válido: %.2f \n", media);

        } else {
            printf("Valor inválido: %.2f \n", media);
        }

    }

    printf("Fim do programa! \n");

    system("pause");
}
