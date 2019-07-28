//CIRCULAR queue
// insert delete
#include<iostream>
#include<stdlib.h>
#define maxsize 10
using namespace std;
int front=-1;
int rear=-1;
int a[maxsize];

void insert()
{int item;
cout<<"ENTER ELEMENT";
cin>>item;
	if(front==(rear+1)%maxsize)
	{
		cout<<"OVERFLOW";
	}
	else{
		rear=(rear+1)%maxsize;
		a[rear]=item;
		if(rear==0)
		{
			front=0;
		}
	}
}
void deleter()
{
	if(front==-1)
	{
		cout<<"UNDERLFOW";
	}
	else if(front==rear)
	{
		cout<<"EK HI ELMENET HAI";
		front--;
		rear--;
	}
	else{
		front++;
		cout<<"DELETED";
	}
}

int main()
{
	cout<<"QUEUE CIRCULAR :";
	insert();
	insert();
	insert();
	deleter();
	deleter();
	for(int i=front;i<rear+1;i++)
	{
		cout<<a[i];
	}
}
