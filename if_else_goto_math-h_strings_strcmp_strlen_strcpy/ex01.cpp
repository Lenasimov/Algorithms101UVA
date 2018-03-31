/**
1) Fa�a um programa para calcular a dist�ncia e o consumo numa viagem.
O usu�rio dever� informar a velocidade m�dia, as horas e a cidade.
Exibir o consumo gasto.

F�rmulas:
distancia = horas * velMedia;
consumo = distancia / km;

cidade                         ||       km
Rio de Janeiro            ||        9
Minas Gerais               ||       7
Esp�rito Santo             ||       6
S�o Paulo                    ||     12

**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    char cidade[100];
    float velMedia, horas, distancia, consumo;

    inicio:
        printf("Informe a cidade de onde est� partindo: ");
        fflush(stdin);
        gets(cidade);

        printf("Informe a velocidade m�dia: ");
        fflush(stdin);
        scanf("%f", &velMedia);

        printf("Informe as quantidade de horas: ");
        fflush(stdin);
        scanf("%f", &horas);

    if(strcmp(cidade, "Rio de Janeiro") == 0) {
            distancia = horas * velMedia;
            consumo = distancia / 9;
            printf("Para %s, o consumo gasto foi de: %.2f L/Km. \n", cidade, consumo);

    } else if (strcmp(cidade, "Minas Gerais") == 0) {
            distancia = horas * velMedia;
            consumo = distancia / 7;
            printf("Para %s, o consumo gasto foi de: %.2f L/Km. \n", cidade, consumo);

    } else if(strcmp(cidade, "Espirito Santo") == 0) {
            distancia = horas * velMedia;
            consumo = distancia / 6;
            printf("Para %s, o consumo gasto foi de: %.2f L/Km. \n", cidade, consumo);

    } else if(strcmp(cidade, "Sao Paulo") == 0) {
            distancia = horas * velMedia;
            consumo = distancia / 12;
            printf("Para %s, o consumo gasto foi de : %.2f L/Km. \n", cidade, consumo);

    } else {
        printf("Informa��es inv�lidas, por favor, tente novamente. \n");
        goto inicio;
    }

    printf("Fim do programa! \n");

    system("pause");
}
