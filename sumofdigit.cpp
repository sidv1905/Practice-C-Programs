#include<iostream>
using namespace std;
int main()
{
	int num,i,r;
	cin>>num;
	int sum=0;
	while(num!=0)
	{	
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	cout<<"SUM IS"<<sum;
}
