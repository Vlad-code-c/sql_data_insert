#include "header.h"
main()
{
    int n;
    string ch;
    system("cls");
    cout << "Alegeti una din optiunile: ";
    cout << "\n1.Creati o baza de date";
    cout << "\n2.Stergeti o baza de date";
    cout << "\n3.Adaugati tabele baza de date";
    cout << "\n4.Inserati date in baza de date\n";      //Create file with random files
    cout << "\n\n0.Iesiti din program\n";
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
    case 0:
        return 0;;
        break;
    }


    system("pause");
    system("cls");
    main();
}
