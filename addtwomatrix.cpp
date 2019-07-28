//add two matrices
#include<iostream>
using namespace std;

int main()
{
	int a[50][50],b[50][50],c[50][50];
	int r,col,i,j;
	cout<<"ENTER ROWS AND COLUMNS OF MATRIX: ";
	
	cin>>r;
	cin>>col;
	cout<<"ENTER elements of first MATRIX: ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"ENTER elements of second MATRIX: ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>b[i][j];
		}
	}
	
	cout<<"ENTERING SUM IN C ARRAY: ZUZUZUZUZUUZZUZ";
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	cout<<"PRINTING ELEMENTS SUM FROM C :: ZUZUZUZUUZ";
	
		for(i=0;i<r;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	
}
