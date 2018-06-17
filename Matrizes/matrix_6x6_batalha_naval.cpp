/** 3) Fazer um programa de batalha naval.
- Preencher uma matriz 6x6;
- Informar linha e coluna para a digitação do valor;
- Verificar na matriz se a informação (o número) existe naquela posição;
- Fazer isto até que o usuário não queira mais jogar. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void searchNumberInMatrix(int matrix[6][6], int r, int c, int n)
{
	int i = 0, j = 0, isFound = 0, numberFound = 0, matrixPosFound[6][6] = {{}};

	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 6; j++)
		{
            if(matrix[i][j] == n)
            {
                isFound = 1;
                numberFound = n;
                //matrixPosFound[c][r] = matrix[i][j];
            }
		}
	}

	if(isFound == 1)
	{
		printf("NUMBER FOUND! \nNUMBER: %d \n", numberFound);
		//printf("ROW %d \tCOLUMN: %d \n", r, c);
	}
	else
	{
		printf("NUMBER NOT FOUND! \n");
	}

}

main()
{
	int i = 0, j = 0, n = 0, r = 0, c = 0, matrix[6][6] = {{}};
	char resp[4];

	system("cls");

	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 6; j++)
		{
			printf("ROW %d \tCOLUMN %d : ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
		printf("\n");
	}

    /*
	puts("\n: : : : MATRIX : : : :\n");
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 6; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	*/

    search_number:
        printf("\n: : : : SEARCH FOR A NUMBER IN THE MATRIX : : : : \n");
        printf("WHICH ROW? ");
        scanf("%d", &r);

        printf("WHICH COLUMN? ");
        scanf("%d", &c);

        printf("WHICH NUMBER? ");
        scanf("%d", &n);

        searchNumberInMatrix(matrix, r, c, n);

    printf("STILL WANT TO PLAY? Y / N : ");
    scanf("%s", &resp);

    if(strcmp(resp, "Y") == 0)
    {
        goto search_number;
    }
    else
    {
        printf("\nGAME OVER! \n");
    }

	puts("\nTHE END!\n");
	system("pause");
}
