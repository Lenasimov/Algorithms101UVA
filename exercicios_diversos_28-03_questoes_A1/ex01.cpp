/** 1) Fazer um programa para que o usuário digite três números inteiros.
O usuário deve ser informado na tela do que terá que digitar.
Os números digitados não podem conter valores zero e nem serem negativos (isso se aplica para os três números).
Caso isso aconteça, é preciso exibir uma mensagem de erro para o usuário e retornar para uma nova digitação
daquele valor errôneo.

Para o primeiro número digitado só podemos permitir a entrada de valores múltiplos de três.
Caso não seja múltiplo de três, exibir mensagem de erro e retornar para nova entrada de dados.

Para o segundo número, não há nenhum tipo de restrição. Qualquer número é valido.

Para o terceiro número, só poderão ser aceitos números pares.
Caso seja digitado um número ímpar, o programa deverá tornar
este número par através de uma operação aritmética.

Os três números digitados não podem ter valores iguais,
caso haja número igual, exibir mensagem de erro e retornar para uma nova digitação do primeiro número.

Diante dos três números válidos após as críticas executadas acima, o programa deverá exibir na tela, nessa ordem:
1) o menor número,
2) o número do meio,
3) o maior número.

// As exibições destas informações deverão acontecer um uma nova função a ser criada.
// NÃO CONSIDERAR POR ENQUANTO! **/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {

	system("color 5D");

	int n1, n2, n3, menor, meio, maior;

	inicioN1:
		printf("Digite o primeiro numero: ");
		fflush(stdin);
		scanf("%d", &n1);

		if(n1 <= 0) {
			printf("Numeros negativos e zero nao sao aceitos! \n");
			goto inicioN1;

		} else if(!(n1 % 3 == 0)) {
			printf("Para o primeiro numero, so sao aceitos multiplos de 3! \n");
			goto inicioN1;
		}


	inicioN2:
		printf("Digite o segundo numero: ");
		fflush(stdin);
		scanf("%d", &n2);

		if(n2 <= 0) {
			printf("Numeros negativos e zero nao sao aceitos! \n");
			goto inicioN2;
		}


	inicioN3:
		printf("Digite o terceiro numero: ");
		fflush(stdin);
		scanf("%d", &n3);

		if(n3 <= 0) {
			printf("Numeros negativos e zero nao sao aceitos! \n");
			goto inicioN3;

		} else if(!(n3 % 2 == 0)) {
			n3 += 1;
		}

	if((n1 == n2) || (n1 == n3) || (n2 == n3)) {
		printf("Os numeros digitados nao podem ser iguais! \n");
		goto inicioN1;
	}

	if((n1 > n2) && (n1> n3)) {
		 if(n2 > n3) {
            maior = n1;
            meio = n2;
            menor = n3;
		 } else {
            maior = n1;
            meio = n3;
            menor = n2;
		 }

	} else if((n2 > n1) && (n2 > n3)) {
		if(n1 > n3) {
            maior = n2;
            meio = n1;
            menor = n3;

		} else {
            maior = n2;
            meio = n3;
            menor = n1;
		}

	} else if((n3 > n1) && (n3 > n2)) {
	    if(n1 > n2) {
            maior = n3;
            meio = n1;
            menor = n2;
	    } else {
	        maior = n3;
	        meio = n2;
	        menor = n1;
	    }
	}


	printf("Menor = %d \nMeio = %d \nMaior = %d \n", menor, meio, maior);

	system("pause");
	return 0;
}
