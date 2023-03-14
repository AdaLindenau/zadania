#include<iostream>
using namespace std;

void hanoi(int n, char A, char B, char C)
{
if(n > 0)
{
hanoi(n - 1, A, B, C);
cout << A << " --> " << C << endl;
hanoi(n-1, B, A,C);
}
}

int main(int argc, char *argv[])
{
hanoi(5, 'A', 'B', 'C');
return 0;

}
