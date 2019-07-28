#include<iostream>
using namespace std;
int main()
{
 	int i,j,k,rows,space,num,n;
 	cout<<"Enter no. of rows";
 	cin>>rows;
 	num=1;
 	n=rows;
 	for(i=1;i<=rows;i++)
 	{
 		for(space=1;space<=n;space++)
		 {
		 	cout<<" ";	
		 }	
		 n--;
		for(k=1;k<=i;k++)
		{
			cout<<num<<" ";
			
		}
		num=num+1;
		cout<<endl;
	}
}
