#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int info;
	node *next;
};
struct node *top=NULL;

void push(int item)
{	struct node *ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	
	ptr->info=item;
	ptr->next=top;
	top=ptr;
	cout<<"INSERTED";
}
void pop()
{	if(top==NULL)
	{
		cout<<"UNDERFLOW";
	}
	else{
	top=top->next;
	cout<<"ELEMENT DELETED";
}
}
void display()
{
	struct node *ptr;
	if(top==NULL)
	{
		cout<<"STACK IS EMPTY";
		
	}
	else
	{
		ptr=top;
		cout<<"STACK ELEMENTS ARE: ";
		while(ptr!=NULL)
		{
			cout<<ptr->info;
			ptr=ptr->next;
		}
	}
	cout<<endl;
}
int main() {
   int ch, item; 
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {   
            cout<<"Enter value to be pushed:"<<endl;
            cin>>item;
            push(item);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4); 
      return 0;
}  
