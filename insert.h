#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct database
{
    string name;
    string pre;
    string adress;
    string email;
    string born_date;
    string cot_date;
} dates[101];
void insertD()
{
    string columns[25];
    string str, result, table_name;
    int nr_col, type[25];
//Dates reading from files
    ifstream name("Dates/Nume.txt");
    ifstream pre("Dates/Prenume.txt");
    ifstream adress("Dates/Adrese.txt");
    ifstream email("Dates/Email.txt");
    ifstream born_date("Dates/An_nast.txt");
    ifstream cot_date("Dates/An_cot.txt");

    for(int i = 0; !name.eof(); i++)
    {
        getline(name, dates[i].name);
        getline(pre, dates[i].pre);
        getline(adress, dates[i].adress);
        getline(email, dates[i].email);
        getline(born_date, dates[i].born_date);
        getline(cot_date, dates[i].cot_date);
    }


    cout << "Introduceti numele tabelului: ";
    cin >> table_name;
    cout << "Introduceti numarul coloanelor: ";
    cin >> nr_col;

    cout << "Coloane:\n";
    for(int i = 1; i <= nr_col; i++)
    {
        cout << i << ": ";
        cin >> columns[i];
        cout << endl;
    }
    cout << "Introduceti tipul fiecarei coloane:\n";
    cout << "Tipuri disponibile: \n";
    cout << "1. Nume         2. Prenume         3. Adresa\n";
    cout << "4. Telefon      5. Email           6. Companii\n";
    cout << "7. An 90-07     8. An 07-19\n      9. NULL\n";
    cout << "10. ID\n";

    for(int i = 1; i <= nr_col; i++)
    {
        cout <<"Tipul de date pentru coloana " << columns[i] << ": ";
        cin >> type[i];
    }

    cout << "\nSe proceseaza datele\n";
    result = "\tINSERT INTO " + table_name + "(";
    for(int i  = 0 ; i < n ; i++)
    {
        result += columns[i];
        if( i != n - 1)
            result += ", ";
        else
            result += ")\n";
    }
    cout << "\nSe introduc datele aleatorii\n";
    //result




}
