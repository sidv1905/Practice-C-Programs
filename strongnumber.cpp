#include<iostream>
using namespace std;

int main()
{
	int n,i,r,fact,sum,initial;
	cout<<"ENTER NO> : ";
	cin>>n;
	initial=n;
	
	sum=0;
	while(n!=0)
	{fact=1;
		r=n%10;
		for(i=r;i>0;i--)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
		
	}
	cout<<"SUM IS : "<<sum;
	if(sum==initial)
	{
		cout<<"STRONG NUMBER :";
		
	}
	else
	{
		cout<<"NOT A STRONG";
	}
}
