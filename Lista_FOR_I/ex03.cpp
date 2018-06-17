/** 3) Preencher um vetor com 3 nomes e mostrar quantas letras A e E tem nos 3 nomes. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void checkLetters(char name[3][30]) {

    int i = 0, j = 0, conta = 0, conte = 0, nameSize = 0;

    for(i = 0; i < 3; i++)
    {
        nameSize = strlen(name[i]);

        for(j = 0; j <= (nameSize - 1); j++)
        {
            if(name[i][j] == 'a' || name[i][j] == 'A')
            {
                conta++;
            }
            if(name[i][j] == 'e' || name[i][j] == 'E')
            {
                conte++;
            }
        }
    }

    printf("Names provided has %d letter(s) A. \n", conta);
    printf("Names provided has %d letter(s) E. \n", conte);

}

main()
{

    char i = 0, name[3][30] = {{}};

    system("cls");
    setlocale(LC_ALL, "Portuguese");

    for(i = 0; i < 3; i++)
    {
        printf("Enter a name: ");
        scanf("%s", name[i]);
    }

    checkLetters(name);

    puts("\nTHE END!\n");
    system("pause");
}
