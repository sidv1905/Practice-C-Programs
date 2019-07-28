//PERFECT NUMBER is sum of all its divisors equal to number
#include<iostream>

using namespace std;

int main()
{
	int n,r,i;
	cout<<"ENTER NO> ";
	cin>>n;
	int sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		cout<<"PERFECT NUMBER";
	}
	else
	{
		cout<<"NOT A PERFECT NUMBER";
	}
	
}
