#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct node{
	char alpha;
	struct node *next;
} Node;

void printNode(const Node *head){
	while(head){
		printf("%c\t", head->alpha);
		head  = head -> next;
	}
	putchar('\n');
}

void push(Node **stack, char letter){
    Node *temp = (Node*) malloc(sizeof(Node));
    temp -> alpha = letter;
    temp -> next = *stack;
    *stack = temp;
}

void pop(Node** stack){
    Node *temp = *stack;
    *stack = temp->next;
    free(temp);
}

void release(Node **stack){
    while(*stack){
        Node *temp = *stack;
        *stack = temp->next;
        free(temp);

    }
}

int main(){
    Node *link = 0;
    push(&link, 'B');
	push(&link, 'H');
	push(&link, 'E');
	push(&link, 'D');
	printNode(link);

	Node h;
	h.alpha = 'H';
	h.next = 0;

	Node *head = link, *pre = 0, *now = head, *new = &h;
	
	while (now && now->alpha < new->alpha){
		pre = now;
		now = now->next;
	}
	if (pre==0){
		head = head->next;
        free(now);
	}
    else{
        pre -> next = now->next;
        free(now);
    }

	printNode(head);
    release(&head);
}


int main2(){
	Node *link = 0;
	push(&link, 'H');
	push(&link, 'E');
	push(&link, 'D');
	printNode(link);

	Node a;
	a.alpha = 'G';
	a.next = 0;

	Node *head = link, *pre = 0, *now = head, *new = &a;
	
	while (now && now->alpha < new->alpha){
		pre = now;
		now = now->next;
	}
	if (pre==0){
		new->next = head;
		head = new;
	}
    else{
        pre -> next = new;
        new->next = now;
    }

	printNode(head);
}

int main1(){
    Node *head = 0;
    push(&head, 'A');
    push(&head, 'T');
    push(&head, 'C');
    push(&head, 'G');
    push(&head, 'I');
    push(&head, 'O');
    printNode(head);
    pop(&head);
    printNode(head);
    pop(&head);
    printNode(head);
    pop(&head);
    printNode(head);
    pop(&head);
    release(&head);
    printNode(head);
}