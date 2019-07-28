#include<iostream>
using namespace std;
//to calculate ncr=n!/r!(n-r)!;

int factorial(int);

int main()

{
	int r,n,a,b,c,total;
	cout<<"ENTER N";
	cin>>n;
	cout<<"ENTER R";
	cin>>r;
	a=factorial(n);
	b=factorial(r);
	c=factorial(n-r);
	total=a/(b*c);
	cout<<total;	
}
int factorial(int t)
{
	int sum=1;
	while(t!=0)
	{
		sum=sum*t;
		t--;
	}
	return sum;
}
