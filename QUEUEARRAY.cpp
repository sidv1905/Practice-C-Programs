//QUEUE USING ARRAYS
#include<iostream>
using namespace std;
#define maxsize 10
int a[maxsize];
int front=-1;
int rear=-1;


void insert()
{ int item;
	if(rear==maxsize-1)
	{
		cout<<"OVERLFOW";
		}	
	else{
					cout<<"ENTER ELEMENT YOU WANT TO ADD :";
			cin>>item;
		rear++;
		a[rear]=item;
		if(rear==0)
		{
			front=0;
		}
	}
}
void deleter()
{
	if(front==-1 || front>rear)
	{
		cout<<"UNDERFLOW";
		}	
	else 
	{
		front++;
		cout<<"DELETED";
	}
}

int main()
{	int c,item;

	
	
	do{
		cout<<"ENTER CHOICE : \n 1.INSERT AN ELEMENT \n 2.DELETE AN ELEMENT \n 4.DISPLAY LIST \n 3. ENTER ANY OTHER NUM TO EXIT";
	cin>>c;
	switch(c)
	{
		case 1:{

			insert();
			break;
		}
		case 2:{
			deleter();
			break;
		}
		
		case 4:{
			for(int i=front;i<rear+1;i++)
			{
				cout<<a[i]<<" ";
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
