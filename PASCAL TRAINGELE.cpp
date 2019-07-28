#include<iostream>
using namespace std;
int main()
{
	int rows,space,num,i,j,k;
	cout<<"enter no of rows : ";
	cin>>rows;
	for(i=0;i<rows;i++)
	{
		for(space=0;space<(rows-i);space++)
		{
			cout<<" ";
		}
		num=1;
		for(k=0;k<=i;k++)
		{
			cout<<" "<<num;
			num=num*(i-k)/(k+1);
		}
		cout<<endl;
	}
}
