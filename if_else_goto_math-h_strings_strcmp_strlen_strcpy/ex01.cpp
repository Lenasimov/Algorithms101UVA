/**
1) Faça um programa para calcular a distância e o consumo numa viagem.
O usuário deverá informar a velocidade média, as horas e a cidade.
Exibir o consumo gasto.

Fórmulas:
distancia = horas * velMedia;
consumo = distancia / km;

cidade                         ||       km
Rio de Janeiro            ||        9
Minas Gerais               ||       7
Espírito Santo             ||       6
São Paulo                    ||     12

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
        printf("Informe a cidade de onde está partindo: ");
        fflush(stdin);
        gets(cidade);

        printf("Informe a velocidade média: ");
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
        printf("Informações inválidas, por favor, tente novamente. \n");
        goto inicio;
    }

    printf("Fim do programa! \n");

    system("pause");
}
