#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

struct Stack {
	struct ListNode* head;
};

struct Stack* initStack(){
    struct Stack* stack= (struct Stack*)malloc(sizeof(struct Stack));
    stack->head=(struct ListNode*)malloc(sizeof(struct ListNode));
    stack->head->val=-1;
    stack->head->next=NULL;
    return stack;
}

int top(struct Stack* stack){
    return stack->head->val;
}

void push(struct Stack* stack, int val){
    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val = val;
    newnode->next = stack->head;
    stack->head=newnode;
}

int pop(struct Stack* stack){
    int val = stack->head->val;
    if(val==-1){
        return -1;
    }
    else{
        stack->head=stack->head->next;
        return val;
    }
}

int empty(struct Stack* stack){
    return stack->head->val==-1?1:0;
}

void freeStack(struct Stack* stack){
    struct ListNode* pre = stack->head;
    while(stack->head){
        stack->head = stack->head->next;
        free(pre);
        pre = stack->head;
    }
    free(stack);
}