#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
main()
{
    ofstream g("ID.txt");
    for(int i = 1; i <= 100; i++)
    {
        g << i << "\n";
    }
}
