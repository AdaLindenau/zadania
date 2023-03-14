#include<bits/stdc++.h>
using namespace std;

stack<char> litery;


string oblicz(string s)
{
string wyjscie = "";
for(char c: s)
{
if( c >= 'a' && c <= 'z')
{
litery.push(c);
}
if(c == '<')
{
if(c == 'a')
{
litery.pop();
litery.push('z');
}
else litery.top() -= 1;

}
if(c == '>')
{
if(c == 'z')
{
litery.pop();
wyjscie += 'a';
}
else litery.top() += 1;

}
if(c == '!')
{
char a = litery.top();
litery.pop();
char b = litery.top();
litery.pop();

if(a > b) litery.push(a);
else litery.push(b);
}

if(c == '?')
{
char a = litery.top();
litery.pop();
char b = litery.top();
litery.pop();

if(a < b) litery.push(a);
else litery.push(b);
}
}
while(!litery.empty())
{
wyjscie += litery.top();
litery.pop();
}
reverse(wyjscie.begin(), wyjscie.end());
return wyjscie;
}

int main()
{
ifstream plik("wyrazenia.txt");

string tekst;
for(int i = 0; i < 149; i++)
{
plik >> tekst;
cout << oblicz(tekst) << " ";
}

return 0;
}
