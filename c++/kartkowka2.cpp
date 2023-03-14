#include<iostream>
#include<fstream>
using namespace std;

int liczby[1000];

void A()
{
int ile = 0;
for(int i = 0; i < 1000; i++)
{
if(liczby[i] % 3 == 0) ile++;
}
cout << "A" << endl << "w pliku przez 3 podzielne jest " << ile << " liczb"<< endl;
}

bool czyPalindrom (int a)
{
string pomocnicza;

bool czyPalindrom = true;
        for (int i = 0; i < (pomocnicza.length() / 2) + 1; i++)
        {
            if(pomocnicza[i] != pomocnicza[pomocnicza.length() - 1 - i]) czyPalindrom = false;
            //cout << pomocnicza;
        }
        return czyPalindrom;
}

int stworzOdwrocona (int a)
{
int pomocnicza;
string odwrocona;
int mnoznik = 1;


pomocnicza = a;

while(pomocnicza > 0)
{
//odwrocona +=  int.ToString(pomocnicza % 10);
pomocnicza /= 10;
}
cout  << a  << " , "<< odwrocona  << endl;

}

void B()
{

int ile;
for ( int i = 0; i < 1000; i++) {if(czyPalindrom( liczby[i] + stworzOdwrocona(liczby[i])))ile++;}
cout << "B" <<endl << ile;

}

int main()
{
ifstream plik ("liczby.txt");

for (int i = 0; i < 1000; i++)
{
plik >> liczby[i];
//cout << liczby[i] << endl;
}

A();
B();
}
