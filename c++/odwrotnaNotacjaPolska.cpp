#include<bits/stdc++.h>
using namespace std;

stack<char> operators;

int priority(char oper)
{
  switch(oper)
  {
  case '(':
    return 0;
  case '+':
  case '-':
  case '–':
  case ')':
    return 1;
  case 'x':
  case '*':
  case '/':
  case '%':
    return 2;
  case '^':
    return 3;
  default:
    return -1;
  }
}

string NaONP(string s)
{
string wyjscie = "";
for(char c: s)
{
if(c <= 'z' &&  c >= 'a')
{
wyjscie += c;
cout << wyjscie << endl;
}
else if (c == ')')
{
while(operators.top() != '(')
{
wyjscie += operators.top();
operators.pop();
cout << wyjscie << endl;
}
}
else if(operators.empty())
{
operators.push(c);
}
else
{
while(priority(operators.top()) >= priority(c))
{
wyjscie += operators.top();
operators.pop();
cout << wyjscie << endl;
}
operators.push(c);

}
}
while(operators.empty() == false)
{
wyjscie += operators.top();
operators.pop();
cout << wyjscie << endl;
}
return wyjscie;
}


int main()
{
int ile;
cin >> ile;
string rownanie;
for(int i = 0; i < ile; i++)
{
cin >> rownanie;
cout << NaONP(rownanie);
}

return 0;
}
