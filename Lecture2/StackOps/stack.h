#pragma once

#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

struct Stack {
	struct ListNode* head;
};

struct Stack* initStack();

int top(struct Stack* stack);

void push(struct Stack* stack, int val);

int pop(struct Stack* stack);

int empty(struct Stack* stack);

void freeStack(struct Stack* stack);