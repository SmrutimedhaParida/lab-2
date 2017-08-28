#include<iostream>
using namespace std;
int main ()
{
int y,d,w;
cout<<"Enter number of days:";
cin>>d;
y = (d/365);
d = (d%365);
w = (d/7);
d = (d%7);
cout<<"the number of years is:"<< y << "\n";
cout<<"the number of weeks is:"<< w << "\n";
cout<<"the number of days is:"<< d << "\n";
return 0;
}
