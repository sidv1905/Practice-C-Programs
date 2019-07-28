#include<iostream>
using namespace std;
#define maxsize 10
int tos=-1;
int a[maxsize];
void push(int item)
{	if(tos==maxsize-1)
	{
		cout<<"STACK OVERFLOW";
	}
	else{
	tos++;
	a[tos]=item;
	cout<<"ELEMENT ADDED IS : "<<item;
}}

void pop()
{
	if(tos==-1)
	{
		cout<<"STACK UNDERFLOW";
	}
	else
	{	int store=a[tos];
		tos--;
		cout<<store<<"IS DELETED";
	}
}

int main()
{	int c,item;

	
	
	do{
		cout<<"ENTER CHOICE : \n 1.PUSH AN ELEMENT \n 2.POP AN ELEMENT \n 4.DISPLAY LIST \n 3. ENTER ANY OTHER NUM TO EXIT";
	cin>>c;
	switch(c)
	{
		case 1:{
			cout<<"ENTER ELEMENT YOU WANT TO ADD :";
			cin>>item;
			push(item);
			break;
		}
		case 2:{
			pop();
			break;
		}
		
		case 4:{
			for(int i=0;i<tos+1;i++)
			{
				cout<<a[i];
			}
			break;
		}
			
		case 0:{
			exit(0);
			break;
		}
		default:{
			cout<<"ENTER A PEROPER CHOICE";
		}			
	}}while(c!=0);
}

