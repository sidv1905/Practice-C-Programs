#include<iostream>
using namespace std;
//INCOMPLETE
int main()
{
	int i,j,matrix[50][50],row,col,det;
	cout<<"ENTER ROWS AND COLUMSNs of matrix :: ";
	cin>row;
	cin>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>matrix[i][j];
		}
	}
	if(row==2 && col==2)
	{
		det=matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
	}
	
}
