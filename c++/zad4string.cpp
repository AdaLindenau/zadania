#include <iostream>
using namespace std;
bool anagramy(string s1, string s2)
{
if(s1.size() != s2.size()) return false;

int tab1[26];
for(int i = 0; i < 26; i++) tab1[i] = 0;


for (int i = 0; i < s1.size(); i++)
{
int n = s1[i] - 'a';
tab1[n]++;
n = s2[i] - 'a';
tab1[n]--;
}
for (int i = 0; i < 26; i++)
{
if(tab1[i] != 0) return false;

}
return true;
}





bool anagramy2 (string s1, string s2)
{
if(s1.size() != s2.size()) return false;

sort(s1.begin(), s1.end());
sort(s2.begin(), s2.end());

for (int i = 0; i < s1.size(); i++)
{
if (s1[i] != s2[i]) return false;
}
return true;

}






int main()
{
string s1;
string s2;
cin >> s1 >> s2;

if(anagramy2(s1,s2))
{
cout << "Są anagramami" << endl;
}
else cout << "Nie są anagramami" << endl;
return 0;
}
