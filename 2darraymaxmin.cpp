#include<iostream>
using namespace std;
int main ()
{
    int a[2][2],i, j, max, min;
	for(i=0;i<2;i++)
	{	
		for(j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	max=a[0][0];
	for(i=0;i<2;i++)
	{	
		for(j=0;j<2;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
	}
		min=a[0][0];
	for(i=0;i<2;i++)
	{	
		for(j=0;j<2;j++)
		{
			if(min>a[i][j])
			{
				min=a[i][j];
			}
		}
	}
	cout<<"MAX IS : "<<max;
	cout<<" MIN IS : "<<min;
	
}
