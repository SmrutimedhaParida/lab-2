#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double principal, rate, time, CI, amt;
cout << "Enter principal, rate per annum, time in years:\n";
cin >> principal >> rate >> time;
amt=principal*(pow(1+(rate/100),time));
CI=amt-principal;
cout << "the CI is =" << CI <<"\n";
return 0;
}
