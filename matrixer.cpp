#include<iostream>
using namespace std;
void transpose(int,int,int[][50]);
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
	transpose(a,b,first);
	
}
void transpose(int a,int b,int first[][50])
{	int i,j,trans[i][j];
	cout<<"TRANSPOSE OF MATRIX IS";
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cout<<first[j][i];
			if(j==b-1)
			{
				cout<<endl;
			}
		}
	}
}
