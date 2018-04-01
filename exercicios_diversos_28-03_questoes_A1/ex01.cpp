/** 1) Fazer um programa para que o usu�rio digite tr�s n�meros inteiros.
O usu�rio deve ser informado na tela do que ter� que digitar.
Os n�meros digitados n�o podem conter valores zero e nem serem negativos (isso se aplica para os tr�s n�meros).
Caso isso aconte�a, � preciso exibir uma mensagem de erro para o usu�rio e retornar para uma nova digita��o
daquele valor err�neo.

Para o primeiro n�mero digitado s� podemos permitir a entrada de valores m�ltiplos de tr�s.
Caso n�o seja m�ltiplo de tr�s, exibir mensagem de erro e retornar para nova entrada de dados.

Para o segundo n�mero, n�o h� nenhum tipo de restri��o. Qualquer n�mero � valido.

Para o terceiro n�mero, s� poder�o ser aceitos n�meros pares.
Caso seja digitado um n�mero �mpar, o programa dever� tornar
este n�mero par atrav�s de uma opera��o aritm�tica.

Os tr�s n�meros digitados n�o podem ter valores iguais,
caso haja n�mero igual, exibir mensagem de erro e retornar para uma nova digita��o do primeiro n�mero.

Diante dos tr�s n�meros v�lidos ap�s as cr�ticas executadas acima, o programa dever� exibir na tela, nessa ordem:
1) o menor n�mero,
2) o n�mero do meio,
3) o maior n�mero.

// As exibi��es destas informa��es dever�o acontecer um uma nova fun��o a ser criada.
// N�O CONSIDERAR POR ENQUANTO! **/

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
