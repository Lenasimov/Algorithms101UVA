/**

**/

#include<stdio.h>
#include<string.h>

main() {

    double n1 = 0, n2 = 0, PF = 0, media = 0;
    char nome[40];
    char sexo[10];
    char resp[5];

    double calculaMedia(double n1, double n2);
    double calculaMediaFinal(double media, double PF);

    inicio_nome:
        printf("Informe seu nome: ");
        fflush(stdin);
        gets(nome);

        if(strlen(nome) > 40) {
            printf("O nome nao pode conter mais de 40 caracteres! \n");
            goto inicio_nome;
        }

    inicio_sexo:
        printf("Informe seu sexo (feminino ou masculino): ");
        fflush(stdin);
        gets(sexo);

        if(strcmp(sexo, "feminino") != 0 && strcmp(sexo, "masculino") != 0) {
            printf("O sexo deve ser feminino OU masculino! \n");
            goto inicio_sexo;
        }

    inicio_n1:
        printf("Informe a primeira nota (n1): ");
        fflush(stdin);
        scanf("%lf", &n1);

        if(n1 < 0 || n1 > 10) {
            printf("A nota 1 nao pode ser negativa nem maior que 10! \n");
            goto inicio_n1;
        }

    inicio_n2:
        printf("Informe a segunda nota (n2): ");
        fflush(stdin);
        scanf("%lf", &n2);

        if(n2 < 0 || n2 > 10) {
            printf("A nota 2 nao pode ser negativa nem maior que 10! \n");
            goto inicio_n2;
        }

        media = calculaMedia(n1, n2);

        if(media >= 4 && media < 6) {

            inicio_pf:
                printf("Informe a nota da prova final: ");
                fflush(stdin);
                scanf("%lf", &PF);

                if(PF < 0 || PF > 10) {
                    printf("A nota da prova final nao pode ser negativa nem maior que 10! \n");
                    goto inicio_pf;
                }

                calculaMediaFinal(media, PF);
        }

        printf("Nome: %s \nSexo: %s \nMedia: %.2lf \n", nome, sexo, media);

        printf("Deseja encerrar o programa SIM / NAO : ");
        fflush(stdin);
        gets(resp);

        if(strcmp(resp, "SIM") == 0) {
            printf("FIM! \n");

        } else if(strcmp(resp, "NAO") == 0) {
            goto inicio_nome;
        }

}


double calculaMedia(double n1, double n2) {

    double media = 0;

    media = (n1 + n2) / 2;

    if(media < 4) {
        printf("Reprovado! \n");

    } else if(media >= 6) {
        printf("Aprovado! \n");

    } else if(media >= 4 && media < 6) {
        printf("Prova final! \n");
    }

    return media;
}

double calculaMediaFinal(double media, double PF) {

    double mediaFinal = 0;

    mediaFinal = (media + PF) / 2;

    if(mediaFinal < 6) {
        printf("Reprovado! \n");

    } else if(mediaFinal >= 6) {
        printf("Aprovado! \n");
    }

}
