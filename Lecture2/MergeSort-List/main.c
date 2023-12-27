#include <stdio.h>

#include "sort.h"

int main() {
	int n;
	scanf("%d", &n);
	
	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
	head->next = NULL;
	
	struct ListNode* curr = head;
	for (int i = 0; i < n; i++) {
		struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
		scanf("%d", &(newNode->val));
		newNode->next = NULL;
		curr->next = newNode;
		curr = newNode;
	} 
	
	head->next = mergeSort(head->next);
	
	curr = head->next;
	while(curr != NULL) {
		printf("%d -> ", curr->val);
		curr = curr->next;
	}
	printf("null\n");
	
	while(head != NULL) {
		curr = head;
		head = head -> next;
		free(curr);
	}
	return 0;
}
 