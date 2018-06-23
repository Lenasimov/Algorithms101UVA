#include<stdio.h>

main()
{
int mat[4][4];
int l=0, c=0, soma=0, media=0, n=0;

for(l=0; l<4; l++)
{
    for(c=0; c<4; c++)
    {
    print1:
    printf("digite o numero da linha %i e coluna %i: \n", l, c);
        if(l==0 && c==0)
        {
        scanf("%i", &mat[l][c]);
            if(mat[l][c]<1||mat[l][c]>=63||mat[l][c]%2==0)
            {
            printf("Erro");
            goto print1;
            }
        }
        else
        {
        scanf("%i",&mat[l][c]);
            if(mat[l][c]!=mat[l][c-1]+2||mat[l][c]>99||mat[l][c]%2==0)
            {
            printf("Erro");
            goto print1;
            }
        }
    }

}

for(l=0;l<4;l++)
{
    for(c=0;c<4;c++)
    {
        if(l == c)
        {
            soma=soma+mat[l][c];
            n++;
        }
    }
}

for(l=0;l<4;l++)
{
    for(c=0;c<4;c++)
    {
    printf("%d  ",mat[l][c]);
    }
printf("\n");
}

media=soma/n;
printf("A media dos valores da diagonal principal e: %d", media);

}
