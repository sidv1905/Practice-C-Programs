#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int info;
	node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *temp;

void insert()
{
int item;
cout<<"ENTER VALUE OF ITEM: ";
cin>>item;

if(rear==NULL)
{
	rear=(struct node*)malloc(sizeof(struct node));
	rear->next=NULL;
	rear->info=item;
	front=rear;
}
else{
	temp=(struct node*)malloc(sizeof(struct node));
	
	rear->next=temp;
	temp->info=item;
	temp->next=NULL;
	rear=temp;
	
}
}
void deleter()
{
	temp=front;
	if(front==NULL)
	{
		cout<<"UNDERFLOW";
	}
	else
	{	
		if(temp->next!=NULL)
		{
			temp=temp->next;
			
			free(front);
			cout<<"DELeTED;";
			front=temp;	
		}
		else
		{
			free(front);
			front=NULL;
			rear=NULL;
		}
	}
}

void display()
{
	temp=front;
	if((front==NULL) ||(rear==NULL))
	{
		cout<<"EMPTY QUEUE";
	}
	while(temp!=NULL)
	{
		cout<<temp->info<<" ";
		temp=temp->next;
	}
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
do {
   cout<<"Enter your choice : "<<endl;
   cin>>ch;
   switch (ch) {
      case 1: insert();
         break;
      case 2: deleter();
         break;
      case 3: display();
         break;
      case 4: cout<<"Exit"<<endl;
         break;
      default: cout<<"Invalid choice"<<endl;
   }
} while(ch!=4);
   return 0;
}

