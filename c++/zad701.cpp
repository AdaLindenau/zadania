#include <iostream>
#include <fstream>
using namespace std;

string ciagi [1000];

void A()
{
    cout << "A" << endl ;

    int ile = 0;
    string pomocnicza;
    bool czyPalindrom;
    for (int i = 0; i < 1000; i++)
    {
        pomocnicza = ciagi[i];
        czyPalindrom = true;
        for (int i = 0; i < (pomocnicza.length() / 2) + 1; i++)
        {
            if(pomocnicza[i] != pomocnicza[pomocnicza.length() - 1 - i]) czyPalindrom = false;
        }
        if (czyPalindrom)
        {
            ile++;
            if(ciagi[i].length() == 8) cout << "Palindrom o długości 8: "<< pomocnicza << endl;

        }
    }

    cout  << "Palindromy: " << ile << endl;
}

void B()
{
// A = 10; B = 11; C = 12; D = 13; E = 14; F = 15;

cout << "B" << endl ;

    long ile;
    string pomocnicza;
    long najwWartosc = 0;
    long najmWartosc = 999999;
    string najwNapis;
    string najmNapis;
    long mnoznik;

    for (int i = 0; i < 1000; i++)
    {
        pomocnicza = ciagi[i];
        ile = 0;
        mnoznik = 1;
        for (int j = pomocnicza.length() - 1; j >= 0; j--)
        {
        switch(pomocnicza[j])
        {
        case 'A':
        ile += 10 * mnoznik;
        break;
        case 'B':
        ile += 11 * mnoznik;
        break;
        case 'C':
        ile += 12 * mnoznik;
        break;
        case 'D':
        ile += 13 * mnoznik;
        break;
        case 'E':
        ile += 14 * mnoznik;
        break;
        case 'F':
        ile += 15 * mnoznik;
        break;
        }

            mnoznik *= 16;
        }

        if(ile > najwWartosc)
        {
        najwWartosc = ile;
        najwNapis = pomocnicza;
        }
        else if (ile < najmWartosc)
        {
        najmWartosc = ile;
        najmNapis = pomocnicza;
        }


    }

    cout << "Największa wartość: " << najwWartosc <<", " << najwNapis << endl;
    cout << "Najmniejsza wartość: " << najmWartosc <<", " << najmNapis << endl;


}

void bubbleSort(table[1000], int Size)
{
    bool unsorted = true;
    int temp;
    while (unsorted)
    {
	unsorted = false;
	for (int i = 1; i < Size; i++)
	{
	    if (table[i-1] > table[i])
	    {
		temp = table[i];
		table[i] = table[i-1];
		table[i-1] = temp;
		unsorted = true;
	    }
	}
    }
}

void C()
{
bubbleSort(ciagi, 1000);
cout << "D" << endl;
for(int i = 0; i < 5; i++)
{
cout << ciagi[i]; << endl;
}
for (int i = 1; i < 6; i++)
{
cout << ciagi[ciagi.length() - i] << endl;
}
}

void D()
{
cout << "D" << endl ;

    int ile = 0;
    string pomocnicza;
    bool doesItWork;

    for (int i = 0; i < 1000; i++)
    {
        doesItWork = false;

        pomocnicza = ciagi[i];

        if (pomocnicza.length() == 6)
        {
        doesItWork = true;

        for (int j = 0; j < pomocnicza.length(); j++)
        {
        for ( int l = 0; l < j; l++)
        {
        if(pomocnicza[j] == pomocnicza[l]) doesItWork = false;
        }
        }
        }

        if (doesItWork == true)
        {
        cout << pomocnicza << endl;
        ile++;
        }

    }

    cout << ile;
}

int main()
{

    ifstream plik ("ciagi.txt");

    for (int i = 0; i < 1000; i++)
    {
        plik >> ciagi[i];
    }

    A();
    B();
    D();

}
