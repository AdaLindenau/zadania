#include <iostream>
#include <fstream>
using namespace std;

int liczby[1001];

void A ()
{
    int naj_m = liczby[0];
    int naj_w = liczby[0];
    int liczba;

    for (int i = 1; i < 1001; i++)
    {
        liczba = liczby[i];
        if (liczba > naj_w) naj_w = liczba;
        if (liczba < naj_m) naj_m = liczba;
    }
    cout << "A" << endl << "największa: " << naj_w << endl << "najmniejsza: " << naj_m << endl;
}

void B ()
{
    int pomocnicza;
    bool czy_juz = false;

    while(czy_juz == false)
    {
        czy_juz = true;
        for ( int i = 0; i < 1001; i++)
        {
            if (liczby[i] > liczby[i+ 1])
            {
                pomocnicza = liczby[i+1];
                liczby [i + 1] = liczby [i];
                liczby [i] = pomocnicza;

                czy_juz = false;
            }
        }
    }

    cout << "B" << endl << "mediana: " << liczby[501] << endl;
}

void C ()
{
    double srednia = 0;
    for(int i : liczby)
    {
        srednia += i;
    }
    srednia /= 1001; //    To trzeba poprawić, wychodzi zły wynik, teraz jest mniej więcej ten co powinien być
/////Druga Część/////
    float jak_daleko = 0;
    int najblizsza = 0;
    float jak_daleko_najblizsza = 9999;
    for (int i = 0; i < 1001; i++)
    {
        jak_daleko = srednia - liczby[i];
        if (jak_daleko < 0) jak_daleko *= -1; // wartość bezwzględna

        if (jak_daleko_najblizsza > jak_daleko)
        {
            jak_daleko_najblizsza = jak_daleko;
            najblizsza = liczby[i];
        }
    }
    cout.precision(2);
    cout << "C" << endl << "średnia: " << srednia << endl << "liczba najbliższa średniej: " << najblizsza << endl;
}


bool pierwsza (int n)
{
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0) return false;
    }

return true;
}


void D ()
{
    int ile_pierwszych = 0;
    for (int i: liczby)
    {
        if (pierwsza(i) == true) ile_pierwszych++;
    }

    cout << "D" << endl << "liczba liczb pierwszych: " << ile_pierwszych << endl;
}

int NWD (int a, int b)
{
    int reszta;

    while(true)
    {
        reszta = a % b;
        if(reszta == 0) return b;
        a = b;
        b = reszta;
    }
    return 0;
}

void E ()
{
int naj_nwd = 0;
int liczba = 0;
for (int i = 0; i < 1001; i++)
{
if (NWD(liczby[i], 2358) > naj_nwd)
{
naj_nwd = NWD(liczby[i], 2358);
liczba = liczby[i];// ta pętla się robi
cout << liczby[i]; // i robi na 0
}
}

cout << "E" << endl << "największe NWD z liczbą 2358 ma liczba: " << liczba << endl ;
}


int main()
{
    ifstream plik;
    plik.open ("zestaw.txt");

    for (int i = 0; i < 1001; i++)
    {
        plik >> liczby[i];
    }

    A();
    B();
    C();
    D();
    E();

    return 0;
}
