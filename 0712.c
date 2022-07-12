#include<stdio.h>
#include<string.h>
#include <stdlib.h>

/* 5
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

int main(){
	int i;
	Node *head = 0, *now = 0;
	
	for (i=0; i<5; i++){

		now = (Node*) malloc (sizeof(Node));
		now->alpha = 'A'+i;
		now->next = 0;

		now->next = head;
		head = now;
		printNode(head);
	}

	printf("-------------\n");

	while(head){
		Node *del = head;
		head = head->next;
		printNode(head);
		free(del);
	}

	printNode(head);
}
*/

/* 4
typedef struct node{
	char alpha;
	struct node *next;
} Node;

void bulitLLByLoop(const char letter[], Node act[]){
	int i;
	Node *now = &act[0];
	for (i=0; i<strlen(letter); i++){
		now->alpha = letter[i];
		if (i==strlen(letter)-1){
			now->next = 0;
		}else{
			now->next = &act[i+1];
		}
		printf("[%d] %c, %p\n", i, now->alpha, now->next);
		now = now -> next;
	}
}

void printNode(const Node *head){
	while(head){
		printf("%c\t", head->alpha);
		head  = head -> next;
	}
	putchar('\n');
}

int main(){

	char letter[5] = {'W','E','A','R'};
	char target = 'E';
	Node act[4], *now = &act[0], *pre = &act[0], x;
	bulitLLByLoop(letter, act);
	printNode(&act[0]);

	while(now){
		if(now->alpha == target){
			pre->next = now->next;
			break;
		}
		pre = now;
		now = now -> next;
	}
	if(now == 0){
		printf("cannot find\n");
	}
	printNode(&act[0]);
}
*/

/* 3
typedef struct node{
    char alpha;
    struct node *next;
} Node;

void printNode(const Node *head){
    while(head){
        printf("%c\t", head->alpha);
        head = head -> next;
    }
}

int main(){
    Node a, c, t;
    a.alpha = 'A';
    a.next = &c;
    a.next -> alpha = 'C';
    a.next -> next = &t;
    a.next -> next -> alpha = 'T';
    a.next -> next -> next = 0;
    printNode(&a);
}
*/

/* 2
struct flight{
	char flightNo[10];

};
typedef struct flight Flight;

struct airlines{
	char airline[10];
	Flight flight[10];
};
typedef struct airlines Airlines;


int put_flightNo(Airlines *A, char flightNoList[][6], int size){
	for (int idx=0; idx<size; idx++){
		strcpy(A->flight[idx].flightNo, flightNoList[idx]);

	}
}

int print_flightNo(Airlines A, int size){
	for (int idx=0; idx<size; idx++){
		printf("Flight Number is %s.\n", A.flight[idx].flightNo);
	}
}

int main(){
	Airlines Emirates;

	char EmiratesFlightInfo[6][6] = {"EK367", "EK366", "EK362", "EK031", "EK943", "EK358"};

	put_flightNo(&Emirates, EmiratesFlightInfo, 6);
	printf("Flight Number is %s.\n", Emirates.flight[0].flightNo);
	printf("-----------------------\n");
	print_flightNo(Emirates, 6);
}
*/

/* 1
struct flight{
    char flightNo[10];
};
typedef struct flight Flight;
int main(){
    Flight Emirates[10];
    strcpy(Emirates[0].flightNo, "EK367");
    strcpy(Emirates[1].flightNo, "EK368");
    strcpy(Emirates[2].flightNo, "EK369");
    for(int i = 0; i<3; i++) printf("Flight NO: %s\n", Emirates[i].flightNo);
}
*/