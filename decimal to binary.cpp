#include<iostream>
//decimal to binary
using namespace std;

int main()
{
	int n;
	int binarynum[32],j,i=0;
	cout<<"ENTER decimal";
	cin>>n;
	while(n>0)
	{
		binarynum[i]=n%2;
		n=n/2;
		i++;
	}
///	print binary in reverse bhai
	for(j=i-1;j>=0;j--)
	{
		cout<<binarynum[j];
	}



}
