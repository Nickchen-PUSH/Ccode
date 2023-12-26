#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "ListNode.h"

struct ListNode* addNode(int val) {
    struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
    p->val = val;
    p->next = NULL;
    return p;
}

void freeList(struct ListNode* head) {
    if (head == NULL)   return;
    freeList(head->next);
    head->next = NULL;
    free(head);
}

void printList(struct ListNode* head) {
    if (head == NULL) {
        puts("NULL");
        return;
    }
    while (head) {
        printf("%d ", head->val);
        head = head->next;
    }
    puts("");
}

int main() {
    struct ListNode* head1 = addNode(-1), *head2 = addNode(-1);
    struct ListNode* cur1 = head1, *cur2 = head2;

    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0, x; i < n; ++i) {
        scanf("%d", &x);
        cur1->next = addNode(x);
        cur1 = cur1->next;
    }
    for (int i = 0, x; i < m; ++i) {
        scanf("%d", &x);
        cur2->next = addNode(x);
        cur2 = cur2->next;
    }

    struct ListNode* res = mergeTwoLists(head1->next, head2->next);
    printList(res);
    freeList(res);
    free(head1);
    free(head2);
    return 0;
}
