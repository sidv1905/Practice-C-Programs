#include<iostream>
using namespace std;
int main()
{
	int m,n,result;
	result=1;
	cout<<"ENTER BASE";
	cin>>m;
	cout<<"ENTER EXPONENET";
	cin>>n;
	do{
		result=result*m;
		n--;
		
	}while(n!=0);
	cout<<"M**N is "<<result;
}
