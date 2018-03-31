/** 11) Desenvolver um algoritmo que leia os coeficientes (a, b e c) de uma equação do 2º grau e calcule suas raízes.
O programa deve mostrar, quando possível, o valor das raízes calculadas e a classificação das raízes.

Fórmulas:
delta = (pow(b,2) - 4 * a * c);
x1 = (-b + sqrt(delta))/(2 * a);
x2 = (-b - sqrt(delta))/ (2 * a);
**/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    float a, b, c, delta, x1, x2;

    printf("Informe os coeficientes a, b, e c de uma equacao do 2º grau: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = (pow(b,2) - 4 * a * c);

    x1 = ( -b + sqrt(delta)) / (2 * a);

    x2 = ( -b - sqrt(delta)) / (2 * a);

    if(delta == 0) {
        printf("RAÍZ ÚNICA! \nx1 = %.2f \n", x1);

    } else if(delta < 0) {
        printf("RAÍZES IMAGINÁRIAS! \n");

    } else if(delta > 0) {
        printf("RAÍZES DISTINTAS! \nx1 = %.2f \nx2 = %.2f \n", x1, x2);
    }

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}
