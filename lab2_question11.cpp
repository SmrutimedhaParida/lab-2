#include <iostream>
using namespace std;
int main()
{
double principal, rate, time, SI;
cout << "Enter principal, rate per annum, time in years:\n";
cin >> principal >> rate >> time;
SI=(principal*rate*time)/100;
cout << "the SI is=" << SI <<"\n";
return 0;
}
