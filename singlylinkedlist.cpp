//SINGLY LINKED LIST
//INSERT,delete,traverse,create
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int info;
	struct node *next;
};
struct node *start=NULL;

void create_node()
{	int data;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(node));
	cout<<"ENTER DATA: ";
	cin>>data;
	newnode->info=data;
	start=newnode;
	newnode->next=NULL;
}

void insatbeg()
{	int data;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(node));
	cout<<"ENTER LEMENT TO ADD AT BEG:  ";
	cin>>data;
	newnode->next=start;
	start=newnode;
	newnode->info=data;
}


void insatend()
{int data;	
struct node *newnode;
struct node *temp;
newnode=(struct node*)malloc(sizeof(node));
	cout<<"ENTER ELEMENT TO ADD AT END: ";
	cin>>data;
	temp=start;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=NULL;
}
void insatpos()
{	int pos,data;
struct node *temp;
struct node *ptr;
struct node *newnode;
	newnode=(struct node*)malloc(sizeof(node));
	cout<<"ENTER POSITION WHERE YOU WANT TO ADD : ";
	cin>>pos;
	cout<<"ENTER DATA YOU WANT TO ADDD :";
	cin>>data;
	temp=newnode;
	ptr=start;
	for(int i=1;i<pos-1 && ptr!=NULL ;i++)
	{
		ptr=ptr->next;
	}
	temp->next=ptr->next;
	ptr->next=temp;
}
void delatpos()
{	int pos;
	cout<<"ENTER POS";
	cin>>pos;
	struct node *ptr,*temp;
	ptr=start;
	for(int i=1;i<pos-1 && ptr!=NULL ;i++)
	{
		ptr=ptr->next;
	}
	temp=ptr->next;
	ptr->next=temp->next;
	free(temp);
	
}

void display()
{
	struct node *temp;
	temp=start;
	while(temp!=NULL)
	{
		cout<<temp->info;
		temp=temp->next;
	}	
}


int main() {
   int ch;
   cout<<"1) create element to queue"<<endl;
   cout<<"2) ins at pos element from queue"<<endl;
   cout<<"3) del at pos all the elements of queue"<<endl;
   cout<<"4) display"<<endl;
do {
   cout<<"Enter your choice : "<<endl;
   cin>>ch;
   switch (ch) {
      case 1: create_node();
         break;
      case 2: insatpos();
         break;
    	
      case 3: delatpos();
         break;
      case 4: display();
         break;
	 
      case 6: cout<<"Exit"<<endl;
         break;
      default: cout<<"Invalid choice"<<endl;p
   }
} while(ch!=4);
   return 0;
}


