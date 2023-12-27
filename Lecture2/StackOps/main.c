#include <stdio.h>
#include <string.h>

#include "stack.h"

int main() {
	struct Stack* stack = initStack();
	
	int n;
	scanf("%d", &n);
	
	while (n--) {
		char s[10];
		scanf("%s", s);
		
		if (strcmp(s, "top") == 0) {
			int res = top(stack);
			if (res == -1) {
				printf("top: fail\n");
			} else {
				printf("top: %d\n", res);
			}
		} else if (strcmp(s, "push") == 0) {
			int val;
			scanf("%d", &val);
			
			push(stack, val);
			printf("push: %d\n", val);
		} else if (strcmp(s, "pop") == 0) {
			int res = pop(stack);
			if (res == -1) {
				printf("pop: fail\n");
			} else {
				printf("pop: %d\n", res);
			}
		} else if (strcmp(s, "empty") == 0) {
			int res = empty(stack);
			if (res == 1) {
				printf("stack empty: true\n");
			} else {
				printf("stack empty: false\n");
			}
		}
	}
	
	freeStack(stack);
	return 0;
} 