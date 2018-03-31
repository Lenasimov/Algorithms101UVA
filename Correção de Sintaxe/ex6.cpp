/* 6) Fazer um programa que imprima a média aritmética dos números 4, 6 e 8.
Imprimir a média. */

#include<stdio.h>
#include<stdlib.h>

int main() {

    float n1 = 4, n2 = 6, n3 = 8, media;

    media = (n1+n2+n3)/3;

    printf("Media aritmetica: %.2f \n", media);

    system("pause");
    return 0;

}
