/**
3) Fazer um programa para que o usu�rio digite dois n�meros. Fazer a m�dia destes dois n�meros.
O programa dever� verificar se a m�dia dos n�meros est� entre o intervalo de valores de 15 e 37.
Exibir mensagem "Valor v�lido" caso o n�mero esteja de acordo. Caso negativo, exibir a mensagem:
"N�mero inv�lido". Exibir mensagem de erro se os n�meros forem negativos e retornar para nova
digita��o do n�mero err�neo. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 57");
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, media;

    error_negative_numbers:
        printf("Digite dois n�meros v�lidos para calcular a m�dia: ");
        fflush(stdin);
        scanf("%f %f", &n1, &n2);

    if(n1 < 0 || n2 < 0) {
        printf("N�meros negativos n�o s�o permitidos!\n");
        goto error_negative_numbers;

    } else {
        media = (n1 + n2) / 2;

        if(media >= 15 && media <= 37) {
            printf("Valor v�lido: %.2f \n", media);

        } else {
            printf("Valor inv�lido: %.2f \n", media);
        }

    }

    printf("Fim do programa! \n");

    system("pause");
}
