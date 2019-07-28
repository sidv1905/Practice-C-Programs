//multiply two matrices//INCOMPLETE
#include<iostream>
using namespace std;

int main()
{	int a[50][50],b[50][50],c[50][50];
	int r1,col1,r2,col2,i,j;
	cout<<"ENTER ROWS AND COLUMNS OF MATRIX 1: ";
	
	cin>>r1;
	cin>>col1;
	cout<<"ENTER ROWS AND COLUMNS OF MATRIX 2: ";
	
	cin>>r2;
	cin>>col2;
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
	
}
