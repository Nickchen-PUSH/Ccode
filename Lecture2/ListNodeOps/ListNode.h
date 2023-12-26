#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

int getValue(struct ListNode* head, int index);

int addAtIndex(struct ListNode* head, int index, int val);

int deleteAtIndex(struct ListNode* head, int index);

void reverseList(struct ListNode* head);

void reverseIndex(struct ListNode* head, int left, int right);

void printList(struct ListNode* head);

void freeList(struct ListNode* head);