/** 6) Fazer um programa para que o usur�rio posso informar dois n�meros inteiros e som�-los.
Se a soma for maior que 10, mostrar o resultado da soma.
**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 3");

    int numInt1, numInt2, sumInt;

    printf("Digite dois n�meros inteiros: ");
    scanf("%d %d", &numInt1, &numInt2);

    sumInt = numInt1 + numInt2;

    if(sumInt >= 10) {
        printf("Sum of %d + %d = %d \n", numInt1, numInt2, sumInt);

    } else {
        printf("Sum is less then 10. \nEnd of program!\n");
    }

    system("pause");
}
