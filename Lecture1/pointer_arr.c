#include <stdio.h>
int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    //int *arr = malloc(sizeof(int)*10);
    // for (int i = 0; i < 10; i++)
    // {
    //     *(arr+i)=i;
    // }
    
    printf("%d\n",arr[3]);
    printf("%d\n",*(arr+3));
    for(int i=0;i<10;i++){
        printf("pointer+%d: %p\n",i,arr+i);
    }
    return 0;
}