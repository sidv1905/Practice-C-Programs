#include<iostream>
using namespace std;
int power(int m,int digits)
{	
	int result=1;
	
		do{
		result=result*m;
		digits--;
		
	}while(digits!=0);

	return result;
}
int main()
{
	int n,r,sum,digits;
	cout<<"ENTER NO YOU WANNA CHECK BRO";
	cin>>n;
	digits=0;
	sum=0;
	int temp=n;
	int final=n;
	while(temp!=0)
	{	digits++;
		temp=temp/10;
		
	}
	cout<<digits;
	
	while(n!=0)
	{
		r=n%10;
		sum=sum+power(r,digits);
		n=n/10;
		
	}
	cout<<final;
	cout<<sum;
	if(final==sum)
	{
		cout<<"ARMSTRONG NO IT IS";
	}
	else{
		cout<<"NOT A ARMSTRONG";
	}
	
}
