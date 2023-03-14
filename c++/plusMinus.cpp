#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr)
{
double d = 0;
double u = 0;
double z = 0;
for (int i = 0; i < arr.size(); i++)
{
if(arr[i] > 0) d++;
else if (arr[i] < 0) u++;
else z++;

}
cout << d / arr.size() << endl;
cout << u / arr.size() << endl;
cout << z / arr.size() << endl;
}

int main()
{
int n = 6;
int t;
vector<int> arr;
for (int i = 0; i < n; i++)
{
cin >> t;
arr.push_back(t);
}
plusMinus(arr);
}
