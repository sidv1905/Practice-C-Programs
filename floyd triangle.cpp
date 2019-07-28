#include<iostream>
using namespace std;

int main()
{
	int rows,num,i,j;
	cout<<"ENTER NO> OF ROWS;";
	cin>>rows;
	num=1;
	for(i=0;i<rows;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			cout<<num<<" ";
			num++;
		}
		cout<<endl;
		
	}
}
