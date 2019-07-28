#include<iostream>
using namespace std;
int main()
{
	int first[50][50],second[50][50],third[50][50],a,b,c,d,mult=0,i,j,k;
	
	cout<<"ENTER ROWS AND COLUMNS OF FIRST";
	cin>>a;
	cin>>b;
	cout<<"ENTER ELEMENTS OF FIRST";
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>first[i][j];
		}
	}
	cout<<first[0][0];
	cout<<"Enter ROWS AND COLUMNS OF SECOND";
	cin>>c;
	cin>>d;
	
	if(b!=c)
	{
		cout<<"MATRIX CANNOT BE MULTIPLIED";
		exit(0);
	}
	
	cout<<"ENTER ELEMENTS OF SEOND";
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			cin>>second[i][j];
		}
	}
	cout<<second[0][0];
	for(i=0;i<a;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<d;k++)
			{
				mult=mult+first[i][k]*second[k][j];
			
			}
			
		}
		third[i][j]=mult;
		mult=0;
		
	
	
	
	
	}
	cout<<"PRODUC OF TWO MATRICS IS";
	for(i=0;i<a;i++)
	{
		for(j=0;j<d;j++)
		{
			cout<<third[i][j];
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
