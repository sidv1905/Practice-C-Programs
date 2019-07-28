#include<iostream>
using namespace std;
int gcd(int,int);
int main()
{int a,b;
	cout<<"Enter two numbers";
	cin>>a;
	cin>>b;
	cout<<"GCD of Two Numbers is : "<<gcd(a,b);
	
	
}
int gcd(int a, int b)
{
	if(a==b)
	{
		return(a);
	}	
	if(a%b==0)
	{
		return(b);
	}
	if(b%a==0)
	{
		return(a);
	}
	if(a>b)
	{
		return(gcd(a%b,b));
	}
	if(b>a)
	{
		return(gcd(a,b%a));
	}
}
