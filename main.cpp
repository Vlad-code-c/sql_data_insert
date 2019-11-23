#include "header.h"
main()
{
    int n;
    system("cls");
    cout << "Alegeti una din optiunile: ";
    cout << "\n1.Creati o baza de date";
    cout << "\n2.Stergeti o baza de date";
    cout << "\n3.Adaugati tabele baza de date";
    cout << "\n4.Inserati date in baza de date\n";      //Create file with random files
    cin >> n;
    system("cls");
    switch (n)
    {
    case 1:
        createD();
        break;
    case 2:
        deleteD();
        break;
    case 4:
        insertD();
        break;
    }

}
