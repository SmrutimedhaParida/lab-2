#include<iostream>
using namespace std;
int main()
{
double fahrenheit,celsius;
cout << "Enter the temperature in fahrenheit : ";
cin >> fahrenheit;
celsius = (fahrenheit-32)*5/9;
cout << "the temperature in celsius : " << celsius << "\n";
return 0;
}
