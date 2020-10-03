#include <iostream>
#include <stdlib.h>
#include "lib.h"

using namespace std;

int main()
{
    system("cls");
    char nome[20];

    cout << "Hey Ciao! Come ti chiami? : " << endl;
    cin >> nome;

    cout << endl
         << "Piacere di conoscerti " << nome << ", Benveuto in C++! :D" << endl;

    cout << "Sei bello ----> " << random(10, 0) << endl;

    system("pause");
    return EXIT_SUCCESS;
}