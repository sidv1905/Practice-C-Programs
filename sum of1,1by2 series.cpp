#include<iostream>
using namespace std;
//TO FIND sum of 1+1/2+1/3+1/4.....

int main()
{
	int n;
	float sum=0.0;
	
	cout<<"enter n upto which YOU want sum";
	cin>>n;
	while(n!=0)
	{
		sum=sum+(float)1/n;
		n--;
	}
	
	
	
	
	cout<<sum;
}
