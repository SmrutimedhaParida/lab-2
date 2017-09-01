#include <iostream>
using namespace std;
int main()
{
double a, b, c, d, e, fm, total,avg,percentage;
cout << "enter marks in five subjects:\n";
cin >> a >> b >> c >> d >> e;
cout << "enter maximum marks per subject\n";
cin >> fm;
total=a+b+c+d+e;
avg=total/5;
percentage=(total/(fm*5))*100;
cout << "the total marks is = "<<total<<"\n";
cout << "the average marks is ="<<avg<<"\n";
cout << "the percentage obtained ="<<percentage<<"\n";
return 0;
}
