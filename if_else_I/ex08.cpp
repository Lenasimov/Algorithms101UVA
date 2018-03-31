/** 8) Fazer um programa para que o usuário digite três notas,
o programa deverá calcular a média aritmética e exibir o status.
Média >= 7, aprovado;
Média <3, reprovado;
Senão, prova final.
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
