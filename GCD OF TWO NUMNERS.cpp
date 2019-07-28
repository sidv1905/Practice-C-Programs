#include<iostream>
using namespace std;
int main()
{int a,b,gcd,la;
	cout<<"enter two numbers";
	cin>>a;
	cin>>b;

	for(int i=1;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	
		
		
	}
	cout<<"GCD OG THESE ARE: "<<gcd;
	cin>>la;
}
