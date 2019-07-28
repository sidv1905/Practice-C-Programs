#include<iostream>
#include <cstdlib>
using namespace std;
//dynamic array with its sum as output
int main()

{
	int *a,n,sum;
	
	
	cout<<"ENTER N size of array : ";
	cin>>n;
	a=(int *)malloc(n*sizeof(int));
	
	cout<<"ENTER elements";
	int i;
	for(i=0;i<n;i++)
	{
		cin>>*(a+i);
	}
	cout<<"SUM OF ARRAYS IS: ";
	sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+*(a+i);
	}
	cout<<sum;
	

}
