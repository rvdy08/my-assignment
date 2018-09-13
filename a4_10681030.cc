#include<iostream>
using namespace std;
int main()
{
int FirstNumber;
cout<<"Enter first number : ";
cin>>FirstNumber;
int SecondNumber;
cout<<"Enter second number : ";
cin>>SecondNumber;
int gcd;
for(int i=1;i<=FirstNumber && i<=SecondNumber;i++)
{
if(FirstNumber%i==0 && SecondNumber%i == 0)
{

gcd=i;
}
}
cout<<"Greatest Common Division (GCD) ="<<gcd<<endl;
return 0;
}
