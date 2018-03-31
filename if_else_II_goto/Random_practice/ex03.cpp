#include<iostream>
using namespace std;

//#include<locale.h>
//#include<conio.h>

main() {

    setlocale(LC_ALL, "Portuguese");

    int n = 1;

    my_label:
        cout << n << "\n";

        n++;

        if(n <= 10) {
            goto my_label;
        }

        cout << "THE END!";


    // system("pause");

}
