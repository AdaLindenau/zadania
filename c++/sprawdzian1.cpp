#include<iostream>
#include<fstream>
using namespace std;

string stringi[1000];

void A()
{
    string pomocnicza;
    int ile;

    for(int i = 0; i < 1000; i++)
    {
        pomocnicza = stringi[i];
        for(int c =0; c < pomocnicza.length(); c++)
        {
            if (pomocnicza[c] == 'a') ile++;
        }
    }
    cout << "A" << endl << ile << endl;
}

bool czyPierwsza (float a)
{
if (a > (int)a ) return false;

for(int i = 2; i < a; i++)
{
if ((int)a % i == 0) return false;
}
return true;
}

int PoliczAscii (char c)
{

int i = (int)c;
return i;
}

void B()
{
    string pomocnicza;
    int ile;
    int suma;

    for(int i = 0; i < 1000; i++)
    {
        pomocnicza = stringi[i];
        suma = 0;
        for(int c = 0; c < pomocnicza.length(); c++)
        {
           suma += PoliczAscii(pomocnicza[c]);
        }
        if (czyPierwsza(suma)) ile++;

    }

    cout << "B" << endl << ile << endl;
}

void C()
{
    cout << "C" << endl;
    string pomocnicza;
    bool palindrom;

    for(int i = 0; i < 1000; i++)
    {
        pomocnicza = stringi[i];
        palindrom = true;
        for(int c =0; c < pomocnicza.length() / 2; c++)
        {
            if (pomocnicza[c] != pomocnicza[pomocnicza.length() - (c + 1)]) palindrom = false;
        }
        if (palindrom == true) cout << pomocnicza << endl;
    }
}

int main()
{
    ifstream plik;
    plik.open("stringi.txt");

    for(int i = 0; i < 1000; i++)
    {
        plik >> stringi[i];
    }

    A();
    B();
    C();
}
