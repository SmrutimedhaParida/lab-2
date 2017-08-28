#include <iostream>
using namespace std;
int main ()
{
double l,lmt,lkm;
cout<<"enter the distance in centimetre";
cin >>l;
lmt = ( l/100);
lkm =( l/100000);
cout<<"The length in metre is "<< lmt << "\n";
cout<<"The length in kilometre is "<< lkm << "\n";
return 0;
}
