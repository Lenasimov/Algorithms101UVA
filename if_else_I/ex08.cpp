/** 8) Fazer um programa para que o usu�rio digite tr�s notas,
o programa dever� calcular a m�dia aritm�tica e exibir o status.
M�dia >= 7, aprovado;
M�dia <3, reprovado;
Sen�o, prova final.
 **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, avg;

    printf("Digite suas notas n1, n2 e n3: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    avg = (n1 + n2 + n3) / 3;

    if(avg >= 7) {
        printf("Aprovad@! \n");

    } else if(avg <= 3) {
        printf("Reprovad@! \n");

    } else {
        printf("Prova final! \n");
    }

    system("pause");
}
