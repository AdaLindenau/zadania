/* Program wczytuje całe zdanie

 wypisz na ekran odwrócone zdanie */

#include <iostream>
using namespace std;

int wypisz(string s)
{
for (int i = 0; i <= s.length() ; i++)
{
cout << s[s.length() - i];

}
return 0;
}

int main()
{
string s;
getline(cin, s);

wypisz(s);
return 0;
}
