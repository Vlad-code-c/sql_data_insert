#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void createD()
{
    ofstream c("Results/Create.txt");
    string result, str;

    cout << "Sunteti pe cale de a crea o baza de date\n";
    cout << "\nIntroduceti numele bazei de date: ";
    cin >> str;

    result = "--CREAREA BAZEI DE DATE"
             "\nUSE master"
             "\nGO"
             "\nIF exists("
             	"\n\tSELECT *FROM sys.databases WHERE name='" + str + "')"
             "\nBEGIN"
             		"\n\t\tALTER DATABASE " + str + " SET single_user"
             		"\n\t\tWITH ROLLBACK IMMEDIATE"
             		"\n\t\tDROP DATABASE " + str +
             		"\n\t\tEND"
             "\nGO"
             "\nCREATE DATABASE " + str +
             "\nGO"
             "\nUSE " + str +
                 "\nGO";

    c << result;
        cout << "Fisierul Create.sql se afla la locatia: ./Results/ \n";
}
