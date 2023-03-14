#include <iostream>
using namespace std;
int main ()
{
char litera;
cout << "podaj literę" << endl;
cin >> litera;

char samo [6] = {'A', 'E', 'O', 'U', 'I', 'Y'};
bool czy = false;

for (int i = 0; i < 6; i++)
{
if (samo[i] == litera)
{
cout << "samogłoska" << endl;
czy = true;
}
}
if (czy == false) cout << "spółgłoska" << endl;

return 0;
}
