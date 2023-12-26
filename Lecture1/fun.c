#include <stdio.h>
int SIZE = 6;
void fun(int a[]){
	for(int i=0;i<6;i++){
		printf("%d",a[i]);
	}
}
int main(){
	int a[6] = {0,1,2,3,4,5};
	fun(a);
	printf("\n");
	return 0;
}