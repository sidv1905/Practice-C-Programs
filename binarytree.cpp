//BINARY TREE OPERATIONS 
//CREATE INSERT DELTER TRAVERSE

#include<iostream>
using namespace std;
struct bstnode
{
	int data;
	bstnode *left;
	bstnode *right;	
};
struct node *root=NULL;

bstnode *createnode(int item)
{	
	struct bstnode *newnode;

	newnode=(struct bstnode*)malloc(sizeof(struct bstnode));
	newnode->data=item;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

void insert(int data)
	{
	struct bstnode *newnode1;
	newnode1=createnode(data);
	if(root==NULL)
	{
		root=newnode1;
	}
	else if(data<=root->data)
	{
		root->left=insert(root->left,data);
	}
	else if(data>root->data)
	{
		root->right=insert(root->right,data);
	}
return root;

}




int main()
{	
	
}
