#include<iostream>
using namespace std;
int main()
{
double fahrenheit,celsius;
cout << "Enter the temperature in celcius : ";
cin >> celsius;
fahrenheit = (celsius * 9) / 5 + 32;
cout << "the temperature in fahrenheit : " << fahrenheit << "\n";
return 0;
}
