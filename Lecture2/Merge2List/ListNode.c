#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *p1 = list1,*p2 = list2;
    if(p1->next==NULL){
        return p2;
    }
    if(p2->next==NULL){
        return p1;
    }
    while(p1&&p2){
        if(p1->next->val>=p2->next->val)
        {
            struct ListNode* cur_2=p2->next;
            while(p2->next&&p1->next->val>=p2->next->val){
                p2=p2->next;
            }
            struct ListNode* next_2=p2->next;
            p2->next = p1->next;
            p1->next = cur_2;
            p1 = p2;
            p2 = next_2;
        }
        else{
            while(p1->next&&p1->next->val<p2->val){
                p1=p1->next;
            }
        }
        
    }
}