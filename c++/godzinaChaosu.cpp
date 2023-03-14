#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ifstream wejscie;
wejscie.open("wejscie.txt");

ofstream wyjscie;
wyjscie.open("wyjscie.txt");

int ile;
wejscie >> ile;

string godzina;
string liczba;
bool 0ok = false;

for (int i = 0; i < ile ; i++)
{
wejscie >> godzina;
for(int i = 0; i < godzina.length(); i++)
{
if (godzina[i] != "0" && 0ok = false && godzina[i] != ":")
}

}
}
