
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

struct ListNode* mergeSort(struct ListNode* head);

struct ListNode* merge(struct ListNode* list1, struct ListNode* list2);