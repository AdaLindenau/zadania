#include <iostream>
using namespace std;

int bin (int liczba)
{
cout << liczba % 2;
if(liczba == 1) return 0;
else return(bin(liczba / 2));
}

int main()
{
int liczba;
cin >> liczba;
bin(liczba);

}
