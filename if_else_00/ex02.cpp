/** 2) Para doar sangue � necess�rio ter idade maior que 20 anos.
Fa�a um aplicativo na linguagem C que pergunte a idade
de uma pessoa e diga se ela pode doar sangue ou n�o.
**/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main() {

    system("color 9");
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if(idade < 20) {
        printf("Voc� ainda n�o pode doar sangue! \n");

    } else {
        printf("Voc� j� pode doar sangue! \n");
    }

    system("pause");
}
