/*
This code show a simple example of a binary 
three with a root node with two nodes.
*/

#include <stdio.h>
#include <stdlib.h>


struct node
{
	int key_data;
	struct node* left;
	struct node* right;
};


struct node* newNode(int data)
{
	//Allocate memory for new node
	struct node* node_created = (struct node*)malloc(sizeof(struct node));
	
	//Assigning the value to the node
	node_created->key_data = data;
	
	//Setting left and right children to NULL
	node_created->left = NULL;
	node_created->right = NULL;
	return (node_created);
}


int main()
{
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);

	printf("___%d___\n", root->key_data);
	printf("%d", root->left->key_data);
	printf("     %d\n", root->right->key_data);

	return 0;
}

