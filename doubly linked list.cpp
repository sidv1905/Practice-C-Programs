//doubly linked list
//create insert delete
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int info;
	struct node *next;
	struct node *prev;
};
struct node *start=NULL;

struct node *createnode()
{	struct node *newnode;
int x;
	cout<<"ENTER DATA YOU WANT IN THIS NEW NODE :";
	cin>>x;
	
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=x; 
	newnode->prev=NULL;
	newnode->next=NULL;
	
	return newnode;
	
}
void insertatstart()
{
	struct node *newnode1=createnode();
	if(start==NULL)
	{
		start=newnode1;
	}
	else
	{
		start->prev=NULL;
		newnode1->next=start;
		start=newnode1;
	}
	
}
void deletefirst()
{
	struct node *temp;
	if(start==NULL)
	{
		cout<<"LIST IS EMPTY BRO";
	}
	else
	{	temp=start;
		start=start->next;
		start->prev=NULL;
		free(temp);
	}
}
void display()
{
	struct node *temp;
	temp=start;
	if(start==NULL)
	{
		cout<<"KYA EMPTY LIST DEKHEGA";
	}
	else
	{
		while(temp->next!=NULL)
		{
			cout<<temp->info<<" ";
			temp=temp->next;
			
		}
	}
}
int main() {
   int ch;
   cout<<"1) insert"<<endl;
   cout<<"2) delete"<<endl;
   cout<<"3) display"<<endl;
   cout<<"4) je ne sais pas"<<endl;
do {
   cout<<"Enter your choice : "<<endl;
   cin>>ch;
   switch (ch) {
      case 1:{
      	insertatstart();
		break;
	  }
      case 2:{
      	deletefirst();
		break;
	  }
    	
      case 3:{
      	display();
		break;
	  }
      
	 
      case 6: cout<<"Exit"<<endl;
         break;
      default: cout<<"Invalid choice"<<endl;
   }
} while(ch!=4);
   return 0;
}


