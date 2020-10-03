#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    system("cls");
    char nome[20];

    cout << "Hey Ciao! Come ti chiami? : " << endl;
    cin >> nome;

    cout << endl
         << "Piacere di conoscerti " << nome << ", Benveuto in C++! :D" << endl;

    system("pause");
    return EXIT_SUCCESS;
}