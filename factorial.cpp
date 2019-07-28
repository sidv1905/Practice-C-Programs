#include<iostream>
using namespace std;
int main()
{
	int n,i,fac;
	cout<<"Enter a number";
	cin>>n;
	fac=n;
	for(i=n-1;i>=2;i--)
	{
		fac=fac*i;
	}
	cout<<fac;
}
