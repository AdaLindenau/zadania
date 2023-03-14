#include<iostream>
#include<string>
using namespace std;


string kompresjaLitery()
{

}

string kompresjaWyrazy()
{

}

string dekompresjaLitery(string wejscie, string wyjscie)
{
long ile;
for (int i = 0; i < wejscie.length();)
{
ile = 1;

for(int j = i + 1; wejscie[i] == wejscie[j]; j++)
{
ile++;
}

if (ile > 3)
{
wyjscie += wejscie[i] + "*" + ile;
}
else
{
for (int i = 0; i < ile; i++) wyjscie += wejscie[i];
}

i = j;
}

return wyjscie;
}

string dekompresjaWyrazy()
{


}


int main()
{
    string operacja;
    cin >> operacja;
    string slowoOryginal;
    string slowoSkompresowane;
    string slowo Porownanie;

    if(operacja == "KOMPRESJA")
    {

    }
    else if (operacja == "DEKOMPRESJA")
    {
    cin >> slowoOryginal;
    slowoSkompresowane = "";
    cout << dekompresjaLitery(slowoOryginal, slowoSkompresowane);


    }

}
