#include <fstream>
using namespace std;
void logs(string strin)
{
    string ofstr = "logs/" + strin;
    ofstream log(ofstr.c_str());
}

