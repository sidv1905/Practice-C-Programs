#include<iostream>
using namespace std;
void upper(int[][50],int,int);
void lower(int[][50],int,int);



int main()
{
	int a,b,i,j,first[50][50];
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
	upper(first,a,b);
	exit(0);
	lower(first,a,b);
	
	
	

	
}

void upper(int first[][50],int row, int col)
{	int i,j;
	for(i=0;i<row;i++)
	
	{
		for(j=0;j<col;j++)
		{
			if(i>j)
			{
				first[i][j]=0;			
			}
			cout<<first[i][j]<<" ";
	}cout<<endl;
	
}}

void lower(int first[][50],int row, int col)
{
	int i,j;
	for(i=0;i<row;i++)
	
	{
		for(j=0;j<col;j++)
		{
			if(i<j)
			{
				first[i][j]=0;			
			}
			cout<<first[i][j]<<" ";
	}
	cout<<endl;
	}
	
}



