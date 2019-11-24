#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
main(){
ofstream g("ID.txt");
for(int i = 0; i < 100; i++){
    g << rand() % 999 + 100 << "\n";
}
}
