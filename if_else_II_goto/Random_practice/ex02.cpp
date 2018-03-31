#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

main() {

    setlocale(LC_ALL, "Portuguese");

    int i = 2;

    while(1) {
        printf("%d ", i);

        i += 2;

        if(i >= 20) {
            goto outside;
        }
    }

    outside:
        printf("C'est fini! \n");

    system("pause");

}
