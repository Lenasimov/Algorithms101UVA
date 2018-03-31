/** 1) Escreva um programa que pergunte o raio de uma circunfer�ncia e,
em seguida, mostre o di�metro, comprimento e �rea da circunfer�ncia.

F�rmula:
diametro = 2 * raio;
comprimento = 2 * pi * raio;
area = pi * raio * raio;

8*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");

    float r, diam, comp, ar;
    const float pi = 3.14;

    printf("Informe o raio da circunfer�ncia: ");
    scanf("%f", &r);

    diam = 2 * r;
    comp = 2 * pi * r;
    ar = pi * pow(r,2); // pi * r * r;

    printf("Para um raio de %.2f \n", r);
    printf("Di�metro:  %.2f \n", diam);
    printf("Comprimento: %.2f \n", comp);
    printf("�rea: %.2f \n", ar);

    system("pause");

}
