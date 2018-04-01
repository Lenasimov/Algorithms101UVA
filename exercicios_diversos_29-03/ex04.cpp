/** 4) Fazer um programa para reajustar o valor do salário do funcionário.
O salário será informado em tempo de execução.
O programa deverá reajustar o salário informado com base nas premissas da tabela abaixo.
O valor do salário não pode ser menor do que R$1.000,00 e nem maior do R$7.000,00.
O Estado não pode ser diferente do que foi informado na tabela e nem o sexo.
Caso algum erro aconteça, mensagem de erro e retorna para digitação daquela informação errada.

Estado          Sexo        Percentual de reajuste
Goias                f                   10
Minas               f                   14
Rio                    m                 26
Acre                  f                   39
Rondonia        m                  8
**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    char estado[10], sexo[2];
    float salario, novoSalario;

    inicio1:
        printf("Informe seu Estado de residência: ");
        fflush(stdin);
        scanf("%s", &estado);

        if( !(strcmp(estado, "Goias") == 0) && !(strcmp(estado, "Minas") == 0) && !(strcmp(estado, "Rio") == 0) && !(strcmp(estado, "Acre") ==0) && !(strcmp(estado, "Rondonia") == 0)) {
            printf("Estado inválido! Por favor tente novamente! \n");
            goto inicio1;
        }

    inicio2:
        printf("Informe seu sexo feminino(f) ou masculino(m): ");
        fflush(stdin);
        scanf("%s", &sexo);

        if( !(strcmp(sexo, "f") == 0) && !(strcmp(sexo, "m") == 0)) {
            printf("Opção de sexo inválida! Por favor tente novamente! \n");
            goto inicio2;
        }

    inicio3:
        printf("Informe seu salário: R$");
        fflush(stdin);
        scanf("%f", &salario);

        if(salario < 1000 || salario > 7000) {
            printf("Informação de salário inválida! Por favor, tente novamente! \n");
            goto inicio3;
        }

    if(strcmp(estado, "Goias") == 0 && strcmp(sexo, "f") == 0) {
        novoSalario = salario + (salario * 0.1);
        printf("Estado: %s \nReajuste de salário: R$%.2f. \n", estado, novoSalario);

    } else if(strcmp(estado, "Minas") == 0 && strcmp(sexo, "f") == 0) {
        novoSalario = salario + (salario * 0.14);
        printf("Estado: %s \nReajuste de salário: R$%.2f. \n", estado, novoSalario);

    } else if(strcmp(estado, "Rio") == 0 && strcmp(sexo, "m") == 0) {
        novoSalario = salario + (salario * 0.26);
        printf("Estado: %s \nReajuste de salário: R$%.2f. \n", estado, novoSalario);

    } else if(strcmp(estado, "Acre") == 0 && strcmp(sexo, "f") == 0) {
        novoSalario = salario + (salario * 0.39);
        printf("Estado: %s \nReajuste de salário: R$%.2f. \n", estado, novoSalario);

    } else if(strcmp(estado, "Rondonia") == 0 && strcmp(sexo, "m") == 0) {
        novoSalario = salario + (salario * 0.08);
        printf("Estado: %s \nReajuste de salário: R$%.2f. \n", estado, novoSalario);

    } else {
        printf("Informações inválidas! Por favor, tente novamente! \n");
        goto inicio1;
    }

    system("pause");
    return 0;
}
