#include<stdlib.h>
#include<stdio.h>

struct node{
	int data;
	struct node* next;
};

struct node* BuildOneTwoThree(){
	struct node* head = NULL;
	struct node* third = NULL;
	struct node* second = NULL;

	head = malloc(sizeof(struct node));
	third = malloc(sizeof(struct node));
	second = malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	return head;
}

int main(){
	struct node* ListaND = BuildOneTwoThree();
	return 0;
}
