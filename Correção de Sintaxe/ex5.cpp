/* 5) Fazer um programa que imprima a média aritmética dos números 8 e 9.
Media aritmetica simples ==> a soma de todas os numeros/todas as notas
dividido pela quantidade de numeros/notas. Ex.: (8+9)/2 */

#include<stdio.h>
#include<stdlib.h>

int main() {

    float n1 = 8, n2 = 9, mediaAritmetica, resto;

    mediaAritmetica = (8 + 9)/2;
    resto = (8+9)%2;

    printf("Media aritmetica = %.2f \n", mediaAritmetica);
    printf("Modulo/resto = %.2f \n", resto);

    system("pause");
    return 0;
}








