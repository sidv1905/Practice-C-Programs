#include<iostream>
#include<math.h>
using namespace std;
//QUADRTAIC EQUATION BY DISCRIMINANT:
int main()
{
	double a,b,c,dis;
	cout<<"ENTER QUADRATIC EQUATIONS COEEFFIECENTS : IN FORMAT ax2 +bx+c";
	cin>>a;
	cin>>b;
	cin>>c;
	double root1,root2;
	dis=b*b-4*a*c;
	
	if(dis>0)
	{	root1=(-b+sqrt(dis))/(2*a);
		root2=(-b-sqrt(dis))/(2*a);
			cout<<"root1 is  : "<<root1;
		cout<<"root2 is  : "<<root2;
	}
	else if(dis==0)
	{	root1=-b/(2*a);
		root1=root2;
			cout<<"root1 is  : "<<root1;
		cout<<"root2 is  : "<<root2;
	}
	else if(dis<0)
	{
		double realpart,imaginarypart;
		realpart=-b/(2*a);
		imaginarypart=sqrt(-dis)/2*a;
		cout<<"root1 is  : "<<realpart<<"+i"<<imaginarypart;
		cout<<"root2 is  : "<<realpart<<"-i"<<imaginarypart;
	}
	
	
}
