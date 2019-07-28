#include<iostream>
using namespace std;

int main()
{
	int r,c,mat[50][50],trans[50][50];
	int i,j;
	cout<<"ENTER ROWS AND COLUMS";
	cin>>r;
	cin>>c;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>mat[i][j];
			
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			trans[i][j]=mat[i][j];		
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			trans[j][i]=mat[i][j];		
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(trans[j][i]!=mat[i][j])
			{
				cout<<"MATRIX NOT SYMMETRIC";
				exit(0);		
			}		
		}
	}
	cout<<"MATRIX SYMMETRIC";
	
}
