# 1 "main.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 418 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "main.c" 2



# 1 "./ListNode.h" 1


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
# 5 "main.c" 2

int main() {


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
