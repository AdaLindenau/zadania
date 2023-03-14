#include <bits/stdc++.h>

using namespace std;


int diagonalDifference(vector<vector<int>> arr)
{
int p1;
int p2;
for (int i = 0; i < arr.size(); i++)
{
p1 += arr [i] [i]
p2 += arr [i] [arr.size - 1 - i]
}

return abs (p1 - p2);
}

int main()
{
vector<vector<int>> arr(3);
int t;
for (int i = 0; 1<3;i++)
{
for (int j = 0; j < 3; j++)
{
cin >> t;
arr[i].push_back(t);
}
}
cout << diagonalDifference(arr) << endl;



}

