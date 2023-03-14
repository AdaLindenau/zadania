#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
/*
int z1;
long z2;
char z3;
float z4;
double z5;

cin >> z1 >> z2 >> z3 >> z4 >>z5;

printf("%d\n", z1);
printf("%ld\n", z2);
printf("%c\n", z3);
printf("%f\n", z4);
printf("%lf\n", z5);
*/

//zadanie

double kurs_d = 3.97;
double kurs_e = 4.58;
double kwota_zl;

cout << "Jaka kwota?" << endl;
cin >> kwota_zl ;



cout << "Kwota w dolarach to " <<  kwota_zl / kurs_d << endl;
cout << "Kwota w euro to " <<  kwota_zl / kurs_e << endl;


return 0;
}
