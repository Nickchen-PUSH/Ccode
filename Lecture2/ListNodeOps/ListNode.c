struct ListNode {
	int val;
	struct ListNode* next;
};
#define NULL 0
#include <stdlib.h>
#include <stdio.h>
int getValue(struct ListNode* head, int index) {
    struct ListNode* cur = head->next;
    if (cur == NULL) {
        return 0;
    }
    int i = 0;
    while (cur != NULL && i < index) {
        cur = cur->next;
        i++;
    }
    if (cur != NULL) {
        return cur->val;
    } else {
        return 0;
    }
}


int addAtIndex(struct ListNode* head, int index, int val){
    struct ListNode* p = head->next;
    if (index==0) {
        if(p==NULL){
            p = (struct ListNode*)malloc(sizeof(struct ListNode));
            p->val = val;
            p->next=NULL;
            head->next=p;
            return 1;
        }
        else{
            struct ListNode* new_node = malloc(sizeof(struct ListNode));
            new_node->val = val;
            new_node->next = p;
            head->next = new_node;
            return 1;
        }
    }
    if(p==NULL&&index!=0){
        return 0;
    }
    for(int i=0;i<index-1;i++){
        p=p->next;
        if(p==NULL){
            return 0;
        }
    }
    struct ListNode* new_node = malloc(sizeof(struct ListNode));
    new_node->val = val;
    new_node->next = p->next;
    p->next = new_node;
    return 1;
}

int deleteAtIndex(struct ListNode* head, int index){
    if(index==0){
        struct ListNode* del = head->next;
        int del_val = del->val;
        head->next = del->next;
        free(del);
        return del_val;
    }
    struct ListNode* p=head->next;
    if (p == NULL) {
        return 0;
    }
    for(int i=0;i<index-1;i++){
        p=p->next;
        if(p==NULL){
            return 0;
        }
    }
    if(p->next==NULL){
        return 0;
    }
    struct ListNode* del = p->next;
    int del_val = del->val;
    p->next = p->next->next;
    free(del);
    return del_val;
}

void reverseList(struct ListNode* head){
   struct ListNode* head_0 = head->next;
    if (head_0 == NULL) {
        return;
    }
    struct ListNode* pre = NULL;
    struct ListNode* cur = head_0;
    while(cur){
        struct ListNode* next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    head->next = pre;
}

// void reverseIndex(struct ListNode* head, int left, int right) {
//     if (head == NULL || left >= right) {
//         return;
//     }
//     struct ListNode *p = head;

//     for (int i = 0; i < left; i++) {
//         p = p->next;
//     }

//     struct ListNode *cur = p->next;
//     struct ListNode *pre = p;
    
//     for (int i = left; i < right; i++) {
//         if(cur==NULL){
//             return;
//         }
//         struct ListNode* next = cur->next;
//         cur->next = pre;
//         pre = cur;
//         cur = next;
//         if(i==left){
//             pre->next=NULL;
//         }
//     }
//     p->next = pre;
// }
void reverseIndex(struct ListNode* head, int left, int right) {
    int i=0;
    if(right<=left){
        return;
    }
    struct ListNode* p_left = head->next;
    if(p_left == NULL){
        return;
    }
    for(i=0;i<left-1;i++){
        p_left=p_left->next;
        if(p_left==NULL){
            return;
        }
    }
    if(left==0){
        p_left=head;
    }
    //p_left指向索引为left-1的节点
    struct ListNode* p_right = head->next;
    for(i=0;i<right;i++){
        p_right=p_right->next;
        if(p_right == NULL){
            return;
        }
    }//p_right指向索引为right的节点
    struct ListNode* p_right_1 = p_right->next;//指向索引为(right+1)的节点
    struct ListNode* p_left_1 = p_left->next;//指向索引为left的节点
    p_right->next=NULL;
    reverseList(p_left);
    p_left_1->next=p_right_1;
}
void printList(struct ListNode* head){
    while(head){
        printf("%d -> ",head->val);
        head=head->next;
    }
    printf("null\n");
}

void freeList(struct ListNode* head){
    struct ListNode *pre = head;
    while(head){
        head=head->next;
        free(pre);
        pre = head;
    }
}
int ListIndex(struct ListNode* li,int Idx) {
    struct ListNode* n = li;
    for(int i = 1;i <= Idx;i++)
    {
        n = n -> next;
    }
    return n->val;
}