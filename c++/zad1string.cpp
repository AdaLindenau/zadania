#include <iostream>
using namespace std;

int ile (string s, char z)
{
int ile_razy = 0;
for(int i = 0; i < s.length(); i++)
{

if (s[i] == z){ile_razy += 1;}

}

return ile_razy;
}

int slowa(string s)
{
int ile_slow = 0;
for(int i = 0; i < s.length(); i++)
{
if (s[i] != ' ' && (s[i - 1] == ' ' || i = 0))
{
ile_slow++;

}

}
return ile_slow;
}

int main ()
{
string s;
getline(cin, s);
//char z;
//cin >> z;
cout << slowa(s);
return 0;
}
