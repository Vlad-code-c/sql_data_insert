#include <iostream>
#include <fstream>
#include <string>
//#include "log.h"
using namespace std;
deleteD(){

 ofstream c("Results/delete.txt");
    string result, str;

    cout << "Sunteti pe cale de a sterge o baza de date\n";
    cout << "\nIntroduceti numele bazei de date: ";
    cin >> str;

    result = "USE MASTER"
             "\nGO"
             "\nDROP DATABASE " + str + "\n";

    c << result;
    cout << "Fisierul selete.sql se afla la locatia: ./Results/ \n";

    logs("Deleted Database " + str);
}

