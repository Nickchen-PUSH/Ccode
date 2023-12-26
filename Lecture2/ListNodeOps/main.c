#include <stdio.h>
#include <string.h>

#include "ListNode.h"

int main() {
	//head指向的节点为头节点，不包含数据信息，不计入链表下标 
	//head->next指向链表的第一个节点，该节点的下标为0 
	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
	head->next = NULL;
	
	int n;
	scanf("%d", &n);
	
	while (n--) {
		char s[20];
		scanf("%s", s);
		
		if (strcmp(s, "getValue") == 0) {
			int index;
			scanf("%d", &index);
			
			int res = getValue(head, index);
			if (res == 0) {
				printf("getValue: fail\n");
			} else {
				printf("getValue: get %d\n", res);
			}
		} else if (strcmp(s, "addAtIndex") == 0) {
			int index, val;
			scanf("%d%d", &index, &val);
			
			int res = addAtIndex(head, index, val);
			if (res == 1) {
				printf("addAtIndex: add %d at %d\n", val, index);
			} else {
				printf("addAtIndex: fail\n");
			}
		} else if (strcmp(s, "deleteAtIndex") == 0) {
			int index;
			scanf("%d", &index);
			
			int res = deleteAtIndex(head, index);
			if (res == 0) {
				printf("deleteAtIndex: fail\n");
			} else {
				printf("deletaAtIndex: delete %d at %d\n", res, index);
			}
		} else if (strcmp(s, "reverseList") == 0) {
			reverseList(head);
			printList(head->next);
		} else if (strcmp(s, "reverseIndex") == 0) {
			int left, right;
			scanf("%d%d", &left, &right);
			
			reverseIndex(head, left, right);
			printList(head->next);
		}
	}
	
	printf("\n");
	printList(head->next);
	
	freeList(head->next); 
	head->next = NULL;
	free(head);
	
	return 0;
} 