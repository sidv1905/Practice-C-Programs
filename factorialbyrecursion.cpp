#include<iostream>
using namespace std;
int factorial(int);

int factorial(int n)
{	
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
	
}
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<factorial(num);
	
	
	
}
