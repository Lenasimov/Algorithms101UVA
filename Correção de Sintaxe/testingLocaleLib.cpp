/* Testing locale lib */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");

    printf("Hello, World! \nAl�, Mundo! \n");

    system("pause");

}
